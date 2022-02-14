
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sa_path_rec {int traffic_class; int hop_limit; int flow_label; int dgid; int sgid; } ;
struct rdma_ah_attr {int dummy; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 scalar_t__ FUNC_0 (struct ib_gid_attr const*) ;
 int FUNC_1 (struct ib_gid_attr const*) ;
 int FUNC_2 (int ) ;
 struct ib_gid_attr* FUNC_3 (struct ib_device*,int *,int,int ,int *) ;
 int FUNC_4 (struct ib_gid_attr const*) ;
 int FUNC_5 (struct rdma_ah_attr*,int *,int ,int ,int ,struct ib_gid_attr const*) ;
 int FUNC_6 (struct sa_path_rec*) ;

__attribute__((used)) static int FUNC_7(struct ib_device *VAR_0, u8 VAR_1,
       struct sa_path_rec *VAR_2,
       struct rdma_ah_attr *VAR_3,
       const struct ib_gid_attr *VAR_4)
{
 enum ib_gid_type VAR_5 = FUNC_6(VAR_2);

 if (!VAR_4) {
  VAR_4 = FUNC_3(VAR_0, &VAR_2->sgid, VAR_5,
       VAR_1, ((void*)0));
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);
 } else
  FUNC_4(VAR_4);

 FUNC_5(VAR_3, &VAR_2->dgid,
    FUNC_2(VAR_2->flow_label),
    VAR_2->hop_limit, VAR_2->traffic_class,
    VAR_4);
 return 0;
}
