
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_channel {int chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int* VAR_5 ;

__attribute__((used)) static inline unsigned int FUNC_2(struct dma_channel *VAR_6)
{
 u32 VAR_7 = FUNC_0(FUNC_1(VAR_6->chan) + VAR_0);
 int VAR_8 = ((VAR_7 & VAR_3) >> VAR_4) |
  ((VAR_7 & VAR_1) >> VAR_2);

 return VAR_5[VAR_8];
}
