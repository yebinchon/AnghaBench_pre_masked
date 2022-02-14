
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_hw_stats {int num_counters; scalar_t__ timestamp; scalar_t__ lifespan; } ;
struct ib_device {int (* get_hw_stats ) (struct ib_device*,struct rdma_hw_stats*,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ib_device*,struct rdma_hw_stats*,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_1, struct rdma_hw_stats *VAR_2,
      u8 VAR_3, int VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_2->timestamp + VAR_2->lifespan))
  return 0;
 VAR_5 = VAR_1->get_hw_stats(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 == VAR_2->num_counters)
  VAR_2->timestamp = VAR_0;

 return 0;
}
