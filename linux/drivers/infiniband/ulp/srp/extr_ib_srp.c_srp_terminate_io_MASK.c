
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int ch_count; int req_ring_size; struct srp_rdma_ch* ch; } ;
struct srp_rport {struct srp_target_port* lld_data; } ;
struct srp_request {int dummy; } ;
struct srp_rdma_ch {struct srp_request* req_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct srp_rdma_ch*,struct srp_request*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct srp_rport *VAR_1)
{
 struct srp_target_port *VAR_2 = VAR_1->lld_data;
 struct srp_rdma_ch *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->ch_count; VAR_4++) {
  VAR_3 = &VAR_2->ch[VAR_4];

  for (VAR_5 = 0; VAR_5 < VAR_2->req_ring_size; ++VAR_5) {
   struct srp_request *VAR_6 = &VAR_3->req_ring[VAR_5];

   FUNC_0(VAR_3, VAR_6, ((void*)0),
           VAR_0 << 16);
  }
 }
}
