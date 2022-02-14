
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ my_prog; scalar_t__ my_proc; scalar_t__ my_vers; int my_name; } ;
typedef TYPE_1__ my_id ;
struct TYPE_9__ {TYPE_2__* monList; } ;
struct TYPE_8__ {scalar_t__ notifyProg; scalar_t__ notifyProc; scalar_t__ notifyVers; struct TYPE_8__* next; int notifyHost; } ;
typedef TYPE_2__ MonList ;
typedef TYPE_3__ HostInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(HostInfo *VAR_3, my_id *VAR_4)
{
  MonList *VAR_5, *VAR_6;
  MonList *VAR_7 = ((void*)0);
  int VAR_8 = VAR_0;

  VAR_5 = VAR_3->monList;
  while (VAR_5)
  {
    if (!FUNC_1(VAR_4->my_name, VAR_5->notifyHost, VAR_1)
      && (VAR_4->my_prog == VAR_5->notifyProg) && (VAR_4->my_proc == VAR_5->notifyProc)
      && (VAR_4->my_vers == VAR_5->notifyVers))
    {

      VAR_6 = VAR_5->next;
      if (VAR_7) VAR_7->next = VAR_6;
      else VAR_3->monList = VAR_6;
      FUNC_0(VAR_5);
      VAR_5 = VAR_6;
      VAR_8 = VAR_2;
    }
    else
    {
      VAR_7 = VAR_5;
      VAR_5 = VAR_5->next;
    }
  }
  return (VAR_8);
}
