
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oaktrail_hdmi_dev {struct hdmi_i2c_dev* i2c_dev; } ;
struct hdmi_i2c_dev {int complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oaktrail_hdmi_dev*) ;
 int FUNC_4 (struct oaktrail_hdmi_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct oaktrail_hdmi_dev *VAR_7 = VAR_6;
 struct hdmi_i2c_dev *VAR_8 = VAR_7->i2c_dev;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_0);

 if (VAR_9 & VAR_1) {
  FUNC_1(VAR_0, VAR_9 | VAR_1);
  FUNC_0(VAR_0);
 }

 if (VAR_9 & VAR_3)
  FUNC_3(VAR_7);

 if (VAR_9 & VAR_2)
  FUNC_4(VAR_7);

 FUNC_2(&VAR_8->complete);

 return VAR_4;
}
