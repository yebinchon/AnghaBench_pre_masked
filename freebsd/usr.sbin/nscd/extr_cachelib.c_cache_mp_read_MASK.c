
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cache_mp_read_session_ {TYPE_1__* current_item; } ;
struct TYPE_3__ {size_t value_size; int value; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int (*) (struct cache_mp_read_session_*,char*,size_t*)) ;
 int FUNC_2 (int (*) (struct cache_mp_read_session_*,char*,size_t*)) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ,size_t) ;

int
FUNC_5(struct cache_mp_read_session_ *VAR_1, char *VAR_2, size_t *VAR_3)
{

 FUNC_1(FUNC_5);
 FUNC_3(VAR_1 != ((void*)0));

 if (VAR_1->current_item == ((void*)0)) {
  FUNC_2(FUNC_5);
  return (-1);
 }

 if (VAR_1->current_item->value_size > *VAR_3) {
  *VAR_3 = VAR_1->current_item->value_size;
  if (VAR_2 == ((void*)0)) {
   FUNC_2(FUNC_5);
   return (0);
  }

  FUNC_2(FUNC_5);
  return (-2);
 }

 *VAR_3 = VAR_1->current_item->value_size;
 FUNC_4(VAR_2, VAR_1->current_item->value, VAR_1->current_item->value_size);
 VAR_1->current_item = FUNC_0(VAR_1->current_item, VAR_0);

 FUNC_2(FUNC_5);
 return (0);
}
