
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rdma_ah_attr {int dummy; } ;
struct ib_global_route {int dgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_6 (struct rdma_ah_attr*) ;
 int FUNC_7 (struct rdma_ah_attr*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_8(struct rdma_ah_attr *VAR_4)
{
 const struct ib_global_route *VAR_5 = FUNC_6(VAR_4);
 u32 VAR_6 = FUNC_5(VAR_4);
 if (FUNC_2(&VAR_5->dgid))
  VAR_6 = FUNC_3(&VAR_5->dgid);
 else if ((VAR_6 >= FUNC_0(VAR_1)) &&
   (VAR_6 != FUNC_0(VAR_0)) &&
   (VAR_6 != FUNC_1(VAR_2)))
  VAR_6 = VAR_6 - FUNC_0(VAR_1) +
   FUNC_4(VAR_3);
 else if (VAR_6 == FUNC_0(VAR_0))
  VAR_6 = FUNC_1(VAR_2);

 FUNC_7(VAR_4, VAR_6);
}
