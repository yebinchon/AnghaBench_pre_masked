
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dirent {char const* d_name; } ;
struct TYPE_5__ {struct TYPE_5__* next; int filename; int st; } ;
typedef TYPE_1__ file_t ;
typedef int dyn_mark_t ;
typedef int DIR ;
typedef int A ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 int * FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_1__**,int,int,int ) ;
 struct dirent* FUNC_9 (int *) ;
 int FUNC_10 (char*,int,char*,char const*) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (char const*,char*,int) ;
 int FUNC_15 (int,char*,char const*,...) ;
 int FUNC_16 (TYPE_1__*,int) ;
 void* FUNC_17 (int) ;
 int FUNC_18 (char const*) ;

int FUNC_19 (const char *VAR_3, file_t **VAR_4, int VAR_5, int VAR_6) {
  *VAR_4 = ((void*)0);
  char VAR_7[VAR_0];
  int VAR_8 = FUNC_10 (VAR_7, VAR_0, "%s/", VAR_3);
  if (VAR_8 >= VAR_0 - 1) { return 0; }
  int VAR_9 = VAR_0 - 1 - VAR_8;
  int VAR_10 = 0;
  file_t *VAR_11 = ((void*)0), *VAR_12;
  DIR *VAR_13 = FUNC_7 (VAR_3);
  if (VAR_13 == ((void*)0)) {
    FUNC_15 (1, "opendir (%s) returns NULL.\n", VAR_3);
    return 0;
  }
  while (1) {
    VAR_2 = 0;
    struct dirent *VAR_14 = FUNC_9 (VAR_13);
    if (VAR_14 == ((void*)0)) {
      if (VAR_2) {
        FUNC_5 ("getdir (%s) failed. %m\n", VAR_3);
        FUNC_4 (1);
      }
      break;
    }
    if (!FUNC_11 (VAR_14->d_name, ".") || !FUNC_11 (VAR_14->d_name, "..")) {
      continue;
    }

    if (!VAR_6 && !FUNC_14 (VAR_14->d_name, ".", 1)) {
      FUNC_15 (1, "Skip %s in %s.\n", VAR_14->d_name, VAR_3);
      continue;
    }

    if (FUNC_13 (VAR_14->d_name) > VAR_9) {
      FUNC_15 (1, "Skipping too long filename (%s/%s).\n", VAR_3, VAR_14->d_name);
      continue;
    }

    FUNC_12 (VAR_7 + VAR_8, VAR_14->d_name);
    VAR_12 = FUNC_17 (sizeof (file_t));
    if (FUNC_6 (VAR_7, &VAR_12->st)) {
      FUNC_5 ("lstat (%s) fail. %m\n", VAR_7);
      FUNC_16 (VAR_12, sizeof (file_t));
      continue;
    }
    VAR_12->filename = FUNC_18 (VAR_14->d_name);
    VAR_12->next = VAR_11;
    VAR_11 = VAR_12;
    VAR_10++;
  }
  FUNC_1 (VAR_13);
  if (!VAR_5) {
    *VAR_4 = VAR_11;
  } else if (VAR_10) {
    int VAR_15;
    dyn_mark_t VAR_16;
    FUNC_2 (VAR_16);
    file_t **VAR_17 = FUNC_17 (VAR_10 * sizeof (file_t *));
    VAR_12 = VAR_11;
    for (VAR_15 = VAR_10 - 1; VAR_15 >= 0; VAR_15--) {
      VAR_17[VAR_15] = VAR_12;
      VAR_12 = VAR_12->next;
    }
    FUNC_0 (VAR_12 == ((void*)0));
    FUNC_8 (VAR_17, VAR_10, sizeof (VAR_17[0]), VAR_1);
    VAR_17[VAR_10-1]->next = ((void*)0);
    for (VAR_15 = 0; VAR_15 < VAR_10 - 1; VAR_15++) {
      VAR_17[VAR_15]->next = VAR_17[VAR_15+1];
    }
    *VAR_4 = VAR_17[0];
    FUNC_3 (VAR_16);
  }
  return VAR_10;
}
