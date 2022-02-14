
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* context; } ;
struct dm_array_info {TYPE_1__ value_type; } ;
struct array_block {int nr_entries; } ;


 void const* FUNC_0 (struct dm_array_info*,struct array_block*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dm_array_info *VAR_0, struct array_block *VAR_1,
         void (*VAR_2)(void *, const void *))
{
 unsigned VAR_3, VAR_4 = FUNC_1(VAR_1->nr_entries);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  VAR_2(VAR_0->value_type.context, FUNC_0(VAR_0, VAR_1, VAR_3));
}
