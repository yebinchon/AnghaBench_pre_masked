
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ib_sa_mcmember_rec {int traffic_class; int hop_limit; int flow_label; int mgid; int rate; int sl; int mlid; int port_gid; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int traffic_class; int hop_limit; int flow_label; void* sgid_index; int dgid; } ;
struct ib_ah_attr {TYPE_1__ grh; int ah_flags; int static_rate; void* port_num; int sl; int dlid; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_device*,int *,int,void*,struct net_device*,scalar_t__*) ;
 int FUNC_3 (struct ib_ah_attr*,int ,int) ;
 scalar_t__ FUNC_4 (struct ib_device*,void*) ;
 int FUNC_5 (struct ib_device*,void*) ;

int FUNC_6(struct ib_device *VAR_2, u8 VAR_3,
        struct ib_sa_mcmember_rec *VAR_4,
        struct net_device *VAR_5,
        enum ib_gid_type VAR_6,
        struct ib_ah_attr *VAR_7)
{
 int VAR_8;
 u16 VAR_9;




 if (FUNC_4(VAR_2, VAR_3))
  VAR_5 = ((void*)0);
 else if (!FUNC_5(VAR_2, VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_2, &VAR_4->port_gid,
      VAR_6, VAR_3,
      VAR_5,
      &VAR_9);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_7, 0, sizeof *VAR_7);
 VAR_7->dlid = FUNC_0(VAR_4->mlid);
 VAR_7->sl = VAR_4->sl;
 VAR_7->port_num = VAR_3;
 VAR_7->static_rate = VAR_4->rate;

 VAR_7->ah_flags = VAR_1;
 VAR_7->grh.dgid = VAR_4->mgid;

 VAR_7->grh.sgid_index = (u8) VAR_9;
 VAR_7->grh.flow_label = FUNC_1(VAR_4->flow_label);
 VAR_7->grh.hop_limit = VAR_4->hop_limit;
 VAR_7->grh.traffic_class = VAR_4->traffic_class;

 return 0;
}
