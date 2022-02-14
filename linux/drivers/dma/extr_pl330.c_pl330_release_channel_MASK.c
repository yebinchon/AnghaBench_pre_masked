
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl330_thread {int free; int lstenq; int ev; TYPE_1__* req; } ;
struct TYPE_2__ {int desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct pl330_thread*,int ) ;
 int FUNC_1 (struct pl330_thread*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pl330_thread *VAR_1)
{
 if (!VAR_1 || VAR_1->free)
  return;

 FUNC_1(VAR_1);

 FUNC_2(VAR_1->req[1 - VAR_1->lstenq].desc, VAR_0);
 FUNC_2(VAR_1->req[VAR_1->lstenq].desc, VAR_0);

 FUNC_0(VAR_1, VAR_1->ev);
 VAR_1->free = 1;
}
