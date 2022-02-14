
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int tx; } ;
struct TYPE_2__ {int lock; } ;
struct sun6i_vchan {TYPE_1__ vc; struct sun6i_pchan* phy; } ;
struct sun6i_pchan {int desc; } ;
struct sun6i_dma_lli {scalar_t__ len; struct sun6i_dma_lli* v_lli_next; } ;
struct sun6i_desc {struct sun6i_dma_lli* v_lli; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 size_t FUNC_4 (struct sun6i_pchan*) ;
 struct sun6i_desc* FUNC_5 (int *) ;
 struct sun6i_vchan* FUNC_6 (struct dma_chan*) ;
 struct virt_dma_desc* FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static enum dma_status FUNC_8(struct dma_chan *VAR_1,
        dma_cookie_t VAR_2,
        struct dma_tx_state *VAR_3)
{
 struct sun6i_vchan *VAR_4 = FUNC_6(VAR_1);
 struct sun6i_pchan *VAR_5 = VAR_4->phy;
 struct sun6i_dma_lli *VAR_6;
 struct virt_dma_desc *VAR_7;
 struct sun6i_desc *VAR_8;
 enum dma_status VAR_9;
 unsigned long VAR_10;
 size_t VAR_11 = 0;

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_9 == VAR_0 || !VAR_3)
  return VAR_9;

 FUNC_2(&VAR_4->vc.lock, VAR_10);

 VAR_7 = FUNC_7(&VAR_4->vc, VAR_2);
 VAR_8 = FUNC_5(&VAR_7->tx);

 if (VAR_7) {
  for (VAR_6 = VAR_8->v_lli; VAR_6 != ((void*)0); VAR_6 = VAR_6->v_lli_next)
   VAR_11 += VAR_6->len;
 } else if (!VAR_5 || !VAR_5->desc) {
  VAR_11 = 0;
 } else {
  VAR_11 = FUNC_4(VAR_5);
 }

 FUNC_3(&VAR_4->vc.lock, VAR_10);

 FUNC_1(VAR_3, VAR_11);

 return VAR_9;
}
