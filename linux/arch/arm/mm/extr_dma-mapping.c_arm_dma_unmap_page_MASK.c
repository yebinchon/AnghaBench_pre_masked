
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,size_t,int) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2, dma_addr_t VAR_3,
  size_t VAR_4, enum dma_data_direction VAR_5, unsigned long VAR_6)
{
 if ((VAR_6 & VAR_0) == 0)
  FUNC_0(FUNC_2(FUNC_1(VAR_2, VAR_3)),
          VAR_3 & ~VAR_1, VAR_4, VAR_5);
}
