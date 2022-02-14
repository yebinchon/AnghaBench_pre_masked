
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 () ;



 int FUNC_1 (int ,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct device *VAR_2, phys_addr_t VAR_3,
         size_t VAR_4, enum dma_data_direction VAR_5)
{
 switch (VAR_5) {
 case 128:
  FUNC_1(VAR_3, VAR_4, VAR_0);
  break;
 case 129:
 case 130:
  FUNC_1(VAR_3, VAR_4, VAR_1);
  break;
 default:
  FUNC_0();
 }
}
