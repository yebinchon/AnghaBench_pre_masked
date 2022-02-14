
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rxe_dev {int * stats_counters; } ;
struct rdma_hw_stats {int * value; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct rxe_dev* FUNC_2 (struct ib_device*) ;

int FUNC_3(struct ib_device *VAR_2,
   struct rdma_hw_stats *VAR_3,
   u8 VAR_4, int VAR_5)
{
 struct rxe_dev *VAR_6 = FUNC_2(VAR_2);
 unsigned int VAR_7;

 if (!VAR_4 || !VAR_3)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  VAR_3->value[VAR_7] = FUNC_1(&VAR_6->stats_counters[VAR_7]);

 return FUNC_0(VAR_1);
}
