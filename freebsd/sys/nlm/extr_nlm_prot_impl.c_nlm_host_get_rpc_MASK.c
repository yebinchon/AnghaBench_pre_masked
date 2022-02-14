
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct nlm_rpc {scalar_t__ nr_create_time; int * nr_client; } ;
struct nlm_host {int nh_lock; int nh_vers; int nh_addr; struct nlm_rpc nh_clntrpc; struct nlm_rpc nh_srvrpc; } ;
typedef scalar_t__ bool_t ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (struct sockaddr*,int ,int ) ;
 scalar_t__ VAR_1 ;

CLIENT *
FUNC_6(struct nlm_host *VAR_2, bool_t VAR_3)
{
 struct nlm_rpc *VAR_4;
 CLIENT *VAR_5;

 FUNC_3(&VAR_2->nh_lock);

 if (VAR_3)
  VAR_4 = &VAR_2->nh_srvrpc;
 else
  VAR_4 = &VAR_2->nh_clntrpc;
 if (VAR_4->nr_client && VAR_1 > VAR_4->nr_create_time + 2*60) {
  VAR_5 = VAR_4->nr_client;
  VAR_4->nr_client = ((void*)0);
  FUNC_4(&VAR_2->nh_lock);
  FUNC_2(VAR_5);
  FUNC_3(&VAR_2->nh_lock);
 }

 if (!VAR_4->nr_client) {
  FUNC_4(&VAR_2->nh_lock);
  VAR_5 = FUNC_5((struct sockaddr *)&VAR_2->nh_addr,
      VAR_0, VAR_2->nh_vers);
  FUNC_3(&VAR_2->nh_lock);

  if (VAR_5) {
   if (VAR_4->nr_client) {
    FUNC_4(&VAR_2->nh_lock);
    FUNC_1(VAR_5);
    FUNC_3(&VAR_2->nh_lock);
   } else {
    VAR_4->nr_client = VAR_5;
    VAR_4->nr_create_time = VAR_1;
   }
  }
 }

 VAR_5 = VAR_4->nr_client;
 if (VAR_5)
  FUNC_0(VAR_5);
 FUNC_4(&VAR_2->nh_lock);

 return (VAR_5);

}
