
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_1(char *VAR_4, const struct kernel_param *VAR_5)
{
 unsigned long VAR_6 = *(unsigned long *)VAR_5->arg;

 VAR_6 &= ~VAR_1;
 VAR_6 |= ((VAR_6 & VAR_0) << VAR_2);

 return FUNC_0(VAR_4, VAR_3, "0x%lx", VAR_6);
}
