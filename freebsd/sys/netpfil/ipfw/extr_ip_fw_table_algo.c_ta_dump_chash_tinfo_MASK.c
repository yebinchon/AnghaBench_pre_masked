
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct chashentry {int dummy; } ;
struct chash_cfg {int items6; int size6; int items4; int size4; } ;
struct TYPE_3__ {int flags; int itemsize4; int itemsize6; int count6; int size6; void* taclass6; int count4; int size4; void* taclass4; } ;
typedef TYPE_1__ ipfw_ta_tinfo ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(void *VAR_3, struct table_info *VAR_4, ipfw_ta_tinfo *VAR_5)
{
 struct chash_cfg *VAR_6;

 VAR_6 = (struct chash_cfg *)VAR_3;

 VAR_5->flags = VAR_1 | VAR_2;
 VAR_5->taclass4 = VAR_0;
 VAR_5->size4 = VAR_6->size4;
 VAR_5->count4 = VAR_6->items4;
 VAR_5->itemsize4 = sizeof(struct chashentry);
 VAR_5->taclass6 = VAR_0;
 VAR_5->size6 = VAR_6->size6;
 VAR_5->count6 = VAR_6->items6;
 VAR_5->itemsize6 = sizeof(struct chashentry);
}
