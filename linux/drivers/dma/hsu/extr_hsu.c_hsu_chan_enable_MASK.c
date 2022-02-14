
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hsu_dma_chan {scalar_t__ direction; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hsu_dma_chan*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct hsu_dma_chan *VAR_5)
{
 u32 VAR_6 = VAR_3;

 if (VAR_5->direction == VAR_1)
  VAR_6 &= ~VAR_4;
 else if (VAR_5->direction == VAR_0)
  VAR_6 |= VAR_4;

 FUNC_0(VAR_5, VAR_2, VAR_6);
}
