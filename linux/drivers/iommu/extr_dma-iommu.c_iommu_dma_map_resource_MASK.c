
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,size_t,int) ;
 int FUNC_1 (int,int,unsigned long) ;

__attribute__((used)) static dma_addr_t FUNC_2(struct device *VAR_1, phys_addr_t VAR_2,
  size_t VAR_3, enum dma_data_direction VAR_4, unsigned long VAR_5)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3,
   FUNC_1(VAR_4, 0, VAR_5) | VAR_0);
}
