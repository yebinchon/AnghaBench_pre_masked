
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct rtentry {int dummy; } ;
struct TYPE_3__ {int itemsize4; int itemsize6; scalar_t__ count6; void* taclass6; scalar_t__ count4; void* taclass4; int flags; } ;
typedef TYPE_1__ ipfw_ta_tinfo ;


 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(void *VAR_2, struct table_info *VAR_3, ipfw_ta_tinfo *VAR_4)
{

 VAR_4->flags = VAR_1;
 VAR_4->taclass4 = VAR_0;
 VAR_4->count4 = 0;
 VAR_4->itemsize4 = sizeof(struct rtentry);
 VAR_4->taclass6 = VAR_0;
 VAR_4->count6 = 0;
 VAR_4->itemsize6 = sizeof(struct rtentry);
}
