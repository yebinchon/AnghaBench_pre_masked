
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int inversion_val; int inversion; } ;
struct cx24120_state {TYPE_2__ dnxt; TYPE_1__* i2c; } ;
typedef enum fe_spectral_inversion { ____Placeholder_fe_spectral_inversion } fe_spectral_inversion ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct cx24120_state *VAR_1,
     enum fe_spectral_inversion VAR_2)
{
 FUNC_0(&VAR_1->i2c->dev, "(%d)\n", VAR_2);

 switch (VAR_2) {
 case 129:
  VAR_1->dnxt.inversion_val = 0x00;
  break;
 case 128:
  VAR_1->dnxt.inversion_val = 0x04;
  break;
 case 130:
  VAR_1->dnxt.inversion_val = 0x0c;
  break;
 default:
  return -VAR_0;
 }

 VAR_1->dnxt.inversion = VAR_2;

 return 0;
}
