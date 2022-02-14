
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_hdcp_ctrl {scalar_t__ auth_retries; int hdcp_state; struct hdmi* hdmi; } ;
struct hdmi {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hdmi*,int ) ;
 int FUNC_1 (struct hdmi*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct hdmi_hdcp_ctrl *VAR_5)
{
 struct hdmi *VAR_6 = VAR_5->hdmi;
 u32 VAR_7;
 unsigned long VAR_8;





 FUNC_2(&VAR_6->reg_lock, VAR_8);
 VAR_7 = FUNC_0(VAR_6, VAR_4);
 VAR_7 |= VAR_2;
 FUNC_1(VAR_6, VAR_4, VAR_7);
 FUNC_3(&VAR_6->reg_lock, VAR_8);


 FUNC_2(&VAR_6->reg_lock, VAR_8);
 VAR_7 = FUNC_0(VAR_6, VAR_3);
 VAR_7 |= VAR_1;
 FUNC_1(VAR_6, VAR_3, VAR_7);
 FUNC_3(&VAR_6->reg_lock, VAR_8);

 VAR_5->hdcp_state = VAR_0;
 VAR_5->auth_retries = 0;
}
