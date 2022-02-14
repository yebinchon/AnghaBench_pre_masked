
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owner; } ;
struct intel_guc_ct {int worker; int incoming_requests; int pending_requests; int lock; TYPE_1__ host_channel; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct intel_guc_ct *VAR_2)
{

 VAR_2->host_channel.owner = VAR_0;

 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_2->pending_requests);
 FUNC_0(&VAR_2->incoming_requests);
 FUNC_1(&VAR_2->worker, VAR_1);
}
