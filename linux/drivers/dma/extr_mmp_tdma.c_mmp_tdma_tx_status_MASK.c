
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {int status; scalar_t__ pos; scalar_t__ buf_len; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int cookie; int completed_cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int FUNC_0 (struct dma_tx_state*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mmp_tdma_chan*) ;
 struct mmp_tdma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_3(struct dma_chan *VAR_0,
   dma_cookie_t VAR_1, struct dma_tx_state *VAR_2)
{
 struct mmp_tdma_chan *VAR_3 = FUNC_2(VAR_0);

 VAR_3->pos = FUNC_1(VAR_3);
 FUNC_0(VAR_2, VAR_0->completed_cookie, VAR_0->cookie,
    VAR_3->buf_len - VAR_3->pos);

 return VAR_3->status;
}
