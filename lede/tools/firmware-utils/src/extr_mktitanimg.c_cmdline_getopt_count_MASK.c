
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* opt_args; } ;
struct TYPE_3__ {int optc; } ;


 TYPE_2__ VAR_0 ;

int FUNC_0(char VAR_1)
{
 int VAR_2;


 VAR_2 = VAR_1 - 'a';
 if(VAR_2 < 0 || VAR_2 > 25) return -1;


 return(VAR_0.opt_args[VAR_2].optc);
}
