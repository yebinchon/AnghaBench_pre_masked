
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {scalar_t__ reg_base; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mmp_tdma_chan *VAR_3, dma_addr_t VAR_4)
{
 FUNC_1(VAR_4, VAR_3->reg_base + VAR_2);
 FUNC_1(FUNC_0(VAR_3->reg_base + VAR_0) | VAR_1,
     VAR_3->reg_base + VAR_0);
}
