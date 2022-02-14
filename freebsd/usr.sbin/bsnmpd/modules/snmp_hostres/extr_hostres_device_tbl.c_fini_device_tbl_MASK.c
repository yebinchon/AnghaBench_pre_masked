
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_map_entry {struct device_map_entry* location_key; struct device_map_entry* name_key; int * entry_p; } ;


 int FUNC_0 (int *) ;
 struct device_map_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device_map_entry*) ;
 int VAR_4 ;

void
FUNC_10(void)
{
 struct device_map_entry *VAR_5;

 if (VAR_0 != ((void*)0))
  FUNC_8(VAR_0);

 if (VAR_1 != -1)
  (void)FUNC_6(VAR_1);

 FUNC_7();

      while ((VAR_5 = FUNC_1(&VAR_2)) != ((void*)0)) {
  FUNC_2(&VAR_2, VAR_4);
  if (VAR_5->entry_p != ((void*)0)) {
   FUNC_4(&VAR_3, VAR_5->entry_p, VAR_4);
   FUNC_0(VAR_5->entry_p);
  }
  FUNC_9(VAR_5->name_key);
  FUNC_9(VAR_5->location_key);
  FUNC_9(VAR_5);
      }
 FUNC_5(FUNC_3(&VAR_3));
}
