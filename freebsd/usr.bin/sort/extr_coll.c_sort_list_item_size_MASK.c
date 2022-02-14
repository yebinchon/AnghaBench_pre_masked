
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {scalar_t__ str; int ka; } ;
struct key_value {scalar_t__ k; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct key_value* FUNC_1 (int *,size_t) ;
 int FUNC_2 () ;
 size_t VAR_0 ;

size_t
FUNC_3(struct sort_list_item *VAR_1)
{
 size_t VAR_2 = 0;

 if (VAR_1) {
  VAR_2 = sizeof(struct sort_list_item) + FUNC_2();
  if (VAR_1->str)
   VAR_2 += FUNC_0(VAR_1->str);
  for (size_t VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
   const struct key_value *VAR_4;

   VAR_4 = FUNC_1(&VAR_1->ka, VAR_3);

   if (VAR_4->k != VAR_1->str)
    VAR_2 += FUNC_0(VAR_4->k);
  }
 }
 return (VAR_2);
}
