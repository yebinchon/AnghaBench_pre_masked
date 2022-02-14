
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi_i2c {int stat; int cmp; } ;
struct dw_hdmi {struct dw_hdmi_i2c* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dw_hdmi*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct dw_hdmi *VAR_4)
{
 struct dw_hdmi_i2c *VAR_5 = VAR_4->i2c;
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_5->cmp, VAR_3 / 10);
 if (!VAR_6) {

  if (!FUNC_0(VAR_4))
   return -VAR_0;


  VAR_6 = FUNC_1(&VAR_5->cmp, VAR_3 / 10);
  if (!VAR_6)
   return -VAR_0;
 }


 if (VAR_5->stat & VAR_2)
  return -VAR_1;

 return 0;
}
