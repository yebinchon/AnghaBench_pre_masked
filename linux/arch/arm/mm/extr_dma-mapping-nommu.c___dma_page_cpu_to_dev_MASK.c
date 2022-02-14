
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,size_t,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(phys_addr_t VAR_1, size_t VAR_2,
      enum dma_data_direction VAR_3)
{
 FUNC_1(FUNC_0(VAR_1), VAR_2, VAR_3);

 if (VAR_3 == VAR_0)
  FUNC_3(VAR_1, VAR_1 + VAR_2);
 else
  FUNC_2(VAR_1, VAR_1 + VAR_2);
}
