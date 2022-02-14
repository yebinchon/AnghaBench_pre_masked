
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg216x_state {TYPE_1__* cfg; } ;
struct lg216x_reg {int reg; int val; } ;
struct TYPE_2__ {int lg_chip; } ;


 int FUNC_0 (struct lg216x_reg*) ;
 int VAR_0 ;


 int FUNC_1 (struct lg216x_state*) ;
 int FUNC_2 (struct lg216x_state*,struct lg216x_reg*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct lg216x_state *VAR_1)
{
 int VAR_2;

 static struct lg216x_reg VAR_3[] = {



  { .reg = 0x0015, .val = 0xf7 },
  { .reg = 0x001b, .val = 0x52 },
  { .reg = 0x0208, .val = 0x00 },
  { .reg = 0x0209, .val = 0x82 },
  { .reg = 0x0210, .val = 0xf9 },
  { .reg = 0x020a, .val = 0x00 },
  { .reg = 0x020b, .val = 0x82 },
  { .reg = 0x020d, .val = 0x28 },
  { .reg = 0x020f, .val = 0x14 },

 };

 static struct lg216x_reg VAR_4[] = {
  { .reg = 0x0000, .val = 0x41 },
  { .reg = 0x0001, .val = 0xfb },
  { .reg = 0x0216, .val = 0x00 },
  { .reg = 0x0219, .val = 0x00 },
  { .reg = 0x021b, .val = 0x55 },
  { .reg = 0x0606, .val = 0x0a },
 };

 switch (VAR_1->cfg->lg_chip) {
 case 129:
  VAR_2 = FUNC_2(VAR_1,
     VAR_3, FUNC_0(VAR_3));
  break;
 case 128:
  VAR_2 = FUNC_2(VAR_1,
     VAR_4, FUNC_0(VAR_4));
  break;
 default:
  VAR_2 = -VAR_0;
  break;
 }
 if (FUNC_3(VAR_2))
  goto fail;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(VAR_2);
fail:
 return VAR_2;
}
