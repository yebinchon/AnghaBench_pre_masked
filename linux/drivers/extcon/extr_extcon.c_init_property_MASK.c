
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extcon_dev {struct extcon_cable* cables; } ;
struct extcon_cable {int disp_propval; int jack_propval; int chg_propval; int usb_propval; } ;
struct TYPE_2__ {unsigned int type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct extcon_dev *VAR_5, unsigned int VAR_6, int VAR_7)
{
 unsigned int VAR_8 = VAR_4[VAR_6].type;
 struct extcon_cable *VAR_9 = &VAR_5->cables[VAR_7];

 if (VAR_3 & VAR_8)
  FUNC_0(VAR_9->usb_propval, 0, sizeof(VAR_9->usb_propval));
 if (VAR_0 & VAR_8)
  FUNC_0(VAR_9->chg_propval, 0, sizeof(VAR_9->chg_propval));
 if (VAR_2 & VAR_8)
  FUNC_0(VAR_9->jack_propval, 0, sizeof(VAR_9->jack_propval));
 if (VAR_1 & VAR_8)
  FUNC_0(VAR_9->disp_propval, 0, sizeof(VAR_9->disp_propval));
}
