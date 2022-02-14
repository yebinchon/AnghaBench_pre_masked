
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_desc {int misc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(struct dma_desc *VAR_2)
{
 return (VAR_2->misc >> VAR_1) & VAR_0;
}
