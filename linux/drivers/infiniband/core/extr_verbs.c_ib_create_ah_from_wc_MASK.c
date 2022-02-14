
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_ah_attr {int dummy; } ;
struct ib_wc {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_grh {int dummy; } ;
struct ib_ah {int dummy; } ;


 struct ib_ah* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct ib_wc const*,struct ib_grh const*,struct rdma_ah_attr*) ;
 struct ib_ah* FUNC_2 (struct ib_pd*,struct rdma_ah_attr*,int ) ;
 int FUNC_3 (struct rdma_ah_attr*) ;

struct ib_ah *FUNC_4(struct ib_pd *VAR_1, const struct ib_wc *VAR_2,
       const struct ib_grh *VAR_3, u8 VAR_4)
{
 struct rdma_ah_attr VAR_5;
 struct ib_ah *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1->device, VAR_4, VAR_2, VAR_3, &VAR_5);
 if (VAR_7)
  return FUNC_0(VAR_7);

 VAR_6 = FUNC_2(VAR_1, &VAR_5, VAR_0);

 FUNC_3(&VAR_5);
 return VAR_6;
}
