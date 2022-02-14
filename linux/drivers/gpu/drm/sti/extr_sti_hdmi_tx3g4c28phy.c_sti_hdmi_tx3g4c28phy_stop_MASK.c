
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hdmi {int event_received; int wait_event; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sti_hdmi*,int ) ;
 int FUNC_3 (struct sti_hdmi*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct sti_hdmi *VAR_7)
{
 int VAR_8 = 0;

 FUNC_0("\n");

 VAR_7->event_received = 0;

 VAR_8 = VAR_2;
 VAR_8 |= VAR_1;

 FUNC_3(VAR_7, VAR_8, VAR_0);
 FUNC_3(VAR_7, 0, VAR_3);


 FUNC_5(VAR_7->wait_event,
      VAR_7->event_received == 1,
      FUNC_4
      (VAR_6));

 if (FUNC_2(VAR_7, VAR_4) & VAR_5)
  FUNC_1("hdmi phy pll not well disabled\n");
}
