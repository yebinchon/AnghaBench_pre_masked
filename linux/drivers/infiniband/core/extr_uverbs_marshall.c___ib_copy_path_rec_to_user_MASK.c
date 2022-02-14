
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raw; } ;
struct TYPE_3__ {int raw; } ;
struct sa_path_rec {int packet_life_time_selector; int preference; int packet_life_time; int rate; int rate_selector; int mtu; int mtu_selector; int sl; int pkey; int numb_path; int reversible; int traffic_class; int hop_limit; int flow_label; TYPE_2__ sgid; TYPE_1__ dgid; } ;
struct ib_user_path_rec {int packet_life_time_selector; int preference; int packet_life_time; int rate; int rate_selector; int mtu; int mtu_selector; int sl; int pkey; int numb_path; int reversible; int traffic_class; int hop_limit; int flow_label; int raw_traffic; void* slid; void* dlid; int sgid; int dgid; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sa_path_rec*) ;
 int FUNC_4 (struct sa_path_rec*) ;
 int FUNC_5 (struct sa_path_rec*) ;

__attribute__((used)) static void FUNC_6(struct ib_user_path_rec *VAR_0,
           struct sa_path_rec *VAR_1)
{
 FUNC_1(VAR_0->dgid, VAR_1->dgid.raw, sizeof(VAR_1->dgid));
 FUNC_1(VAR_0->sgid, VAR_1->sgid.raw, sizeof(VAR_1->sgid));

 VAR_0->dlid = FUNC_0(FUNC_2(FUNC_3(VAR_1)));
 VAR_0->slid = FUNC_0(FUNC_2(FUNC_5(VAR_1)));
 VAR_0->raw_traffic = FUNC_4(VAR_1);
 VAR_0->flow_label = VAR_1->flow_label;
 VAR_0->hop_limit = VAR_1->hop_limit;
 VAR_0->traffic_class = VAR_1->traffic_class;
 VAR_0->reversible = VAR_1->reversible;
 VAR_0->numb_path = VAR_1->numb_path;
 VAR_0->pkey = VAR_1->pkey;
 VAR_0->sl = VAR_1->sl;
 VAR_0->mtu_selector = VAR_1->mtu_selector;
 VAR_0->mtu = VAR_1->mtu;
 VAR_0->rate_selector = VAR_1->rate_selector;
 VAR_0->rate = VAR_1->rate;
 VAR_0->packet_life_time = VAR_1->packet_life_time;
 VAR_0->preference = VAR_1->preference;
 VAR_0->packet_life_time_selector = VAR_1->packet_life_time_selector;
}
