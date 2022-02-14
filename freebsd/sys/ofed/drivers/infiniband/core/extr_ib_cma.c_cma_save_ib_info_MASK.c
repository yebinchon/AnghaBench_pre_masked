
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_ib {int sib_addr; int sib_flowinfo; int sib_pkey; void* sib_family; int sib_sid_mask; scalar_t__ sib_scope_id; int sib_sid; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int src_addr; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
struct rdma_cm_id {TYPE_2__ route; } ;
struct ib_sa_path_rec {int dgid; int flow_label; int pkey; int service_id; int sgid; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct sockaddr *VAR_1,
        struct sockaddr *VAR_2,
        struct rdma_cm_id *VAR_3,
        struct ib_sa_path_rec *VAR_4)
{
 struct sockaddr_ib *VAR_5, *VAR_6;

 VAR_5 = (struct sockaddr_ib *) &VAR_3->route.addr.src_addr;
 if (VAR_1) {
  VAR_6 = (struct sockaddr_ib *)VAR_1;
  VAR_6->sib_family = VAR_0;
  if (VAR_4) {
   VAR_6->sib_pkey = VAR_4->pkey;
   VAR_6->sib_flowinfo = VAR_4->flow_label;
   FUNC_1(&VAR_6->sib_addr, &VAR_4->sgid, 16);
   VAR_6->sib_sid = VAR_4->service_id;
   VAR_6->sib_scope_id = 0;
  } else {
   VAR_6->sib_pkey = VAR_5->sib_pkey;
   VAR_6->sib_flowinfo = VAR_5->sib_flowinfo;
   VAR_6->sib_addr = VAR_5->sib_addr;
   VAR_6->sib_sid = VAR_5->sib_sid;
   VAR_6->sib_scope_id = VAR_5->sib_scope_id;
  }
  VAR_6->sib_sid_mask = FUNC_0(0xffffffffffffffffULL);
 }
 if (VAR_2) {
  VAR_6 = (struct sockaddr_ib *)VAR_2;
  VAR_6->sib_family = VAR_0;
  if (VAR_4) {
   VAR_6->sib_pkey = VAR_4->pkey;
   VAR_6->sib_flowinfo = VAR_4->flow_label;
   FUNC_1(&VAR_6->sib_addr, &VAR_4->dgid, 16);
  }
 }
}
