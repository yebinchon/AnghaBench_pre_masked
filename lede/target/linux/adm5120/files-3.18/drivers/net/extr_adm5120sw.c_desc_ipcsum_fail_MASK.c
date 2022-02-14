
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int misc; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct dma_desc *VAR_1)
{
 return ((VAR_1->misc & VAR_0) != 0);
}
