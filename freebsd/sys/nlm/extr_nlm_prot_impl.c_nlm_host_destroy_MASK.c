
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nr_client; } ;
struct TYPE_3__ {scalar_t__ nr_client; } ;
struct nlm_host {int nh_sysctl; int nh_lock; TYPE_2__ nh_clntrpc; TYPE_1__ nh_srvrpc; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct nlm_host*,int ) ;
 int FUNC_2 (struct nlm_host*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct nlm_host *VAR_4)
{

 FUNC_4(&VAR_2);
 FUNC_1(&VAR_3, VAR_4, VAR_1);
 FUNC_5(&VAR_2);

 if (VAR_4->nh_srvrpc.nr_client)
  FUNC_0(VAR_4->nh_srvrpc.nr_client);
 if (VAR_4->nh_clntrpc.nr_client)
  FUNC_0(VAR_4->nh_clntrpc.nr_client);
 FUNC_3(&VAR_4->nh_lock);
 FUNC_6(&VAR_4->nh_sysctl);
 FUNC_2(VAR_4, VAR_0);
}
