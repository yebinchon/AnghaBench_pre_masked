
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_rename_entry {char* dir; int possible_new_dirs; int new_dir; scalar_t__ non_unique_new_dir; int ent; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct dir_rename_entry *VAR_0,
      char *VAR_1)
{
 FUNC_0(&VAR_0->ent, FUNC_2(VAR_1));
 VAR_0->dir = VAR_1;
 VAR_0->non_unique_new_dir = 0;
 FUNC_1(&VAR_0->new_dir, 0);
 FUNC_3(&VAR_0->possible_new_dirs, 0);
}
