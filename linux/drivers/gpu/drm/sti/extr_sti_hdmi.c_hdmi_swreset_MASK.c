
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_hdmi {int event_received; int clk_audio; int wait_event; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sti_hdmi*,int ) ;
 int FUNC_5 (struct sti_hdmi*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static void FUNC_8(struct sti_hdmi *VAR_5)
{
 u32 VAR_6;

 FUNC_0("\n");


 if (FUNC_3(VAR_5->clk_audio))
  FUNC_1("Failed to prepare/enable hdmi_audio clk\n");


 VAR_5->event_received = 0;

 VAR_6 = FUNC_4(VAR_5, VAR_0);
 VAR_6 |= VAR_1;
 FUNC_5(VAR_5, VAR_6, VAR_0);


 FUNC_7(VAR_5->wait_event,
      VAR_5->event_received,
      FUNC_6
      (VAR_4));





 if ((FUNC_4(VAR_5, VAR_2) & VAR_3) == 0)
  FUNC_0("Warning: HDMI sw reset timeout occurs\n");

 VAR_6 = FUNC_4(VAR_5, VAR_0);
 VAR_6 &= ~VAR_1;
 FUNC_5(VAR_5, VAR_6, VAR_0);


 FUNC_2(VAR_5->clk_audio);
}
