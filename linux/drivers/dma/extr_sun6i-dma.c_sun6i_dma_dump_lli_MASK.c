
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct sun6i_vchan {TYPE_1__ vc; } ;
struct sun6i_dma_lli {int p_lli_next; int para; int len; int dst; int src; int cfg; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *,struct sun6i_dma_lli*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct sun6i_dma_lli*) ;

__attribute__((used)) static inline void FUNC_3(struct sun6i_vchan *VAR_0,
          struct sun6i_dma_lli *VAR_1)
{
 phys_addr_t VAR_2 = FUNC_2(VAR_1);

 FUNC_1(FUNC_0(&VAR_0->vc.chan),
  "\n\tdesc:   p - %pa v - 0x%p\n"
  "\t\tc - 0x%08x s - 0x%08x d - 0x%08x\n"
  "\t\tl - 0x%08x p - 0x%08x n - 0x%08x\n",
  &VAR_2, VAR_1,
  VAR_1->cfg, VAR_1->src, VAR_1->dst,
  VAR_1->len, VAR_1->para, VAR_1->p_lli_next);
}
