
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_ah_attr {int dummy; } ;
struct rvt_ah {int vl; int log_pmtu; struct rdma_ah_attr attr; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_ibport {int * sl_to_sc; } ;
struct hfi1_devdata {TYPE_1__* vld; } ;
struct TYPE_2__ {int mtu; } ;


 struct hfi1_devdata* FUNC_0 (struct hfi1_pportdata*) ;
 int FUNC_1 (struct rdma_ah_attr*) ;
 int FUNC_2 (struct ib_device*,struct rdma_ah_attr*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 struct hfi1_pportdata* FUNC_4 (struct hfi1_ibport*) ;
 int FUNC_5 (struct rdma_ah_attr*) ;
 size_t FUNC_6 (struct rdma_ah_attr*) ;
 int FUNC_7 (struct hfi1_devdata*,int ) ;
 struct hfi1_ibport* FUNC_8 (struct ib_device*,int ) ;

__attribute__((used)) static void FUNC_9(struct ib_device *VAR_1,
          struct rdma_ah_attr *VAR_2,
          struct rvt_ah *VAR_3)
{
 struct hfi1_ibport *VAR_4;
 struct hfi1_pportdata *VAR_5;
 struct hfi1_devdata *VAR_6;
 u8 VAR_7;
 struct rdma_ah_attr *VAR_8 = &VAR_3->attr;






 VAR_4 = FUNC_8(VAR_1, FUNC_5(VAR_2));
 VAR_5 = FUNC_4(VAR_4);
 VAR_7 = VAR_4->sl_to_sc[FUNC_6(&VAR_3->attr)];
 FUNC_2(VAR_1, VAR_8);
 FUNC_1(VAR_8);
 VAR_6 = FUNC_0(VAR_5);
 VAR_3->vl = FUNC_7(VAR_6, VAR_7);
 if (VAR_3->vl < VAR_0 || VAR_3->vl == 15)
  VAR_3->log_pmtu = FUNC_3(VAR_6->vld[VAR_3->vl].mtu);
}
