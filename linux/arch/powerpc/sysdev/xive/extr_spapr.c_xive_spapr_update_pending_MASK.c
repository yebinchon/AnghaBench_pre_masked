
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct xive_cpu {int pending_prio; int cppr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int,int) ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct xive_cpu *VAR_3)
{
 u8 VAR_4, VAR_5;
 u16 VAR_6;
 VAR_6 = FUNC_1(FUNC_0(VAR_2 + VAR_1));


 FUNC_2();





 VAR_5 = VAR_6 & 0xff;
 VAR_4 = VAR_6 >> 8;

 if (VAR_4 & VAR_0) {
  if (VAR_5 == 0xff)
   return;

  VAR_3->pending_prio |= 1 << VAR_5;





  if (VAR_5 >= VAR_3->cppr)
   FUNC_3("CPU %d odd ack CPPR, got %d at %d\n",
          FUNC_4(), VAR_5, VAR_3->cppr);


  VAR_3->cppr = VAR_5;
 }
}
