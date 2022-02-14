
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_path_rec {int reversible; scalar_t__ packet_life_time; void* packet_life_time_selector; int rate; void* rate_selector; int mtu; void* mtu_selector; int sl; int pkey; int traffic_class; int hop_limit; int flow_label; int sgid; int dgid; } ;
struct cm_lap_msg {int alt_hop_limit; int alt_remote_gid; int alt_local_gid; } ;
struct cm_id_private {int path_mtu; int pkey; } ;


 void* VAR_0 ;
 int FUNC_0 (struct cm_lap_msg*,struct sa_path_rec*) ;
 int FUNC_1 (struct cm_lap_msg*) ;
 scalar_t__ FUNC_2 (struct cm_lap_msg*) ;
 int FUNC_3 (struct cm_lap_msg*) ;
 int FUNC_4 (struct cm_lap_msg*) ;
 int FUNC_5 (struct cm_lap_msg*) ;

__attribute__((used)) static void FUNC_6(struct cm_id_private *VAR_1,
        struct sa_path_rec *VAR_2,
        struct cm_lap_msg *VAR_3)
{
 VAR_2->dgid = VAR_3->alt_local_gid;
 VAR_2->sgid = VAR_3->alt_remote_gid;
 VAR_2->flow_label = FUNC_1(VAR_3);
 VAR_2->hop_limit = VAR_3->alt_hop_limit;
 VAR_2->traffic_class = FUNC_5(VAR_3);
 VAR_2->reversible = 1;
 VAR_2->pkey = VAR_1->pkey;
 VAR_2->sl = FUNC_4(VAR_3);
 VAR_2->mtu_selector = VAR_0;
 VAR_2->mtu = VAR_1->path_mtu;
 VAR_2->rate_selector = VAR_0;
 VAR_2->rate = FUNC_3(VAR_3);
 VAR_2->packet_life_time_selector = VAR_0;
 VAR_2->packet_life_time = FUNC_2(VAR_3);
 VAR_2->packet_life_time -= (VAR_2->packet_life_time > 0);
 FUNC_0(VAR_3, VAR_2);
}
