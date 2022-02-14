
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_pre {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

bool FUNC_1(struct ipu_pre *VAR_2)
{
 return !!(FUNC_0(VAR_2->regs + VAR_0) &
    VAR_1);
}
