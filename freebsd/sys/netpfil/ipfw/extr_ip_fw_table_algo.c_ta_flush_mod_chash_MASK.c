
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_item {int * main_ptr6; int * main_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct mod_item *VAR_2;

 VAR_2 = (struct mod_item *)VAR_1;
 if (VAR_2->main_ptr != ((void*)0))
  FUNC_0(VAR_2->main_ptr, VAR_0);
 if (VAR_2->main_ptr6 != ((void*)0))
  FUNC_0(VAR_2->main_ptr6, VAR_0);
}
