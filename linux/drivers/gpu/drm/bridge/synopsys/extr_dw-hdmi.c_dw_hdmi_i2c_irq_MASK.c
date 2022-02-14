
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi_i2c {unsigned int stat; int cmp; } ;
struct dw_hdmi {struct dw_hdmi_i2c* i2c; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct dw_hdmi*,int ) ;
 int FUNC_2 (struct dw_hdmi*,unsigned int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(struct dw_hdmi *VAR_3)
{
 struct dw_hdmi_i2c *VAR_4 = VAR_3->i2c;
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_5)
  return VAR_2;

 FUNC_2(VAR_3, VAR_5, VAR_0);

 VAR_4->stat = VAR_5;

 FUNC_0(&VAR_4->cmp);

 return VAR_1;
}
