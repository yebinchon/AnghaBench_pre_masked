
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct dma_ops_domain {int iovad; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 unsigned long VAR_0 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (int *,unsigned int,int ,int) ;

__attribute__((used)) static unsigned long FUNC_4(struct device *VAR_1,
     struct dma_ops_domain *VAR_2,
     unsigned int VAR_3, u64 VAR_4)
{
 unsigned long VAR_5 = 0;

 VAR_3 = FUNC_2(VAR_3);

 if (VAR_4 > FUNC_0(32))
  VAR_5 = FUNC_3(&VAR_2->iovad, VAR_3,
          FUNC_1(FUNC_0(32)), 0);

 if (!VAR_5)
  VAR_5 = FUNC_3(&VAR_2->iovad, VAR_3,
          FUNC_1(VAR_4), 1);

 return (VAR_5 << VAR_0);
}
