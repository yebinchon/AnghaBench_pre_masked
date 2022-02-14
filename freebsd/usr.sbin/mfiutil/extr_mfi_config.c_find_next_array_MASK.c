
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct config_id_state {scalar_t__ array_ref; int array_count; scalar_t__* arrays; } ;



__attribute__((used)) static uint16_t
FUNC_0(struct config_id_state *VAR_0)
{
 int VAR_1;


 VAR_0->array_ref++;


 for (VAR_1 = 0; VAR_1 < VAR_0->array_count; VAR_1++)
  if (VAR_0->arrays[VAR_1] == VAR_0->array_ref)
   VAR_0->array_ref++;
 return (VAR_0->array_ref);
}
