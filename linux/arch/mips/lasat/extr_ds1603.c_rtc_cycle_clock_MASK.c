
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long clk; unsigned long data; int huge_delay; scalar_t__ data_reversed; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 VAR_1 |= VAR_0->clk;
 FUNC_1(VAR_1);
 FUNC_0(250);
 if (VAR_0->data_reversed)
  VAR_1 &= ~VAR_0->data;
 else
  VAR_1 |= VAR_0->data;
 VAR_1 &= ~VAR_0->clk;
 FUNC_1(VAR_1);
 FUNC_0(250 + VAR_0->huge_delay);
}
