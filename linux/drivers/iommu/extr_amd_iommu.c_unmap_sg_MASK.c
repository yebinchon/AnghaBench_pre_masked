
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct protection_domain {int dummy; } ;
struct dma_ops_domain {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 scalar_t__ FUNC_0 (struct protection_domain*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dma_ops_domain*,unsigned long,int,int) ;
 struct protection_domain* FUNC_2 (struct device*) ;
 unsigned long FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct device*,struct scatterlist*,int) ;
 struct dma_ops_domain* FUNC_5 (struct protection_domain*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2, struct scatterlist *VAR_3,
       int VAR_4, enum dma_data_direction VAR_5,
       unsigned long VAR_6)
{
 struct protection_domain *VAR_7;
 struct dma_ops_domain *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_7))
  return;

 VAR_9 = FUNC_3(VAR_3) & VAR_0;
 VAR_8 = FUNC_5(VAR_7);
 VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_8, VAR_9, VAR_10 << VAR_1, VAR_5);
}
