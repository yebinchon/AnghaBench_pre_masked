
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cpupll_reg_base; scalar_t__ ddrpll_reg_base; scalar_t__ deepsleep_reg; unsigned int sleepcount; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned VAR_10;

 if (VAR_9.cpupll_reg_base != VAR_9.ddrpll_reg_base) {


  VAR_10 = FUNC_0(VAR_9.cpupll_reg_base + VAR_1);
  VAR_10 &= ~(VAR_3 | VAR_2);
  FUNC_1(VAR_10, VAR_9.cpupll_reg_base + VAR_1);

  FUNC_3(VAR_6);


  VAR_10 = FUNC_0(VAR_9.cpupll_reg_base + VAR_1);
  VAR_10 |= VAR_4;
  FUNC_1(VAR_10, VAR_9.cpupll_reg_base + VAR_1);
 }


 VAR_10 = FUNC_0(VAR_9.deepsleep_reg);
 VAR_10 &= ~VAR_0,
 VAR_10 |= VAR_9.sleepcount;
 FUNC_1(VAR_10, VAR_9.deepsleep_reg);


 FUNC_2(&VAR_9);

 if (VAR_9.cpupll_reg_base != VAR_9.ddrpll_reg_base) {


  VAR_10 = FUNC_0(VAR_9.cpupll_reg_base + VAR_1);
  VAR_10 &= ~VAR_5;
  FUNC_1(VAR_10, VAR_9.cpupll_reg_base + VAR_1);


  VAR_10 = FUNC_0(VAR_9.cpupll_reg_base + VAR_1);
  VAR_10 &= ~VAR_4;
  FUNC_1(VAR_10, VAR_9.cpupll_reg_base + VAR_1);


  FUNC_3(VAR_8);


  VAR_10 = FUNC_0(VAR_9.cpupll_reg_base + VAR_1);
  VAR_10 |= VAR_5;
  FUNC_1(VAR_10, VAR_9.cpupll_reg_base + VAR_1);


  FUNC_3(VAR_7);


  VAR_10 = FUNC_0(VAR_9.cpupll_reg_base + VAR_1);
  VAR_10 &= ~VAR_3;
  VAR_10 |= VAR_2;
  FUNC_1(VAR_10, VAR_9.cpupll_reg_base + VAR_1);
 }
}
