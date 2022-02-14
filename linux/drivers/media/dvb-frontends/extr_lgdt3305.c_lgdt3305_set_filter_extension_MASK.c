
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3305_state {int dummy; } ;
struct dtv_frontend_properties {int modulation; } ;


 int VAR_0 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3305_state*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct lgdt3305_state *VAR_1,
      struct dtv_frontend_properties *VAR_2)
{
 int VAR_3;

 switch (VAR_2->modulation) {
 case 128:
  VAR_3 = 0;
  break;
 case 129:
 case 130:
  VAR_3 = 1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_0("val = %d\n", VAR_3);

 return FUNC_1(VAR_1, 0x043f, 2, VAR_3);
}
