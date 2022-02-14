
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int data; int filename; } ;
typedef TYPE_1__ tftp_file_t ;
struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ ssize_t ;
typedef int s ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 TYPE_1__* FUNC_6 (char*,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int,int ,scalar_t__) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*,char**) ;
 int VAR_2 ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*) ;

int FUNC_14 (const char *VAR_3) {
  char VAR_4[16384];
  FILE *VAR_5 = FUNC_4 (VAR_3, "r");
  if (VAR_5 == ((void*)0)) {
    FUNC_7 ("fail to open config file '%s'. %m\n", VAR_3);
    return -1;
  }
  int VAR_6 = 0, VAR_7 = 0, VAR_8 = -1;
  while (FUNC_3 (VAR_4, sizeof (VAR_4), VAR_5) != ((void*)0)) {
    VAR_6++;
    int VAR_9 = FUNC_10 (VAR_4);
    if (VAR_9 >= sizeof (VAR_4) - 1) {
      FUNC_7 ("config line %d is too long\n", VAR_6);
      VAR_7--;
      break;
    }
    char *VAR_10;
    char *VAR_11 = FUNC_11 (VAR_4, "\t\n ", &VAR_10);
    if (VAR_11 == ((void*)0)) {
      continue;
    }
    char *VAR_12 = FUNC_11 (((void*)0), "\t\n ", &VAR_10);
    if (VAR_12 == ((void*)0)) {
      FUNC_7 ("at the %d line of config filename for alias '%s' wasn't given.\n", VAR_6, VAR_11);
      VAR_7--;
      break;
    }
    int VAR_13 = VAR_2;
    tftp_file_t *VAR_14 = FUNC_6 (VAR_11, 1);
    if (VAR_13 == VAR_2) {
      FUNC_7 ("%d line of config file contains duplicate record for alias '%s'.\n", VAR_6, VAR_11);
      VAR_7--;
      break;
    }
    int VAR_15 = FUNC_8 (VAR_12, VAR_0);
    if (VAR_15 < 0) {
      FUNC_7 ("fail to open file '%s' for alias '%s' (config line: %d). %m\n", VAR_12, VAR_11, VAR_6);
      VAR_7--;
      break;
    }
    struct stat VAR_16;
    if (FUNC_5 (VAR_15, &VAR_16) < 0) {
      FUNC_7 ("fstat for file '%s' for alias '%s' failed (config line: %d). %m\n", VAR_12, VAR_11, VAR_6);
      VAR_7--;
      break;
    }
    VAR_14->size = VAR_16.st_size;
    if (VAR_14->size > VAR_1) {
      FUNC_7 ("file '%s' for alias '%s' is too big (more than %lld bytes) (config line: %d). %m\n", VAR_12, VAR_11, VAR_14->size, VAR_6);
      VAR_7--;
      break;
    }
    VAR_14->data = FUNC_12 (VAR_14->size);
    VAR_14->filename = FUNC_13 (VAR_12);
    ssize_t VAR_17 = FUNC_9 (VAR_15, VAR_14->data, VAR_14->size);
    if (VAR_17 != VAR_14->size) {
      if (VAR_17 < 0) {
        FUNC_7 ("read from file '%s' for alias '%s' failed. %m\n", VAR_12, VAR_11);
        VAR_7--;
        break;
      } else {
        FUNC_7 ("read only %lld bytes of expected %lld bytes from file '%s' for alias '%s'.\n", (long long) VAR_17, VAR_14->size, VAR_12, VAR_11);
        VAR_7--;
        break;
      }
    }
    FUNC_0 (!FUNC_1 (VAR_15));
    VAR_15 = -1;
  }

  if (VAR_8 >= 0) {
    FUNC_1 (VAR_8);
    VAR_8 = -1;
  }

  if (VAR_5) {
    FUNC_2 (VAR_5);
  }
  return VAR_7;
}
