
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int index; struct TYPE_4__* p_next; } ;
struct TYPE_3__ {int argc; TYPE_2__* list; } ;
typedef TYPE_1__ CMDLINE_ARGS ;
typedef TYPE_2__ CMDLINE_ARG ;



int FUNC_0(void* VAR_0, int VAR_1)
{
 int VAR_2;
 CMDLINE_ARGS* VAR_3 = (CMDLINE_ARGS*)VAR_0;
 CMDLINE_ARG* VAR_4;


 for(VAR_2=0,VAR_4=VAR_3->list; (VAR_4!=((void*)0)) && (VAR_2<VAR_3->argc); VAR_2++, VAR_4=VAR_4->p_next)
 {

  if(VAR_2==VAR_1) return(VAR_4->index);
 }

 return -1;
}
