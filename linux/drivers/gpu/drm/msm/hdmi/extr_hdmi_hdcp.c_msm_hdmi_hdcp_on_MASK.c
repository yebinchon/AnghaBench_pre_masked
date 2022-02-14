
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_hdcp_ctrl {scalar_t__ hdcp_state; int hdcp_auth_work; scalar_t__ auth_retries; scalar_t__ auth_event; struct hdmi* hdmi; } ;
struct hdmi {int workq; int reg_lock; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hdmi*,int ) ;
 int FUNC_2 (struct hdmi*,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct hdmi_hdcp_ctrl *VAR_5)
{
 struct hdmi *VAR_6 = VAR_5->hdmi;
 u32 VAR_7;
 unsigned long VAR_8;

 if ((VAR_1 != VAR_5->hdcp_state) ||
  (VAR_2 == VAR_5->hdcp_state)) {
  FUNC_0("still active or activating or no askv. returning");
  return;
 }


 FUNC_4(&VAR_6->reg_lock, VAR_8);
 VAR_7 = FUNC_1(VAR_6, VAR_4);
 VAR_7 &= ~VAR_3;
 FUNC_2(VAR_6, VAR_4, VAR_7);
 FUNC_5(&VAR_6->reg_lock, VAR_8);

 VAR_5->auth_event = 0;
 VAR_5->hdcp_state = VAR_0;
 VAR_5->auth_retries = 0;
 FUNC_3(VAR_6->workq, &VAR_5->hdcp_auth_work);
}
