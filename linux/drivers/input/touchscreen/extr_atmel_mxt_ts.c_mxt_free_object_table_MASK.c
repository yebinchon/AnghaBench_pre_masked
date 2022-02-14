
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v4l2; int vdev; } ;
struct mxt_data {scalar_t__ max_reportid; scalar_t__ T100_reportid_max; scalar_t__ T100_reportid_min; scalar_t__ T44_address; scalar_t__ T19_reportid; scalar_t__ T9_reportid_max; scalar_t__ T9_reportid_min; scalar_t__ T71_address; scalar_t__ T7_address; scalar_t__ T6_reportid; scalar_t__ T5_msg_size; scalar_t__ T5_address; int * msg_buf; int * raw_info_block; int * info; int * object_table; TYPE_1__ dbg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mxt_data *VAR_0)
{




 VAR_0->object_table = ((void*)0);
 VAR_0->info = ((void*)0);
 FUNC_0(VAR_0->raw_info_block);
 VAR_0->raw_info_block = ((void*)0);
 FUNC_0(VAR_0->msg_buf);
 VAR_0->msg_buf = ((void*)0);
 VAR_0->T5_address = 0;
 VAR_0->T5_msg_size = 0;
 VAR_0->T6_reportid = 0;
 VAR_0->T7_address = 0;
 VAR_0->T71_address = 0;
 VAR_0->T9_reportid_min = 0;
 VAR_0->T9_reportid_max = 0;
 VAR_0->T19_reportid = 0;
 VAR_0->T44_address = 0;
 VAR_0->T100_reportid_min = 0;
 VAR_0->T100_reportid_max = 0;
 VAR_0->max_reportid = 0;
}
