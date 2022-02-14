
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_hdcp_ctrl {scalar_t__ hdcp_state; int hdcp_reauth_work; int hdcp_auth_work; int auth_event_queue; int auth_event; struct hdmi* hdmi; } ;
struct hdmi {int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hdmi*,int ) ;
 int FUNC_3 (struct hdmi*,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct hdmi_hdcp_ctrl *VAR_11)
{
 struct hdmi *VAR_12 = VAR_11->hdmi;
 unsigned long VAR_13;
 u32 VAR_14;

 if ((VAR_1 == VAR_11->hdcp_state) ||
  (VAR_2 == VAR_11->hdcp_state)) {
  FUNC_0("hdcp inactive or no aksv. returning");
  return;
 }







 FUNC_5(&VAR_12->reg_lock, VAR_13);
 VAR_14 = FUNC_2(VAR_12, VAR_10);
 VAR_14 &= ~VAR_5;
 FUNC_3(VAR_12, VAR_10, VAR_14);






 FUNC_3(VAR_12, VAR_8, 0);
 FUNC_6(&VAR_12->reg_lock, VAR_13);







 FUNC_4(VAR_0, &VAR_11->auth_event);
 FUNC_7(&VAR_11->auth_event_queue);
 FUNC_1(&VAR_11->hdcp_auth_work);
 FUNC_1(&VAR_11->hdcp_reauth_work);

 FUNC_3(VAR_12, VAR_9,
  VAR_4);


 FUNC_3(VAR_12, VAR_7, 0);

 FUNC_5(&VAR_12->reg_lock, VAR_13);
 VAR_14 = FUNC_2(VAR_12, VAR_6);
 VAR_14 &= ~VAR_3;
 FUNC_3(VAR_12, VAR_6, VAR_14);


 VAR_14 = FUNC_2(VAR_12, VAR_10);
 VAR_14 |= VAR_5;
 FUNC_3(VAR_12, VAR_10, VAR_14);
 FUNC_6(&VAR_12->reg_lock, VAR_13);

 VAR_11->hdcp_state = VAR_1;

 FUNC_0("HDCP: Off");
}
