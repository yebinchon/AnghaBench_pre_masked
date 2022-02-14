
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u32 ;
struct TYPE_4__ {int raw; } ;
struct TYPE_3__ {int raw; } ;
struct sa_path_rec {int packet_life_time_selector; int preference; int packet_life_time; int rate; int rate_selector; int mtu; int mtu_selector; int sl; int pkey; int numb_path; int reversible; int traffic_class; int hop_limit; int flow_label; TYPE_2__ sgid; TYPE_1__ dgid; int rec_type; } ;
struct ib_user_path_rec {int packet_life_time_selector; int preference; int packet_life_time; int rate; int rate_selector; int mtu; int mtu_selector; int sl; int pkey; int numb_path; int reversible; int traffic_class; int hop_limit; int flow_label; int raw_traffic; scalar_t__ sgid; scalar_t__ dgid; int dlid; int slid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (union ib_gid*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (struct sa_path_rec*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (union ib_gid*) ;
 int FUNC_5 (struct sa_path_rec*,int ) ;
 int FUNC_6 (struct sa_path_rec*) ;
 int FUNC_7 (struct sa_path_rec*,int ) ;
 int FUNC_8 (struct sa_path_rec*,int ) ;

void FUNC_9(struct sa_path_rec *VAR_2,
    struct ib_user_path_rec *VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 if ((FUNC_0((union ib_gid *)VAR_3->sgid)) ||
     (FUNC_0((union ib_gid *)VAR_3->dgid))) {
  VAR_2->rec_type = VAR_1;
  VAR_4 = FUNC_4((union ib_gid *)VAR_3->sgid);
  VAR_5 = FUNC_4((union ib_gid *)VAR_3->dgid);
 } else {
  VAR_2->rec_type = VAR_0;
  VAR_4 = FUNC_3(VAR_3->slid);
  VAR_5 = FUNC_3(VAR_3->dlid);
 }
 FUNC_1(VAR_2->dgid.raw, VAR_3->dgid, sizeof VAR_2->dgid);
 FUNC_1(VAR_2->sgid.raw, VAR_3->sgid, sizeof VAR_2->sgid);

 FUNC_5(VAR_2, VAR_5);
 FUNC_8(VAR_2, VAR_4);
 FUNC_7(VAR_2, VAR_3->raw_traffic);
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


 FUNC_6(VAR_2);
}
