
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_vnic_res_spec {TYPE_1__* resources; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ cnt; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const struct usnic_vnic_res_spec *VAR_2,
     struct usnic_vnic_res_spec *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (VAR_3->resources[VAR_5].type !=
    VAR_2->resources[VAR_5].type)
    continue;
   VAR_4 = 1;
   if (VAR_2->resources[VAR_5].cnt >
     VAR_3->resources[VAR_5].cnt)
    return -VAR_0;
   break;
  }

  if (!VAR_4)
   return -VAR_0;
 }
 return 0;
}
