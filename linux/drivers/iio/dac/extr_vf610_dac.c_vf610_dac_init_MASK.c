
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_dac {scalar_t__ regs; int conv_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vf610_dac *VAR_5)
{
 int VAR_6;

 VAR_5->conv_mode = VAR_0;
 VAR_6 = VAR_1 | VAR_2 |
  VAR_3;
 FUNC_0(VAR_6, VAR_5->regs + VAR_4);
}
