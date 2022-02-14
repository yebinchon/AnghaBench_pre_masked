
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ optc; } ;
struct TYPE_4__ {scalar_t__ parsed; TYPE_1__ glb_args; TYPE_1__* opt_args; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char**) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(char* VAR_2[])
{
 int VAR_3;


 if(VAR_1.parsed != VAR_0)
 {
  FUNC_1("The command line has not been parsed yet.\n");
  return;
 }


 for( VAR_3 = 0; VAR_3 < 26; VAR_3++ )
 {

  if(VAR_1.opt_args[VAR_3].optc !=0 )
  {

   FUNC_1("Option: -%c\n", (char)('a'+VAR_3));
   FUNC_0(&(VAR_1.opt_args[VAR_3]), VAR_2);
  }
 }


 FUNC_1("Global arguments:\n");
 FUNC_0(&(VAR_1.glb_args), VAR_2);
}
