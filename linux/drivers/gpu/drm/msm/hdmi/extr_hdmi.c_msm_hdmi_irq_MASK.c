
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi {scalar_t__ hdcp_ctrl; int i2c; int connector; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct hdmi *VAR_3 = VAR_2;


 FUNC_0(VAR_3->connector);


 FUNC_2(VAR_3->i2c);


 if (VAR_3->hdcp_ctrl)
  FUNC_1(VAR_3->hdcp_ctrl);



 return VAR_0;
}
