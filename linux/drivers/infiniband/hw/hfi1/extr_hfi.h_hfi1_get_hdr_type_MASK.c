
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rdma_ah_attr {int dummy; } ;
struct TYPE_2__ {int dgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rdma_ah_attr*) ;
 TYPE_1__* FUNC_4 (struct rdma_ah_attr*) ;

__attribute__((used)) static inline bool FUNC_5(u32 VAR_3, struct rdma_ah_attr *VAR_4)
{







 if (FUNC_3(VAR_4) == FUNC_0(VAR_2))
  return (FUNC_2(&FUNC_4(VAR_4)->dgid)) ?
   VAR_0 : VAR_1;





 if (FUNC_1(FUNC_3(VAR_4)) == VAR_0)
  return VAR_0;

 return FUNC_1(VAR_3);
}
