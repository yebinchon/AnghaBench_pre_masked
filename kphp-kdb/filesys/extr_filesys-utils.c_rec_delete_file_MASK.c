
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_4__ {char const* filename; struct stat st; struct TYPE_4__* next; } ;
typedef TYPE_1__ file_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*,TYPE_1__**,int ,int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char*,char*,char const*,char const*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (int,char*,char const*) ;

__attribute__((used)) static int FUNC_9 (const char *VAR_1, struct stat *VAR_2) {
  char VAR_3[VAR_0];
  if (FUNC_1 (VAR_2->st_mode)) {
    if (FUNC_7 (VAR_1)) {
      FUNC_8 (1, "unlink (%s) failed. %m\n", VAR_1);
      return -5;
    }
  } else if (FUNC_0 (VAR_2->st_mode)) {
    int VAR_4 = FUNC_6 (VAR_1);
    file_t *VAR_5, *VAR_6;
    int VAR_7 = FUNC_3 (VAR_1, &VAR_5, 0, 1);
    if (VAR_7 < 0) {
      return -2;
    }
    for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
      int VAR_8 = VAR_4 + 2 + FUNC_6 (VAR_6->filename);
      if (VAR_0 < VAR_8) {
        return -6;
      }
      FUNC_5 (VAR_3, "%s/%s", VAR_1, VAR_6->filename);
      if (FUNC_9 (VAR_3, &VAR_6->st) < 0) {
        return -3;
      }
    }
    FUNC_2 (VAR_5);
    if (FUNC_4 (VAR_1)) {
      FUNC_8 (1, "rmdir (%s) failed. %m\n", VAR_1);
      return -7;
    }
  } else {
    if (FUNC_7 (VAR_1)) {
      return -4;
    }
  }
  return 0;
}
