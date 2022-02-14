
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;





 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,size_t) ;

void FUNC_3(struct device *VAR_0, phys_addr_t VAR_1,
  size_t VAR_2, enum dma_data_direction VAR_3)
{
 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_1, VAR_2);
  break;

 case 129:
  FUNC_0(VAR_1, VAR_2);
  break;

 case 130:
  FUNC_2(VAR_1, VAR_2);
  break;

 default:
  break;
 }
}
