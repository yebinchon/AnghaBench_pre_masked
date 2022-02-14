
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_hw_stats {scalar_t__* value; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_1(struct rdma_hw_stats *VAR_0, int VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, "%llu\n", (unsigned long long)VAR_0->value[VAR_1]);
}
