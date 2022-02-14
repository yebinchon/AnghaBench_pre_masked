
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rdma_hw_stats {scalar_t__* value; } ;
struct ib_device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct ib_device*,int,int) ;
 int FUNC_1 (char*,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(struct ib_device *VAR_0, int VAR_1,
        struct rdma_hw_stats *VAR_2, int VAR_3, char *VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);

 return FUNC_1(VAR_4, "%llu\n", VAR_2->value[VAR_3] + VAR_5);
}
