
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (scalar_t__,size_t,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_7, dma_addr_t VAR_8,
       size_t VAR_9, enum dma_data_direction VAR_10,
       unsigned long VAR_11)
{
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14;

 if (FUNC_0(VAR_8 == VAR_0))
  return;






 if (VAR_8 < VAR_4 ||
     VAR_8 >= VAR_4 + VAR_6)
  return;

 VAR_12 = (VAR_8 - VAR_4)>>VAR_1;
 VAR_13 = FUNC_2(VAR_8, VAR_9, VAR_2);
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_5[VAR_12 + VAR_14] = VAR_3;
 }
 FUNC_1(VAR_12, VAR_13);
}
