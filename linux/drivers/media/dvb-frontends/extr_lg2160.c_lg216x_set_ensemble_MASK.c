
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lg216x_state {TYPE_1__* cfg; } ;
struct TYPE_2__ {int lg_chip; } ;




 int FUNC_0 (struct lg216x_state*,int,int*) ;
 int FUNC_1 (struct lg216x_state*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct lg216x_state *VAR_0, int VAR_1)
{
 int VAR_2;
 u16 VAR_3;
 u8 VAR_4;

 switch (VAR_0->cfg->lg_chip) {
 case 129:
  VAR_3 = 0x0400;
  break;
 case 128:
 default:
  VAR_3 = 0x0500;
  break;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_3, &VAR_4);
 if (FUNC_2(VAR_2))
  goto fail;

 VAR_4 &= 0xfe;
 VAR_4 |= (VAR_1) ? 0x01 : 0x00;

 VAR_2 = FUNC_1(VAR_0, VAR_3, VAR_4);
 FUNC_2(VAR_2);
fail:
 return VAR_2;
}
