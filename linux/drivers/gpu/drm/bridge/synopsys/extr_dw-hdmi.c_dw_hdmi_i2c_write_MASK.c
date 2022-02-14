
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi_i2c {int is_regaddr; unsigned char slave_reg; int cmp; } ;
struct dw_hdmi {struct dw_hdmi_i2c* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dw_hdmi*) ;
 int FUNC_1 (struct dw_hdmi*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dw_hdmi *VAR_4,
        unsigned char *VAR_5, unsigned int VAR_6)
{
 struct dw_hdmi_i2c *VAR_7 = VAR_4->i2c;
 int VAR_8;

 if (!VAR_7->is_regaddr) {

  VAR_7->slave_reg = VAR_5[0];
  VAR_6--;
  VAR_5++;
  VAR_7->is_regaddr = 1;
 }

 while (VAR_6--) {
  FUNC_2(&VAR_7->cmp);

  FUNC_1(VAR_4, *VAR_5++, VAR_1);
  FUNC_1(VAR_4, VAR_7->slave_reg++, VAR_0);
  FUNC_1(VAR_4, VAR_3,
       VAR_2);

  VAR_8 = FUNC_0(VAR_4);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
