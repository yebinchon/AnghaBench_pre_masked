
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c4iw_ep_common {TYPE_1__* cm_id; int history; } ;
struct TYPE_2__ {int (* add_ref ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct c4iw_ep_common *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->history);
 VAR_1->cm_id->add_ref(VAR_1->cm_id);
}
