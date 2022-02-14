
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,size_t,int) ;
 int FUNC_2 (int ,size_t,int ) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct device *VAR_3, dma_addr_t VAR_4,
  phys_addr_t VAR_5, size_t VAR_6, enum dma_data_direction VAR_7)
{
 if (FUNC_3(FUNC_0(VAR_4)))
  FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7);
 else if (VAR_7 == VAR_0)
  FUNC_2(VAR_4, VAR_6, VAR_2);
 else
  FUNC_2(VAR_4, VAR_6, VAR_1);
}
