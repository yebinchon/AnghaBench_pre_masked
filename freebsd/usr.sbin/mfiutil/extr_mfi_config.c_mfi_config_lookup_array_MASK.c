
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mfi_config_data {int array_count; int array_size; scalar_t__ array; } ;
struct mfi_array {scalar_t__ array_ref; } ;



__attribute__((used)) static struct mfi_array *
FUNC_0(struct mfi_config_data *VAR_0, uint16_t VAR_1)
{
 struct mfi_array *VAR_2;
 char *VAR_3;
 int VAR_4;

 VAR_3 = (char *)VAR_0->array;
 for (VAR_4 = 0; VAR_4 < VAR_0->array_count; VAR_4++) {
  VAR_2 = (struct mfi_array *)VAR_3;
  if (VAR_2->array_ref == VAR_1)
   return (VAR_2);
  VAR_3 += VAR_0->array_size;
 }

 return (((void*)0));
}
