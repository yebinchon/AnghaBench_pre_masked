
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_vnic_res_spec {TYPE_1__* resources; } ;
struct usnic_vnic {int dummy; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;
struct TYPE_2__ {int type; int cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usnic_vnic*,int) ;

int FUNC_1(struct usnic_vnic *VAR_3,
    struct usnic_vnic_res_spec *VAR_4)
{
 int VAR_5;
 enum usnic_vnic_res_type VAR_6;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = VAR_4->resources[VAR_5].type;
  VAR_7 = VAR_4->resources[VAR_5].cnt;

  if (VAR_6 == VAR_1)
   break;

  if (VAR_7 > FUNC_0(VAR_3, VAR_6))
   return -VAR_0;
 }

 return 0;
}
