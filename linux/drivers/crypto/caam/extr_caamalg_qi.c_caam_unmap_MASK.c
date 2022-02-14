
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct scatterlist*,int,int) ;
 int FUNC_1 (struct device*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_3, struct scatterlist *VAR_4,
         struct scatterlist *VAR_5, int VAR_6,
         int VAR_7, dma_addr_t VAR_8, int VAR_9,
         enum dma_data_direction VAR_10, dma_addr_t VAR_11,
         int VAR_12)
{
 if (VAR_5 != VAR_4) {
  if (VAR_6)
   FUNC_0(VAR_3, VAR_4, VAR_6, VAR_2);
  if (VAR_7)
   FUNC_0(VAR_3, VAR_5, VAR_7, VAR_1);
 } else {
  FUNC_0(VAR_3, VAR_4, VAR_6, VAR_0);
 }

 if (VAR_8)
  FUNC_1(VAR_3, VAR_8, VAR_9, VAR_10);
 if (VAR_12)
  FUNC_1(VAR_3, VAR_11, VAR_12, VAR_2);
}
