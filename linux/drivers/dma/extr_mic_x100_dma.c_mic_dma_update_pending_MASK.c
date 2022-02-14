
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {int api_ch; int submitted; int issued; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mic_dma_chan *VAR_1)
{
 if (FUNC_1(VAR_1->issued, VAR_1->submitted)
   > VAR_0)
  FUNC_0(&VAR_1->api_ch);
}
