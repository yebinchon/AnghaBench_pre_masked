
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_user_path_rec {int packet_life_time_selector; int preference; int packet_life_time; int rate; int rate_selector; int mtu; int mtu_selector; int sl; int pkey; int numb_path; int reversible; int traffic_class; int hop_limit; int flow_label; int raw_traffic; int slid; int dlid; int sgid; int dgid; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_3__ {int raw; } ;
struct ib_sa_path_rec {int gid_type; scalar_t__ ifindex; int net; int dmac; int packet_life_time_selector; int preference; int packet_life_time; int rate; int rate_selector; int mtu; int mtu_selector; int sl; int pkey; int numb_path; int reversible; int traffic_class; int hop_limit; int flow_label; int raw_traffic; int slid; int dlid; TYPE_2__ sgid; TYPE_1__ dgid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(struct ib_sa_path_rec *VAR_2,
    struct ib_user_path_rec *VAR_3)
{
 FUNC_1(VAR_2->dgid.raw, VAR_3->dgid, sizeof VAR_2->dgid);
 FUNC_1(VAR_2->sgid.raw, VAR_3->sgid, sizeof VAR_2->sgid);

 VAR_2->dlid = VAR_3->dlid;
 VAR_2->slid = VAR_3->slid;
 VAR_2->raw_traffic = VAR_3->raw_traffic;
 VAR_2->flow_label = VAR_3->flow_label;
 VAR_2->hop_limit = VAR_3->hop_limit;
 VAR_2->traffic_class = VAR_3->traffic_class;
 VAR_2->reversible = VAR_3->reversible;
 VAR_2->numb_path = VAR_3->numb_path;
 VAR_2->pkey = VAR_3->pkey;
 VAR_2->sl = VAR_3->sl;
 VAR_2->mtu_selector = VAR_3->mtu_selector;
 VAR_2->mtu = VAR_3->mtu;
 VAR_2->rate_selector = VAR_3->rate_selector;
 VAR_2->rate = VAR_3->rate;
 VAR_2->packet_life_time = VAR_3->packet_life_time;
 VAR_2->preference = VAR_3->preference;
 VAR_2->packet_life_time_selector = VAR_3->packet_life_time_selector;

 FUNC_2(VAR_2->dmac, 0, sizeof(VAR_2->dmac));
 VAR_2->net = FUNC_0(VAR_1);
 VAR_2->ifindex = 0;
 VAR_2->gid_type = VAR_0;
}
