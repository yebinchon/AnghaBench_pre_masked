
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_vnic_res_spec {TYPE_1__* resources; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;
struct TYPE_2__ {int type; int cnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char*,int ,int) ;
 int FUNC_1 (int) ;

int FUNC_2(char *VAR_1, int VAR_2,
    struct usnic_vnic_res_spec *VAR_3)
{
 enum usnic_vnic_res_type VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = VAR_3->resources[VAR_6].type;
  VAR_5 = VAR_3->resources[VAR_6].cnt;
  VAR_7 += FUNC_0(VAR_1 + VAR_7, VAR_2 - VAR_7,
    "Res: %s Cnt: %d ",
    FUNC_1(VAR_4),
    VAR_5);
 }

 return VAR_7;
}
