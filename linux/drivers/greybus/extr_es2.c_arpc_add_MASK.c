
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es2_ap_dev {int arpcs; int arpc_id_cycle; } ;
struct arpc {int active; int list; TYPE_1__* req; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct es2_ap_dev *VAR_0, struct arpc *VAR_1)
{
 VAR_1->active = 1;
 VAR_1->req->id = FUNC_0(VAR_0->arpc_id_cycle++);
 FUNC_1(&VAR_1->list, &VAR_0->arpcs);
}
