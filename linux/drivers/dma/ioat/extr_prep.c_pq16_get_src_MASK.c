
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_raw_descriptor {int * field; } ;
typedef int dma_addr_t ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static dma_addr_t FUNC_0(struct ioat_raw_descriptor *VAR_2[3], int VAR_3)
{
 struct ioat_raw_descriptor *VAR_4 = VAR_2[VAR_0[VAR_3]];

 return VAR_4->field[VAR_1[VAR_3]];
}
