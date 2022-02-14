
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * channel; int lock; } ;
struct intel_guc_log {TYPE_1__ relay; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct intel_guc_log *VAR_0)
{
 FUNC_0(&VAR_0->relay.lock);

 FUNC_1(VAR_0->relay.channel);
 VAR_0->relay.channel = ((void*)0);
}
