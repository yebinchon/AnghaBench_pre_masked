
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct xive_cpu {int pending_prio; int cppr; } ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int,...) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_5(struct xive_cpu *VAR_2)
{
 u8 VAR_3, VAR_4;
 u16 VAR_5;


 VAR_5 = FUNC_1(FUNC_0(VAR_1 + VAR_0));


 FUNC_2();





 VAR_4 = VAR_5 & 0xff;
 VAR_3 = (VAR_5 >> 8) >> 6;
 switch(VAR_3) {
 case 130:
  break;
 case 129:
  if (VAR_4 == 0xff)
   return;

  VAR_2->pending_prio |= 1 << VAR_4;





  if (VAR_4 >= VAR_2->cppr)
   FUNC_3("CPU %d odd ack CPPR, got %d at %d\n",
          FUNC_4(), VAR_4, VAR_2->cppr);


  VAR_2->cppr = VAR_4;
  break;
 case 128:
 case 131:
  FUNC_3("CPU %d got unexpected interrupt type HE=%d\n",
         FUNC_4(), VAR_3);
  return;
 }
}
