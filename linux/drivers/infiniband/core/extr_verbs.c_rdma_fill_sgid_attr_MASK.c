
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ib_gid_attr* sgid_attr; } ;
struct rdma_ah_attr {int ah_flags; int port_num; TYPE_1__ grh; } ;
struct ib_global_route {struct ib_gid_attr const* sgid_attr; int sgid_index; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_gid_attr const*) ;
 int FUNC_1 (struct ib_gid_attr const*) ;
 struct ib_global_route* FUNC_2 (struct rdma_ah_attr*) ;
 int FUNC_3 (struct ib_device*,struct rdma_ah_attr*) ;
 struct ib_gid_attr* FUNC_4 (struct ib_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_1,
          struct rdma_ah_attr *VAR_2,
          const struct ib_gid_attr **VAR_3)
{
 const struct ib_gid_attr *VAR_4;
 struct ib_global_route *VAR_5;
 int VAR_6;

 *VAR_3 = VAR_2->grh.sgid_attr;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 if (!(VAR_2->ah_flags & VAR_0))
  return 0;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5->sgid_attr)
  return 0;

 VAR_4 =
  FUNC_4(VAR_1, VAR_2->port_num, VAR_5->sgid_index);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 VAR_5->sgid_attr = VAR_4;
 return 0;
}
