
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct sti_hdmi {TYPE_1__ mode; scalar_t__ hdmi_monitor; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sti_hdmi*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct sti_hdmi *VAR_10)
{
 u32 VAR_11;

 FUNC_0("\n");


 VAR_11 = VAR_5 | VAR_6;


 VAR_11 |= VAR_4;
 if (VAR_10->hdmi_monitor)
  VAR_11 |= VAR_7;


 if (VAR_10->mode.flags & VAR_0) {
  FUNC_0("H Sync Negative\n");
  VAR_11 |= VAR_8;
 }


 if (VAR_10->mode.flags & VAR_1) {
  FUNC_0("V Sync Negative\n");
  VAR_11 |= VAR_9;
 }


 VAR_11 |= VAR_3;

 FUNC_1(VAR_10, VAR_11, VAR_2);
}
