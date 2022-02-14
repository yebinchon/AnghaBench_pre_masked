
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rdma_ah_attr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_ibport {size_t* sl_to_sc; } ;
struct hfi1_devdata {int dummy; } ;


 size_t FUNC_0 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (size_t,size_t) ;
 struct hfi1_devdata* FUNC_2 (struct hfi1_pportdata*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 struct hfi1_pportdata* FUNC_4 (struct hfi1_ibport*) ;
 int FUNC_5 (struct rdma_ah_attr*) ;
 int FUNC_6 (struct rdma_ah_attr*) ;
 int FUNC_7 (struct rdma_ah_attr*) ;
 size_t FUNC_8 (struct rdma_ah_attr*) ;
 int FUNC_9 (struct hfi1_devdata*,size_t) ;
 struct hfi1_ibport* FUNC_10 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_11(struct ib_device *VAR_3, struct rdma_ah_attr *VAR_4)
{
 struct hfi1_ibport *VAR_5;
 struct hfi1_pportdata *VAR_6;
 struct hfi1_devdata *VAR_7;
 u8 VAR_8;
 u8 VAR_9;

 if (FUNC_3(FUNC_6(VAR_4)) &&
     !(FUNC_5(VAR_4) & VAR_1))
  return -VAR_0;


 VAR_5 = FUNC_10(VAR_3, FUNC_7(VAR_4));
 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = FUNC_2(VAR_6);

 VAR_9 = FUNC_8(VAR_4);
 if (VAR_9 >= FUNC_0(VAR_5->sl_to_sc))
  return -VAR_0;
 VAR_9 = FUNC_1(VAR_9, FUNC_0(VAR_5->sl_to_sc));

 VAR_8 = VAR_5->sl_to_sc[VAR_9];
 if (FUNC_9(VAR_7, VAR_8) > VAR_2 && FUNC_9(VAR_7, VAR_8) != 0xf)
  return -VAR_0;
 return 0;
}
