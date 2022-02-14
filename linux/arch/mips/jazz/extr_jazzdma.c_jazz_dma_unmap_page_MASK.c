
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct device*,int ,size_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, dma_addr_t VAR_2,
  size_t VAR_3, enum dma_data_direction VAR_4, unsigned long VAR_5)
{
 if (!(VAR_5 & VAR_0))
  FUNC_0(VAR_1, FUNC_2(VAR_2), VAR_3, VAR_4);
 FUNC_1(VAR_2);
}
