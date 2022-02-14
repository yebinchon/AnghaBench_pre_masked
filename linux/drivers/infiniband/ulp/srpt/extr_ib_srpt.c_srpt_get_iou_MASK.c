
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ status; } ;
struct ib_dm_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_dm_iou_info {int max_controllers; int controller_list; int change_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct ib_dm_mad *VAR_0)
{
 struct ib_dm_iou_info *VAR_1;
 u8 VAR_2;
 int VAR_3;

 VAR_1 = (struct ib_dm_iou_info *)VAR_0->data;
 VAR_1->change_id = FUNC_0(1);
 VAR_1->max_controllers = 16;


 FUNC_1(VAR_1->controller_list, 1, 1);
 for (VAR_3 = 1, VAR_2 = 2; VAR_3 < 16; VAR_3++, VAR_2++)
  FUNC_1(VAR_1->controller_list, VAR_2, 0);

 VAR_0->mad_hdr.status = 0;
}
