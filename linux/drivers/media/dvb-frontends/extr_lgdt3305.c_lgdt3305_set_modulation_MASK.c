
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3305_state {int dummy; } ;
struct dtv_frontend_properties {int modulation; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int*) ;
 int FUNC_3 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct lgdt3305_state *VAR_2,
       struct dtv_frontend_properties *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 FUNC_0("\n");

 VAR_5 = FUNC_2(VAR_2, VAR_1, &VAR_4);
 if (FUNC_1(VAR_5))
  goto fail;

 VAR_4 &= ~0x03;

 switch (VAR_3->modulation) {
 case 128:
  VAR_4 |= 0x03;
  break;
 case 129:
  VAR_4 |= 0x00;
  break;
 case 130:
  VAR_4 |= 0x01;
  break;
 default:
  return -VAR_0;
 }
 VAR_5 = FUNC_3(VAR_2, VAR_1, VAR_4);
fail:
 return VAR_5;
}
