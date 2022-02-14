
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;

void
FUNC_3(void)
{

 FUNC_0(VAR_4 > 0);
 VAR_2 = VAR_4;
 if (VAR_5 > VAR_1 - VAR_2)
  FUNC_2("num_msi_irqs too high");
 VAR_4 = VAR_2 + VAR_5;

 FUNC_1(&VAR_3, "msi", ((void*)0), VAR_0);
}
