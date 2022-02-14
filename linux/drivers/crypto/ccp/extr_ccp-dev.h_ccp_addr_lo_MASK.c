
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccp_dma_info {scalar_t__ offset; scalar_t__ address; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct ccp_dma_info *VAR_0)
{
 return FUNC_0(VAR_0->address + VAR_0->offset);
}
