
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_map_entry {struct fs_map_entry* a_name; struct fs_map_entry* entry; struct fs_map_entry* remoteMountPoint; struct fs_map_entry* mountPoint; } ;


 struct fs_map_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct fs_map_entry*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct fs_map_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_6(void)
{
 struct fs_map_entry *VAR_3;

      while ((VAR_3 = FUNC_0(&VAR_0)) != ((void*)0)) {
  FUNC_1(&VAR_0, VAR_2);
  if (VAR_3->entry != ((void*)0)) {
   FUNC_3(&VAR_1, VAR_3->entry, VAR_2);
   FUNC_5(VAR_3->entry->mountPoint);
   FUNC_5(VAR_3->entry->remoteMountPoint);
   FUNC_5(VAR_3->entry);
  }
  FUNC_5(VAR_3->a_name);
  FUNC_5(VAR_3);
      }
 FUNC_4(FUNC_2(&VAR_1));
}
