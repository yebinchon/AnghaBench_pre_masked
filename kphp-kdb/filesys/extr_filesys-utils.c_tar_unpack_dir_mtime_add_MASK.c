
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tar_unpack_dir_mtime_entry** e; } ;
typedef TYPE_1__ tar_unpack_dir_mtime_t ;
struct tar_unpack_dir_mtime_entry {struct tar_unpack_dir_mtime_entry* next; int dirname; int st; } ;
struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct stat*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 struct tar_unpack_dir_mtime_entry* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4 (tar_unpack_dir_mtime_t *VAR_1, char *VAR_2, struct stat *VAR_3) {
  int VAR_4 = 0;
  char *VAR_5;
  for (VAR_5 = VAR_2; *VAR_5; VAR_5++) {
    if (*VAR_5 == '/') {
      VAR_4++;
    }
  }
  if (VAR_4 < VAR_0) {
    struct tar_unpack_dir_mtime_entry *VAR_6 = FUNC_3 (sizeof (struct tar_unpack_dir_mtime_entry) + FUNC_2 (VAR_2) + 1);
    FUNC_0 (&VAR_6->st, VAR_3, sizeof (struct stat));
    FUNC_1 (VAR_6->dirname, VAR_2);
    VAR_6->next = VAR_1->e[VAR_4];
    VAR_1->e[VAR_4] = VAR_6;
  }
}
