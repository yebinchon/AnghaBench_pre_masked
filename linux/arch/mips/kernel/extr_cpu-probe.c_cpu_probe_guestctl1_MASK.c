
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int guestid_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct cpuinfo_mips *VAR_3)
{
 if (VAR_2) {

  FUNC_2(VAR_0);
  FUNC_0();
  VAR_3->guestid_mask = (FUNC_1() & VAR_0)
      >> VAR_1;
  FUNC_2(0);
 }
}
