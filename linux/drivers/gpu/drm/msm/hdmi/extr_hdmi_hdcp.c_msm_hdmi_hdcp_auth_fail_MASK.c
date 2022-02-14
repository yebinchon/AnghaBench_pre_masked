
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_hdcp_ctrl {int hdcp_reauth_work; int hdcp_state; struct hdmi* hdmi; } ;
struct hdmi {int workq; int reg_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hdmi*,int ) ;
 int FUNC_2 (struct hdmi*,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct hdmi_hdcp_ctrl *VAR_3)
{
 struct hdmi *VAR_4 = VAR_3->hdmi;
 u32 VAR_5;
 unsigned long VAR_6;

 FUNC_0("hdcp auth failed, queue reauth work");

 FUNC_4(&VAR_4->reg_lock, VAR_6);
 VAR_5 = FUNC_1(VAR_4, VAR_2);
 VAR_5 &= ~VAR_1;
 FUNC_2(VAR_4, VAR_2, VAR_5);
 FUNC_5(&VAR_4->reg_lock, VAR_6);

 VAR_3->hdcp_state = VAR_0;
 FUNC_3(VAR_4->workq, &VAR_3->hdcp_reauth_work);
}
