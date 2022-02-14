
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {int status; scalar_t__ reg_base; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct mmp_tdma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_3)
{
 struct mmp_tdma_chan *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(FUNC_0(VAR_4->reg_base + VAR_1) & ~VAR_2,
     VAR_4->reg_base + VAR_1);
 VAR_4->status = VAR_0;

 return 0;
}
