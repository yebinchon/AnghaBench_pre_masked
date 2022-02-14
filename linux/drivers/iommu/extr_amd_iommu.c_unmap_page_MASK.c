
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int dummy; } ;
struct dma_ops_domain {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (struct protection_domain*) ;
 int FUNC_1 (struct dma_ops_domain*,int ,size_t,int) ;
 struct protection_domain* FUNC_2 (struct device*) ;
 struct dma_ops_domain* FUNC_3 (struct protection_domain*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, dma_addr_t VAR_1, size_t VAR_2,
         enum dma_data_direction VAR_3, unsigned long VAR_4)
{
 struct protection_domain *VAR_5;
 struct dma_ops_domain *VAR_6;

 VAR_5 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_5))
  return;

 VAR_6 = FUNC_3(VAR_5);

 FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3);
}
