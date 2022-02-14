
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int route_resolved; } ;
struct sa_path_rec {int reversible; scalar_t__ packet_life_time; TYPE_1__ roce; int service_id; void* packet_life_time_selector; int rate; void* rate_selector; void* mtu; void* mtu_selector; int sl; int pkey; int traffic_class; int hop_limit; int flow_label; int sgid; int dgid; } ;
struct cm_req_msg {int service_id; int pkey; int alt_traffic_class; int alt_hop_limit; int alt_remote_gid; int alt_local_gid; int primary_traffic_class; int primary_hop_limit; int primary_remote_gid; int primary_local_gid; } ;


 void* VAR_0 ;
 int FUNC_0 (struct cm_req_msg*,struct sa_path_rec*,struct sa_path_rec*) ;
 int FUNC_1 (struct cm_req_msg*) ;
 scalar_t__ FUNC_2 (struct cm_req_msg*) ;
 int FUNC_3 (struct cm_req_msg*) ;
 int FUNC_4 (struct cm_req_msg*) ;
 void* FUNC_5 (struct cm_req_msg*) ;
 int FUNC_6 (struct cm_req_msg*) ;
 scalar_t__ FUNC_7 (struct cm_req_msg*) ;
 int FUNC_8 (struct cm_req_msg*) ;
 int FUNC_9 (struct cm_req_msg*) ;
 scalar_t__ FUNC_10 (struct cm_req_msg*) ;
 scalar_t__ FUNC_11 (struct sa_path_rec*) ;

__attribute__((used)) static void FUNC_12(struct cm_req_msg *VAR_1,
         struct sa_path_rec *VAR_2,
         struct sa_path_rec *VAR_3)
{
 VAR_2->dgid = VAR_1->primary_local_gid;
 VAR_2->sgid = VAR_1->primary_remote_gid;
 VAR_2->flow_label = FUNC_6(VAR_1);
 VAR_2->hop_limit = VAR_1->primary_hop_limit;
 VAR_2->traffic_class = VAR_1->primary_traffic_class;
 VAR_2->reversible = 1;
 VAR_2->pkey = VAR_1->pkey;
 VAR_2->sl = FUNC_9(VAR_1);
 VAR_2->mtu_selector = VAR_0;
 VAR_2->mtu = FUNC_5(VAR_1);
 VAR_2->rate_selector = VAR_0;
 VAR_2->rate = FUNC_8(VAR_1);
 VAR_2->packet_life_time_selector = VAR_0;
 VAR_2->packet_life_time =
  FUNC_7(VAR_1);
 VAR_2->packet_life_time -= (VAR_2->packet_life_time > 0);
 VAR_2->service_id = VAR_1->service_id;
 if (FUNC_11(VAR_2))
  VAR_2->roce.route_resolved = 0;

 if (FUNC_10(VAR_1)) {
  VAR_3->dgid = VAR_1->alt_local_gid;
  VAR_3->sgid = VAR_1->alt_remote_gid;
  VAR_3->flow_label = FUNC_1(VAR_1);
  VAR_3->hop_limit = VAR_1->alt_hop_limit;
  VAR_3->traffic_class = VAR_1->alt_traffic_class;
  VAR_3->reversible = 1;
  VAR_3->pkey = VAR_1->pkey;
  VAR_3->sl = FUNC_4(VAR_1);
  VAR_3->mtu_selector = VAR_0;
  VAR_3->mtu = FUNC_5(VAR_1);
  VAR_3->rate_selector = VAR_0;
  VAR_3->rate = FUNC_3(VAR_1);
  VAR_3->packet_life_time_selector = VAR_0;
  VAR_3->packet_life_time =
   FUNC_2(VAR_1);
  VAR_3->packet_life_time -= (VAR_3->packet_life_time > 0);
  VAR_3->service_id = VAR_1->service_id;

  if (FUNC_11(VAR_3))
   VAR_3->roce.route_resolved = 0;
 }
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
