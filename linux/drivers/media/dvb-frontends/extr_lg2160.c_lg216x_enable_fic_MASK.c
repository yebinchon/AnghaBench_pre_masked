
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg216x_state {TYPE_1__* cfg; } ;
struct TYPE_2__ {int lg_chip; } ;




 int FUNC_0 (struct lg216x_state*) ;
 int FUNC_1 (struct lg216x_state*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct lg216x_state *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0x0017, 0x23);
 if (FUNC_2(VAR_2))
  goto fail;

 VAR_2 = FUNC_1(VAR_0, 0x0016, 0xfc);
 if (FUNC_2(VAR_2))
  goto fail;

 switch (VAR_0->cfg->lg_chip) {
 case 129:
  VAR_2 = FUNC_1(VAR_0, 0x0016,
           0xfc | ((VAR_1) ? 0x02 : 0x00));
  break;
 case 128:
  VAR_2 = FUNC_1(VAR_0, 0x0016, (VAR_1) ? 0x10 : 0x00);
  break;
 }
 if (FUNC_2(VAR_2))
  goto fail;

 VAR_2 = FUNC_0(VAR_0);
 if (FUNC_2(VAR_2))
  goto fail;

 if (VAR_1) {
  VAR_2 = FUNC_1(VAR_0, 0x0017, 0x03);
  FUNC_2(VAR_2);
 }
fail:
 return VAR_2;
}
