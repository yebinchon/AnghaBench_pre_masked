
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sa_path_rec {int reversible; scalar_t__ packet_life_time; int service_id; void* packet_life_time_selector; int rate; void* rate_selector; void* mtu; void* mtu_selector; int sl; int pkey; int traffic_class; int hop_limit; int flow_label; int slid; scalar_t__ dlid; int sgid; int dgid; } ;
struct cm_req_msg {int service_id; int pkey; int alt_traffic_class; int alt_hop_limit; int alt_remote_lid; scalar_t__ alt_local_lid; int alt_remote_gid; int alt_local_gid; int primary_traffic_class; int primary_hop_limit; int primary_remote_lid; scalar_t__ primary_local_lid; int primary_remote_gid; int primary_local_gid; } ;


 void* VAR_0 ;
 int FUNC_0 (struct cm_req_msg*) ;
 scalar_t__ FUNC_1 (struct cm_req_msg*) ;
 int FUNC_2 (struct cm_req_msg*) ;
 int FUNC_3 (struct cm_req_msg*) ;
 void* FUNC_4 (struct cm_req_msg*) ;
 int FUNC_5 (struct cm_req_msg*) ;
 scalar_t__ FUNC_6 (struct cm_req_msg*) ;
 int FUNC_7 (struct cm_req_msg*) ;
 int FUNC_8 (struct cm_req_msg*) ;
 int FUNC_9 (struct ib_sa_path_rec*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct cm_req_msg *VAR_1,
         struct ib_sa_path_rec *VAR_2,
         struct ib_sa_path_rec *VAR_3)
{
 FUNC_9(VAR_2, 0, sizeof *VAR_2);
 VAR_2->dgid = VAR_1->primary_local_gid;
 VAR_2->sgid = VAR_1->primary_remote_gid;
 VAR_2->dlid = VAR_1->primary_local_lid;
 VAR_2->slid = VAR_1->primary_remote_lid;
 VAR_2->flow_label = FUNC_5(VAR_1);
 VAR_2->hop_limit = VAR_1->primary_hop_limit;
 VAR_2->traffic_class = VAR_1->primary_traffic_class;
 VAR_2->reversible = 1;
 VAR_2->pkey = VAR_1->pkey;
 VAR_2->sl = FUNC_8(VAR_1);
 VAR_2->mtu_selector = VAR_0;
 VAR_2->mtu = FUNC_4(VAR_1);
 VAR_2->rate_selector = VAR_0;
 VAR_2->rate = FUNC_7(VAR_1);
 VAR_2->packet_life_time_selector = VAR_0;
 VAR_2->packet_life_time =
  FUNC_6(VAR_1);
 VAR_2->packet_life_time -= (VAR_2->packet_life_time > 0);
 VAR_2->service_id = VAR_1->service_id;

 if (VAR_1->alt_local_lid) {
  FUNC_9(VAR_3, 0, sizeof *VAR_3);
  VAR_3->dgid = VAR_1->alt_local_gid;
  VAR_3->sgid = VAR_1->alt_remote_gid;
  VAR_3->dlid = VAR_1->alt_local_lid;
  VAR_3->slid = VAR_1->alt_remote_lid;
  VAR_3->flow_label = FUNC_0(VAR_1);
  VAR_3->hop_limit = VAR_1->alt_hop_limit;
  VAR_3->traffic_class = VAR_1->alt_traffic_class;
  VAR_3->reversible = 1;
  VAR_3->pkey = VAR_1->pkey;
  VAR_3->sl = FUNC_3(VAR_1);
  VAR_3->mtu_selector = VAR_0;
  VAR_3->mtu = FUNC_4(VAR_1);
  VAR_3->rate_selector = VAR_0;
  VAR_3->rate = FUNC_2(VAR_1);
  VAR_3->packet_life_time_selector = VAR_0;
  VAR_3->packet_life_time =
   FUNC_1(VAR_1);
  VAR_3->packet_life_time -= (VAR_3->packet_life_time > 0);
  VAR_3->service_id = VAR_1->service_id;
 }
}
