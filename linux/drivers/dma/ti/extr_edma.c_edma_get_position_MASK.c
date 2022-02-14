
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edma_cc {int dummy; } ;
typedef int dma_addr_t ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct edma_cc*,int ) ;

__attribute__((used)) static dma_addr_t FUNC_3(struct edma_cc *VAR_2, unsigned VAR_3,
        bool VAR_4)
{
 u32 VAR_5;

 VAR_3 = FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_3);
 VAR_5 += VAR_4 ? VAR_0 : VAR_1;

 return FUNC_2(VAR_2, VAR_5);
}
