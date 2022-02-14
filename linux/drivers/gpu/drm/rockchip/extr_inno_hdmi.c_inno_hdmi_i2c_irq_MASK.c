
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inno_hdmi_i2c {int cmp; } ;
struct inno_hdmi {struct inno_hdmi_i2c* i2c; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inno_hdmi*,int ) ;
 int FUNC_2 (struct inno_hdmi*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_3(struct inno_hdmi *VAR_4)
{
 struct inno_hdmi_i2c *VAR_5 = VAR_4->i2c;
 u8 VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (!(VAR_6 & VAR_3))
  return VAR_2;


 FUNC_2(VAR_4, VAR_0, VAR_3);

 FUNC_0(&VAR_5->cmp);

 return VAR_1;
}
