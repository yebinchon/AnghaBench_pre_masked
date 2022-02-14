
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long mtmdsclock; } ;
struct TYPE_4__ {TYPE_1__ video_mode; } ;
struct dw_hdmi {int ddc; TYPE_2__ hdmi_data; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct dw_hdmi*) ;

void FUNC_2(struct dw_hdmi *VAR_1)
{
 unsigned long VAR_2 = VAR_1->hdmi_data.video_mode.mtmdsclock;


 if (FUNC_1(VAR_1)) {
  if (VAR_2 > VAR_0)
   FUNC_0(VAR_1->ddc, 1);
  else
   FUNC_0(VAR_1->ddc, 0);
 }
}
