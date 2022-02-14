
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
union ib_gid {TYPE_1__ member_0; } ;
typedef int u8 ;
struct rdma_ah_attr {int dummy; } ;
struct qedr_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {int raw; } ;
struct ib_global_route {TYPE_2__ dgid; } ;
typedef int in6 ;


 int FUNC_0 (struct qedr_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*,union ib_gid*,int) ;
 int FUNC_4 (struct in6_addr*,int ,int) ;
 struct ib_global_route* FUNC_5 (struct rdma_ah_attr*) ;
 int * FUNC_6 (struct rdma_ah_attr*) ;

__attribute__((used)) static inline int FUNC_7(struct qedr_dev *VAR_1,
    struct rdma_ah_attr *VAR_2, u8 *VAR_3)
{
 union ib_gid VAR_4 = { { 0 } };
 struct in6_addr VAR_5;
 const struct ib_global_route *VAR_6 = FUNC_5(VAR_2);
 u8 *VAR_7;

 if (!FUNC_3(&VAR_6->dgid, &VAR_4, sizeof(union ib_gid))) {
  FUNC_0(VAR_1, "Local port GID not supported\n");
  FUNC_1(VAR_3);
  return -VAR_0;
 }

 FUNC_4(&VAR_5, VAR_6->dgid.raw, sizeof(VAR_5));
 VAR_7 = FUNC_6(VAR_2);
 if (!VAR_7)
  return -VAR_0;
 FUNC_2(VAR_3, VAR_7);

 return 0;
}
