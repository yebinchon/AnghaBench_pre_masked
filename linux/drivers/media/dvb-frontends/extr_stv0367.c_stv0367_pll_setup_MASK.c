
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0367_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct stv0367_state*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct stv0367_state *VAR_3,
    u32 VAR_4, u32 VAR_5)
{




 switch (VAR_4) {
 case 128:
  switch (VAR_5) {
  default:
  case 27000000:
   FUNC_0("STV0367 SetCLKgen for 58MHz IC and 27Mhz crystal\n");

   FUNC_1(VAR_3, VAR_0, 0x1b);
   FUNC_1(VAR_3, VAR_1, 0xe8);
   break;
  }
  break;
 default:
 case 129:
  switch (VAR_5) {

  case 16000000:
   FUNC_1(VAR_3, VAR_0, 0x2);
   FUNC_1(VAR_3, VAR_1, 0x1b);
   break;
  case 25000000:
   FUNC_1(VAR_3, VAR_0, 0xa);
   FUNC_1(VAR_3, VAR_1, 0x55);
   break;
  default:
  case 27000000:
   FUNC_0("FE_STV0367TER_SetCLKgen for 27Mhz\n");
   FUNC_1(VAR_3, VAR_0, 0x1);
   FUNC_1(VAR_3, VAR_1, 0x8);
   break;
  case 30000000:
   FUNC_1(VAR_3, VAR_0, 0xc);
   FUNC_1(VAR_3, VAR_1, 0x55);
   break;
  }
 }

 FUNC_1(VAR_3, VAR_2, 0x18);
}
