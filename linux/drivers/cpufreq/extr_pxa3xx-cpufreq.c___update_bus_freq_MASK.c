
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa3xx_freq_info {int dmcfs; int hss; int sflfs; int smcfs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct pxa3xx_freq_info *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8 = VAR_0;

 VAR_7 = VAR_4 | VAR_3 | VAR_2 |
  VAR_1;

 VAR_8 &= ~VAR_7;
 VAR_8 |= FUNC_3(VAR_6->smcfs) | FUNC_2(VAR_6->sflfs) |
  FUNC_1(VAR_6->hss) | FUNC_0(VAR_6->dmcfs);

 VAR_0 = VAR_8;

 while ((VAR_5 & VAR_7) != (VAR_8 & VAR_7))
  FUNC_4();
}
