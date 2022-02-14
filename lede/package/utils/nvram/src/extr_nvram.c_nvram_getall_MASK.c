
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int value; int name; } ;
typedef TYPE_1__ nvram_tuple_t ;
struct TYPE_7__ {TYPE_1__** nvram_hash; } ;
typedef TYPE_2__ nvram_handle_t ;


 int FUNC_0 (TYPE_1__**) ;
 scalar_t__ FUNC_1 (int) ;

nvram_tuple_t * FUNC_2(nvram_handle_t *VAR_0)
{
 int VAR_1;
 nvram_tuple_t *VAR_2, *VAR_3, *VAR_4;

 VAR_3 = ((void*)0);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->nvram_hash); VAR_1++) {
  for (VAR_2 = VAR_0->nvram_hash[VAR_1]; VAR_2; VAR_2 = VAR_2->next) {
   if( (VAR_4 = (nvram_tuple_t *) FUNC_1(sizeof(nvram_tuple_t))) != ((void*)0) )
   {
    VAR_4->name = VAR_2->name;
    VAR_4->value = VAR_2->value;
    VAR_4->next = VAR_3;
    VAR_3 = VAR_4;
   }
   else
   {
    break;
   }
  }
 }

 return VAR_3;
}
