
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi {int reg_lock; int hdmi_mode; } ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hdmi*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct hdmi *VAR_3, bool VAR_4)
{
 uint32_t VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_2(&VAR_3->reg_lock, VAR_6);
 if (VAR_4) {
  VAR_5 |= VAR_0;
  if (!VAR_3->hdmi_mode) {
   VAR_5 |= VAR_1;
   FUNC_1(VAR_3, VAR_2, VAR_5);
   VAR_5 &= ~VAR_1;
  } else {
   VAR_5 |= VAR_1;
  }
 } else {
  VAR_5 = VAR_1;
 }

 FUNC_1(VAR_3, VAR_2, VAR_5);
 FUNC_3(&VAR_3->reg_lock, VAR_6);
 FUNC_0("HDMI Core: %s, HDMI_CTRL=0x%08x",
   VAR_4 ? "Enable" : "Disable", VAR_5);
}
