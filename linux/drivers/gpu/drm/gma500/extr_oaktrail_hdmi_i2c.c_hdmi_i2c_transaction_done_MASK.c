
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oaktrail_hdmi_dev {struct hdmi_i2c_dev* i2c_dev; } ;
struct hdmi_i2c_dev {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct oaktrail_hdmi_dev *VAR_5)
{
 struct hdmi_i2c_dev *VAR_6 = VAR_5->i2c_dev;
 u32 VAR_7;


 VAR_7 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_7 | VAR_2);
 FUNC_0(VAR_1);


 VAR_7 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_7 & ~VAR_3);
 FUNC_0(VAR_0);

 VAR_6->status = VAR_4;
 return;
}
