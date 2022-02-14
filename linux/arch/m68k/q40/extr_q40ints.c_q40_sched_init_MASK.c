
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ,int ,char*,int ) ;

void FUNC_3 (irq_handler_t VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_2;

 if (FUNC_2(VAR_5, VAR_3, 0, "timer", VAR_4))
  FUNC_1("Couldn't register timer int");

 FUNC_0(-1, VAR_0);
 FUNC_0( 1, VAR_1);
}
