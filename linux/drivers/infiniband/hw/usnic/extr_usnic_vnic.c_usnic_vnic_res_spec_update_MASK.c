
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usnic_vnic_res_spec {TYPE_1__* resources; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;
struct TYPE_2__ {int type; int cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(struct usnic_vnic_res_spec *VAR_1,
    enum usnic_vnic_res_type VAR_2,
    u16 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->resources[VAR_4].type == VAR_2) {
   VAR_1->resources[VAR_4].cnt = VAR_3;
   return;
  }
 }

 FUNC_0(1);
}
