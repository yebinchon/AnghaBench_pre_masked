
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_tdma_chan {int status; scalar_t__ reg_base; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct mmp_tdma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_4)
{
 struct mmp_tdma_chan *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->reg_base + VAR_1);
 VAR_6 |= VAR_2;
 VAR_6 &= ~VAR_3;
 FUNC_2(VAR_6, VAR_5->reg_base + VAR_1);

 VAR_5->status = VAR_0;

 return 0;
}
