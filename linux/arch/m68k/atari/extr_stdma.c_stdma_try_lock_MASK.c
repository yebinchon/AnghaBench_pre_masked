
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_handler_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;

int FUNC_2(irq_handler_t VAR_3, void *VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(VAR_5);
 if (VAR_2) {
  FUNC_0(VAR_5);
  return 0;
 }

 VAR_2 = 1;
 VAR_0 = VAR_3;
 VAR_1 = VAR_4;
 FUNC_0(VAR_5);
 return 1;
}
