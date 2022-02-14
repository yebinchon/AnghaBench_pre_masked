
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct numarray_cfg {int used; int size; } ;
struct numarray {int dummy; } ;
struct TYPE_3__ {int itemsize4; int count4; int size4; int taclass4; } ;
typedef TYPE_1__ ipfw_ta_tinfo ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, struct table_info *VAR_2, ipfw_ta_tinfo *VAR_3)
{
 struct numarray_cfg *VAR_4;

 VAR_4 = (struct numarray_cfg *)VAR_1;

 VAR_3->taclass4 = VAR_0;
 VAR_3->size4 = VAR_4->size;
 VAR_3->count4 = VAR_4->used;
 VAR_3->itemsize4 = sizeof(struct numarray);
}
