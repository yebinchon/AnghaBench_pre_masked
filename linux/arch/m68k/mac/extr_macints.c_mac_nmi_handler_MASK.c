
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 if (VAR_1)
  return VAR_0;
 VAR_1 = 1;

 FUNC_1("Non-Maskable Interrupt\n");
 FUNC_2(FUNC_0());

 VAR_1 = 0;
 return VAR_0;
}
