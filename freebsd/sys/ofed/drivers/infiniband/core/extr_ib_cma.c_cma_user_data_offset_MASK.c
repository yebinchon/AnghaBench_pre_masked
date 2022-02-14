
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ps; } ;
struct rdma_id_private {TYPE_1__ id; } ;
struct cma_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct rdma_id_private*) ;

__attribute__((used)) static inline int FUNC_1(struct rdma_id_private *VAR_2)
{
 if (FUNC_0(VAR_2) == VAR_0)
  return 0;
 if (VAR_2->id.ps == VAR_1)
  return 0;
 return sizeof(struct cma_hdr);
}
