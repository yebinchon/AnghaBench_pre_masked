
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_map_entry {struct partition_map_entry* id; struct partition_map_entry* entry; struct partition_map_entry* label; } ;


 struct partition_map_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct partition_map_entry*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct partition_map_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_6(void)
{
 struct partition_map_entry *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_1)) != ((void*)0)) {
  FUNC_1(&VAR_1, VAR_0);
  if(VAR_3->entry != ((void*)0)) {
   FUNC_3(&VAR_2, VAR_3->entry, VAR_0);
   FUNC_5(VAR_3->entry->id);
   FUNC_5(VAR_3->entry->label);
   FUNC_5(VAR_3->entry);
  }
  FUNC_5(VAR_3->id);
  FUNC_5(VAR_3);
 }
 FUNC_4(FUNC_2(&VAR_2));
}
