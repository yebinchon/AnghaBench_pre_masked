
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct resource_info {int res_susp_fen; int res_susp_nod; int res_susp; int res_role; } ;
struct drbd_resource_state_change {int * susp_fen; int * susp_nod; int * susp; int * role; struct drbd_resource* resource; } ;
struct drbd_resource {int dummy; } ;
typedef enum drbd_notification_type { ____Placeholder_drbd_notification_type } drbd_notification_type ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int,struct drbd_resource*,struct resource_info*,int) ;

void FUNC_1(struct sk_buff *VAR_1,
      unsigned int VAR_2,
      struct drbd_resource_state_change *VAR_3,
      enum drbd_notification_type VAR_4)
{
 struct drbd_resource *VAR_5 = VAR_3->resource;
 struct resource_info VAR_6 = {
  .res_role = VAR_3->role[VAR_0],
  .res_susp = VAR_3->susp[VAR_0],
  .res_susp_nod = VAR_3->susp_nod[VAR_0],
  .res_susp_fen = VAR_3->susp_fen[VAR_0],
 };

 FUNC_0(VAR_1, VAR_2, VAR_5, &VAR_6, VAR_4);
}
