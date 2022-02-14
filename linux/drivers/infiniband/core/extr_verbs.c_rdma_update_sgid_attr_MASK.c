
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ib_gid_attr const* sgid_attr; } ;
struct rdma_ah_attr {int ah_flags; TYPE_1__ grh; } ;
struct ib_gid_attr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_gid_attr const*) ;
 int FUNC_1 (struct ib_gid_attr const*) ;

__attribute__((used)) static const struct ib_gid_attr *
FUNC_2(struct rdma_ah_attr *VAR_1,
        const struct ib_gid_attr *VAR_2)
{
 if (VAR_2)
  FUNC_1(VAR_2);
 if (VAR_1->ah_flags & VAR_0) {
  FUNC_0(VAR_1->grh.sgid_attr);
  return VAR_1->grh.sgid_attr;
 }
 return ((void*)0);
}
