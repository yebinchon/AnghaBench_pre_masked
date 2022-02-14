
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
typedef struct in6_addr u8 ;
struct TYPE_5__ {int dmac; } ;
struct rdma_ah_attr {TYPE_2__ roce; } ;
struct ocrdma_dev {int dummy; } ;
typedef int in6 ;
struct TYPE_4__ {int raw; } ;
struct TYPE_6__ {TYPE_1__ dgid; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*,int ,int) ;
 TYPE_3__* FUNC_1 (struct rdma_ah_attr*) ;
 int FUNC_2 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_3 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_4 (struct in6_addr*) ;
 scalar_t__ FUNC_5 (struct in6_addr*) ;

__attribute__((used)) static inline int FUNC_6(struct ocrdma_dev *VAR_1,
  struct rdma_ah_attr *VAR_2, u8 *VAR_3)
{
 struct in6_addr VAR_4;

 FUNC_0(&VAR_4, FUNC_1(VAR_2)->dgid.raw, sizeof(VAR_4));
 if (FUNC_4(&VAR_4))
  FUNC_3(&VAR_4, VAR_3);
 else if (FUNC_5(&VAR_4))
  FUNC_2(&VAR_4, VAR_3);
 else
  FUNC_0(VAR_3, VAR_2->roce.dmac, VAR_0);
 return 0;
}
