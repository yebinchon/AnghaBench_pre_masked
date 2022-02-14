
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vertexArrayObject; } ;
struct TYPE_3__ {int * currentVao; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(void)
{
 FUNC_1("--- R_BindNullVao ---\n");

 if(VAR_3.currentVao)
 {
  if (VAR_2.vertexArrayObject)
  {
   FUNC_3(0);


   if (1) FUNC_2(VAR_1, 0);
  }
  else
  {
   FUNC_2(VAR_0, 0);
   FUNC_2(VAR_1, 0);
  }
  VAR_3.currentVao = ((void*)0);
 }

 FUNC_0();
}
