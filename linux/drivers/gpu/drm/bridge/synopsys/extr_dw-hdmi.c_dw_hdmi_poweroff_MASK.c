
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enabled; int data; TYPE_1__* ops; } ;
struct dw_hdmi {int bridge_is_on; TYPE_2__ phy; } ;
struct TYPE_3__ {int (* disable ) (struct dw_hdmi*,int ) ;} ;


 int FUNC_0 (struct dw_hdmi*,int ) ;

__attribute__((used)) static void FUNC_1(struct dw_hdmi *VAR_0)
{
 if (VAR_0->phy.enabled) {
  VAR_0->phy.ops->disable(VAR_0, VAR_0->phy.data);
  VAR_0->phy.enabled = 0;
 }

 VAR_0->bridge_is_on = 0;
}
