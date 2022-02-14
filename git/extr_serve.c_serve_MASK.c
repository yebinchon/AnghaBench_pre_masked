
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serve_options {scalar_t__ stateless_rpc; scalar_t__ advertise_capabilities; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(struct serve_options *VAR_0)
{
 if (VAR_0->advertise_capabilities || !VAR_0->stateless_rpc) {

  FUNC_1(1, "version 2\n");

  FUNC_0();




  if (VAR_0->advertise_capabilities)
   return;
 }





 if (VAR_0->stateless_rpc) {
  FUNC_2();
 } else {
  for (;;)
   if (FUNC_2())
    break;
 }
}
