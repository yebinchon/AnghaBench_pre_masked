
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 () ;



 int FUNC_1 (unsigned long,unsigned long) ;
 void* FUNC_2 (int ) ;

void FUNC_3(struct device *VAR_0, phys_addr_t VAR_1,
  size_t VAR_2, enum dma_data_direction VAR_3)
{
 void *VAR_4 = FUNC_2(VAR_1);

 switch (VAR_3) {
 case 130:
 case 129:
  FUNC_1((unsigned long)VAR_4,
   (unsigned long)(VAR_4 + VAR_2));
  break;
 case 128:
  break;
 default:
  FUNC_0();
 }
}
