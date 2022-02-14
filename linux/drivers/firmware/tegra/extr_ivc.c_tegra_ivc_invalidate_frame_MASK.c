
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_ivc {unsigned int num_frames; int peer; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,size_t,int ) ;
 scalar_t__ FUNC_2 (struct tegra_ivc*,scalar_t__,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct tegra_ivc *VAR_1,
           dma_addr_t VAR_2,
           unsigned int VAR_3,
           unsigned int VAR_4,
           size_t VAR_5)
{
 if (!VAR_1->peer || FUNC_0(VAR_3 >= VAR_1->num_frames))
  return;

 VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_3) + VAR_4;

 FUNC_1(VAR_1->peer, VAR_2, VAR_5, VAR_0);
}
