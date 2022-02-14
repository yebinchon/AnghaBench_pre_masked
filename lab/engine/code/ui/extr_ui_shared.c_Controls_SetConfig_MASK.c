
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int (* executeText ) (int ,char*) ;int (* setBinding ) (int,int ) ;} ;
struct TYPE_3__ {int bind1; int bind2; int command; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(qboolean VAR_4)
{
 int VAR_5;


 for (VAR_5=0; VAR_5 < VAR_2; VAR_5++)
 {

  if (VAR_3[VAR_5].bind1 != -1)
  {
   VAR_0->setBinding( VAR_3[VAR_5].bind1, VAR_3[VAR_5].command );

   if (VAR_3[VAR_5].bind2 != -1)
    VAR_0->setBinding( VAR_3[VAR_5].bind2, VAR_3[VAR_5].command );
  }
 }
 VAR_0->executeText(VAR_1, "in_restart\n");

}
