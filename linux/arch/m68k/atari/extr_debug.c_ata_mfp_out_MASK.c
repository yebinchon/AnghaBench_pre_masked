
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trn_stat; char usart_dta; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(char VAR_1)
{
 while (!(VAR_0.trn_stat & 0x80))
  FUNC_0();
 VAR_0.usart_dta = VAR_1;
}
