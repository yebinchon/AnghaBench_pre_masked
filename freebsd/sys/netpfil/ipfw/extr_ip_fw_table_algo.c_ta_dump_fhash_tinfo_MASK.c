
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct fhashentry6 {int dummy; } ;
struct fhashentry4 {int dummy; } ;
struct fhash_cfg {int items; int size; } ;
struct TYPE_3__ {int itemsize4; int itemsize6; int count4; int size4; int taclass4; int flags; } ;
typedef TYPE_1__ ipfw_ta_tinfo ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(void *VAR_2, struct table_info *VAR_3, ipfw_ta_tinfo *VAR_4)
{
 struct fhash_cfg *VAR_5;

 VAR_5 = (struct fhash_cfg *)VAR_2;

 VAR_4->flags = VAR_1;
 VAR_4->taclass4 = VAR_0;
 VAR_4->size4 = VAR_5->size;
 VAR_4->count4 = VAR_5->items;
 VAR_4->itemsize4 = sizeof(struct fhashentry4);
 VAR_4->itemsize6 = sizeof(struct fhashentry6);
}
