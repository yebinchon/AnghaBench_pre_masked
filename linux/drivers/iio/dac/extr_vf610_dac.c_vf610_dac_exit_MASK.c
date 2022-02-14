
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_dac {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vf610_dac *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->regs + VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_2->regs + VAR_1);
}
