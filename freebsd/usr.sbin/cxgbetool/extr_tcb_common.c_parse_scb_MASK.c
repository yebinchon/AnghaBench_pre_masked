
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ val; scalar_t__ rawval; int * name; } ;
typedef TYPE_1__ _TCBVAR ;


 int FUNC_0 (TYPE_1__*,unsigned char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;

void
FUNC_2( _TCBVAR *VAR_0, unsigned char *VAR_1)
{
  _TCBVAR *VAR_2=VAR_0;

  while (VAR_2->name!=((void*)0)) {
    if (FUNC_1("scb_slush",VAR_2->name)) {

      VAR_2->rawval=0;
      VAR_2->val=0;
    } else {
      FUNC_0(VAR_2,VAR_1);
    }
    VAR_2+=1;
  }
}
