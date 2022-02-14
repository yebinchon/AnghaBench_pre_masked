
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; TYPE_1__* ops; } ;
struct dw_hdmi {int rxsense; int disabled; int force; TYPE_2__ phy; } ;
struct TYPE_3__ {int (* update_hpd ) (struct dw_hdmi*,int ,int ,int ,int ) ;} ;


 int FUNC_0 (struct dw_hdmi*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dw_hdmi *VAR_0)
{
 if (VAR_0->phy.ops->update_hpd)
  VAR_0->phy.ops->update_hpd(VAR_0, VAR_0->phy.data,
       VAR_0->force, VAR_0->disabled,
       VAR_0->rxsense);
}
