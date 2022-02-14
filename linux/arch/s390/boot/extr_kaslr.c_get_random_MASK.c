
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct prno_parm {int dummy; } ;
struct prng_parm {scalar_t__ parm_block; } ;
typedef int seed ;
typedef int random ;
typedef int entropy ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__,char*,char*,int) ;
 int FUNC_2 (int ,struct prno_parm*,char*,int,char*,int) ;
 int FUNC_3 (int *,int ,char*,int) ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (scalar_t__,int *,int) ;

__attribute__((used)) static unsigned long FUNC_6(unsigned long VAR_3)
{
 struct prng_parm VAR_4 = {

  .parm_block = {
   0x0F, 0x2B, 0x8E, 0x63, 0x8C, 0x8E, 0xD2, 0x52,
   0x64, 0xB7, 0xA0, 0x7B, 0x75, 0x28, 0xB8, 0xF4,
   0x75, 0x5F, 0xD2, 0xA6, 0x8D, 0x97, 0x11, 0xFF,
   0x49, 0xD8, 0x23, 0xF3, 0x7E, 0x21, 0xEC, 0xA0
  },
 };
 unsigned long VAR_5, VAR_6;
 struct prno_parm VAR_7;
 __u64 VAR_8[4];
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0();
 VAR_5 = FUNC_4();
 switch (VAR_9) {
 case 128:
  FUNC_3(((void*)0), 0, (u8 *) &VAR_6, sizeof(VAR_6));
  break;
 case 130:
  FUNC_2(VAR_2, &VAR_7, ((void*)0), 0,
      (u8 *) &VAR_5, sizeof(VAR_5));
  FUNC_2(VAR_1, &VAR_7, (u8 *) &VAR_6,
      sizeof(VAR_6), ((void*)0), 0);
  break;
 case 129:

  *(unsigned long *) VAR_4.parm_block ^= VAR_5;
  for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
   FUNC_1(VAR_0, VAR_4.parm_block,
      (char *) VAR_8, (char *) VAR_8,
      sizeof(VAR_8));
   FUNC_5(VAR_4.parm_block, VAR_8, sizeof(VAR_8));
  }
  VAR_6 = VAR_5;
  FUNC_1(VAR_0, VAR_4.parm_block, (u8 *) &VAR_6,
     (u8 *) &VAR_6, sizeof(VAR_6));
  break;
 default:
  VAR_6 = 0;
 }
 return VAR_6 % VAR_3;
}
