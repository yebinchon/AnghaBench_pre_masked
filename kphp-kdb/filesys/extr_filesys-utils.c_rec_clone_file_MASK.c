
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {char* st_mode; } ;
struct TYPE_4__ {char* filename; struct stat st; struct TYPE_4__* next; } ;
typedef TYPE_1__ file_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,TYPE_1__**,int ,int) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int,char*,char const* const,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_11 (const char *const VAR_1, const char *const VAR_2, char *VAR_3, struct stat *VAR_4) {
  char VAR_5[VAR_0], VAR_6[VAR_0];
  if (FUNC_1 (VAR_4->st_mode)) {
    if (FUNC_8 (VAR_5, VAR_0, "%s/%s", VAR_1, VAR_3) >= VAR_0) {
      return -1;
    }
    int VAR_7 = FUNC_7 (VAR_5, VAR_6, VAR_0);
    if (VAR_7 < 0 || VAR_7 >= VAR_0) {
      return -4;
    }
    VAR_6[VAR_7] = 0;
    if (FUNC_8 (VAR_5, VAR_0, "%s/%s", VAR_2, VAR_3) >= VAR_0) {
      return -1;
    }
    if (FUNC_9 (VAR_6, VAR_5) < 0) {
      FUNC_10 (1, "symlink (%s, %s) failed. %m\n", VAR_6, VAR_5);
      return -5;
    }
    if (FUNC_4 (VAR_5, VAR_4) < 0) {
      return -6;
    }
  } else if (FUNC_0 (VAR_4->st_mode)) {
    if (FUNC_8 (VAR_5, VAR_0, "%s/%s", VAR_2, VAR_3) >= VAR_0) {
      return -1;
    }
    if (FUNC_6 (VAR_5, VAR_4->st_mode)) {
      FUNC_10 (1, "mkdir (%s, %d) fail. %m\n", VAR_5, VAR_4->st_mode);
      return -2;
    }
    if (FUNC_8 (VAR_5, VAR_0, "%s/%s", VAR_1, VAR_3) >= VAR_0) {
      return -1;
    }
    file_t *VAR_8, *VAR_9;
    int VAR_10 = FUNC_3 (VAR_5, &VAR_8, 0, 1);
    if (VAR_10 < 0) {
      return -2;
    }
    for (VAR_9 = VAR_8; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
      if (FUNC_8 (VAR_5, VAR_0, "%s/%s", VAR_3, VAR_9->filename) >= VAR_0) {
        return -1;
      }
      if (FUNC_11 (VAR_1, VAR_2, VAR_5, &VAR_9->st) < 0) {
        return -3;
      }
    }
    FUNC_2 (VAR_8);
    if (FUNC_8 (VAR_5, VAR_0, "%s/%s", VAR_2, VAR_3) >= VAR_0) {
      return -1;
    }
    if (FUNC_4 (VAR_5, VAR_4) < 0) {
      return -7;
    }
  } else {
    if (FUNC_8 (VAR_5, VAR_0, "%s/%s", VAR_1, VAR_3) >= VAR_0 || FUNC_8 (VAR_6, VAR_0, "%s/%s", VAR_2, VAR_3) >= VAR_0) {
      return -1;
    }
    if (FUNC_5 (VAR_5, VAR_6) < 0) {
      FUNC_10 (1, "link (%s, %s) fail. %m\n", VAR_5, VAR_6);
      return -1;
    }
  }
  return 0;
}
