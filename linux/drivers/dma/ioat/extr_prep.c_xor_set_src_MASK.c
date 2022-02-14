
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ioat_raw_descriptor {scalar_t__* field; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ioat_raw_descriptor *VAR_2[2],
   dma_addr_t VAR_3, u32 VAR_4, int VAR_5)
{
 struct ioat_raw_descriptor *VAR_6 = VAR_2[VAR_0 >> VAR_5 & 1];

 VAR_6->field[VAR_1[VAR_5]] = VAR_3 + VAR_4;
}
