
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct device*,struct scatterlist*,int,int,unsigned long) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*,unsigned long) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int ,struct scatterlist*,int,int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, struct scatterlist *VAR_1,
       int VAR_2, enum dma_data_direction VAR_3,
       unsigned long VAR_4)
{
 if (FUNC_2(VAR_0, VAR_4))
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_4(VAR_0, FUNC_3(VAR_0), VAR_1, VAR_2,
    FUNC_1(VAR_0), VAR_3, VAR_4);
}
