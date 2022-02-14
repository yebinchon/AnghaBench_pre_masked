
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiger_hw {scalar_t__ typ; int ctrlreg; int auxd; scalar_t__ base; scalar_t__ dmactrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct tiger_hw *VAR_6)
{
 FUNC_1(0xff, VAR_6->base + VAR_3);
 FUNC_0(1);



 if (VAR_6->typ == VAR_0)
  VAR_6->ctrlreg = 0x40;
 else
  VAR_6->ctrlreg = 0x00;
 FUNC_1(VAR_6->ctrlreg, VAR_6->base + VAR_3);
 FUNC_0(10);


 VAR_6->auxd = 0;
 VAR_6->dmactrl = 0;
 FUNC_1(~VAR_5, VAR_6->base + VAR_1);
 FUNC_1(VAR_5, VAR_6->base + VAR_4);
 FUNC_1(VAR_6->auxd, VAR_6->base + VAR_2);
}
