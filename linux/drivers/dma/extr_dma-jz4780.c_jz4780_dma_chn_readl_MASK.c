
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_dma_dev {scalar_t__ chn_base; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline uint32_t FUNC_2(struct jz4780_dma_dev *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2)
{
 return FUNC_1(VAR_0->chn_base + VAR_2 + FUNC_0(VAR_1));
}
