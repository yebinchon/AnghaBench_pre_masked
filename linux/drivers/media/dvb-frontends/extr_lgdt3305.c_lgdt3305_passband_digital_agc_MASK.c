
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lgdt3305_state {int dummy; } ;
struct dtv_frontend_properties {int modulation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lgdt3305_state *VAR_3,
      struct dtv_frontend_properties *VAR_4)
{
 u16 VAR_5;

 switch (VAR_4->modulation) {
 case 128:
  VAR_5 = 0x32c4;
  break;
 case 129:
  VAR_5 = 0x2a00;
  break;
 case 130:
  VAR_5 = 0x2a80;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0("agc ref: 0x%04x\n", VAR_5);

 FUNC_1(VAR_3, VAR_1, VAR_5 >> 8);
 FUNC_1(VAR_3, VAR_2, VAR_5 & 0xff);

 return 0;
}
