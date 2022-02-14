
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rdma_ah_attr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {scalar_t__ lid; } ;
struct TYPE_2__ {int gid_prefix; } ;
struct hfi1_ibport {TYPE_1__ rvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct hfi1_pportdata* FUNC_3 (struct hfi1_ibport*) ;
 int FUNC_4 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_5 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_6 (struct rdma_ah_attr*) ;
 int FUNC_7 (struct rdma_ah_attr*) ;
 int FUNC_8 (struct rdma_ah_attr*,int) ;
 int FUNC_9 (struct rdma_ah_attr*,int ) ;
 int FUNC_10 (struct rdma_ah_attr*,int ) ;
 struct hfi1_ibport* FUNC_11 (struct ib_device*,int ) ;

__attribute__((used)) static inline void FUNC_12(struct ib_device *VAR_4,
           struct rdma_ah_attr *VAR_5)
{
 struct hfi1_pportdata *VAR_6;
 struct hfi1_ibport *VAR_7;
 u32 VAR_8 = FUNC_5(VAR_5);





 VAR_7 = FUNC_11(VAR_4, FUNC_7(VAR_5));
 VAR_6 = FUNC_3(VAR_7);
 if ((((VAR_8 >= FUNC_1(VAR_2)) ||
       (VAR_6->lid >= FUNC_1(VAR_2))) &&
     (VAR_8 != FUNC_2(VAR_3)) &&
     (VAR_8 != FUNC_1(VAR_1)) &&
     (!(FUNC_4(VAR_5) & VAR_0))) ||
     (FUNC_6(VAR_5))) {
  FUNC_8(VAR_5, VAR_0);
  FUNC_9(VAR_5, FUNC_0(VAR_8));
  FUNC_10(VAR_5, VAR_7->rvp.gid_prefix);
 }
}
