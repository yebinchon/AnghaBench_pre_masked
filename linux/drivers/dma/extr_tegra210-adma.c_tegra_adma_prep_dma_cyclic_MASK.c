
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_adma_desc {size_t buf_len; size_t period_len; size_t num_periods; int vd; } ;
struct tegra_adma_chan {int vc; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct tegra_adma_desc*) ;
 struct tegra_adma_desc* FUNC_3 (int,int ) ;
 int FUNC_4 (struct tegra_adma_chan*) ;
 scalar_t__ FUNC_5 (struct tegra_adma_chan*,struct tegra_adma_desc*,int ,int) ;
 struct tegra_adma_chan* FUNC_6 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_7 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_8(
 struct dma_chan *VAR_2, dma_addr_t VAR_3, size_t VAR_4,
 size_t VAR_5, enum dma_transfer_direction VAR_6,
 unsigned long VAR_7)
{
 struct tegra_adma_chan *VAR_8 = FUNC_6(VAR_2);
 struct tegra_adma_desc *VAR_9 = ((void*)0);

 if (!VAR_4 || !VAR_5 || VAR_5 > VAR_0) {
  FUNC_1(FUNC_4(VAR_8), "invalid buffer/period len\n");
  return ((void*)0);
 }

 if (VAR_4 % VAR_5) {
  FUNC_1(FUNC_4(VAR_8), "buf_len not a multiple of period_len\n");
  return ((void*)0);
 }

 if (!FUNC_0(VAR_3, 4)) {
  FUNC_1(FUNC_4(VAR_8), "invalid buffer alignment\n");
  return ((void*)0);
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->buf_len = VAR_4;
 VAR_9->period_len = VAR_5;
 VAR_9->num_periods = VAR_4 / VAR_5;

 if (FUNC_5(VAR_8, VAR_9, VAR_3, VAR_6)) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 return FUNC_7(&VAR_8->vc, &VAR_9->vd, VAR_7);
}
