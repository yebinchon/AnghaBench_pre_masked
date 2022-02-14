
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storage_map_entry {struct storage_map_entry* a_name; struct storage_map_entry* entry; struct storage_map_entry* descr; } ;


 struct storage_map_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct storage_map_entry*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct storage_map_entry*) ;
 struct storage_map_entry* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct storage_map_entry* VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_6(void)
{
 struct storage_map_entry *VAR_7;

 if (VAR_5 != ((void*)0)) {
  FUNC_5(VAR_5);
  VAR_5 = ((void*)0);
 }
 VAR_6 = 0;

 if (VAR_0 != ((void*)0)) {
  FUNC_5(VAR_0);
  VAR_0 = ((void*)0);
 }
 VAR_1 = 0;

 while ((VAR_7 = FUNC_0(&VAR_3)) != ((void*)0)) {
  FUNC_1(&VAR_3, VAR_2);
  if (VAR_7->entry != ((void*)0)) {
   FUNC_3(&VAR_4, VAR_7->entry, VAR_2);
   FUNC_5(VAR_7->entry->descr);
   FUNC_5(VAR_7->entry);
  }
  FUNC_5(VAR_7->a_name);
  FUNC_5(VAR_7);
 }
 FUNC_4(FUNC_2(&VAR_4));
}
