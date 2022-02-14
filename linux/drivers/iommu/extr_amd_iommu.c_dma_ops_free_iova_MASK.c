
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_ops_domain {int iovad; } ;


 unsigned long VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned long,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct dma_ops_domain *VAR_1,
         unsigned long VAR_2,
         unsigned int VAR_3)
{
 VAR_3 = FUNC_0(VAR_3);
 VAR_2 >>= VAR_0;

 FUNC_1(&VAR_1->iovad, VAR_2, VAR_3);
}
