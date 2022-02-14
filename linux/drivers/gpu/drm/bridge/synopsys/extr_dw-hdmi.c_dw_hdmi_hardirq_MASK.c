
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dw_hdmi {scalar_t__ i2c; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dw_hdmi*) ;
 scalar_t__ FUNC_1 (struct dw_hdmi*,int ) ;
 int FUNC_2 (struct dw_hdmi*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct dw_hdmi *VAR_6 = VAR_5;
 u8 VAR_7;
 irqreturn_t VAR_8 = VAR_2;

 if (VAR_6->i2c)
  VAR_8 = FUNC_0(VAR_6);

 VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_2(VAR_6, ~0, VAR_0);
  return VAR_3;
 }

 return VAR_8;
}
