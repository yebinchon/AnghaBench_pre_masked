
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wf_ad7417_priv {int config; TYPE_1__* i2c; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int*,int) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;

__attribute__((used)) static void FUNC_4(struct wf_ad7417_priv *VAR_0)
{
 int VAR_1;
 u8 VAR_2[2];
 u8 VAR_3 = 0;
 VAR_2[0] = 5;
 VAR_2[1] = 0;
 FUNC_3(VAR_0->i2c, VAR_2, 2);


 VAR_2[0] = 1;
 VAR_1 = FUNC_3(VAR_0->i2c, VAR_2, 1);
 if (VAR_1 > 0) {
  VAR_1 = FUNC_2(VAR_0->i2c, VAR_2, 1);
  if (VAR_1 > 0) {
   VAR_3 = VAR_2[0];

   FUNC_0(&VAR_0->i2c->dev, "ADC config reg: %02x\n",
    VAR_3);


   VAR_3 &= 0xfe;
   VAR_2[0] = 1;
   VAR_2[1] = VAR_3;
   VAR_1 = FUNC_3(VAR_0->i2c, VAR_2, 2);
  }
 }
 if (VAR_1 <= 0)
  FUNC_1(&VAR_0->i2c->dev, "Error reading ADC config\n");

 VAR_0->config = VAR_3;
}
