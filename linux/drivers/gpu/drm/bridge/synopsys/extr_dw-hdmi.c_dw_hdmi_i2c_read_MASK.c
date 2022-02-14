
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi_i2c {int is_regaddr; int slave_reg; int is_segment; int cmp; } ;
struct dw_hdmi {int dev; struct dw_hdmi_i2c* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_hdmi*) ;
 int FUNC_2 (struct dw_hdmi*,int ) ;
 int FUNC_3 (struct dw_hdmi*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dw_hdmi *VAR_5,
       unsigned char *VAR_6, unsigned int VAR_7)
{
 struct dw_hdmi_i2c *VAR_8 = VAR_5->i2c;
 int VAR_9;

 if (!VAR_8->is_regaddr) {
  FUNC_0(VAR_5->dev, "set read register address to 0\n");
  VAR_8->slave_reg = 0x00;
  VAR_8->is_regaddr = 1;
 }

 while (VAR_7--) {
  FUNC_4(&VAR_8->cmp);

  FUNC_3(VAR_5, VAR_8->slave_reg++, VAR_0);
  if (VAR_8->is_segment)
   FUNC_3(VAR_5, VAR_4,
        VAR_2);
  else
   FUNC_3(VAR_5, VAR_3,
        VAR_2);

  VAR_9 = FUNC_1(VAR_5);
  if (VAR_9)
   return VAR_9;

  *VAR_6++ = FUNC_2(VAR_5, VAR_1);
 }
 VAR_8->is_segment = 0;

 return 0;
}
