
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_hdcp_ctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdmi_hdcp_ctrl*,int*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct hdmi_hdcp_ctrl *VAR_3)
{
 u32 VAR_4[2], VAR_5[2];
 u32 VAR_6 = 0;

 VAR_4[0] = VAR_2;
 VAR_5[0] = VAR_1;
 VAR_4[1] = VAR_2;
 VAR_5[1] = VAR_0;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5, 2);

 return VAR_6;
}
