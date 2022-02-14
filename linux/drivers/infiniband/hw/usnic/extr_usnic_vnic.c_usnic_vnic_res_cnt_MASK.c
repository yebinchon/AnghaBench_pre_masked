
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_vnic {TYPE_1__* chunks; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;
struct TYPE_2__ {int cnt; } ;



int FUNC_0(struct usnic_vnic *VAR_0,
    enum usnic_vnic_res_type VAR_1)
{
 return VAR_0->chunks[VAR_1].cnt;
}
