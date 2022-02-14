
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hidma_chan {int lock; TYPE_2__* running; scalar_t__ paused; int last_success; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;
struct TYPE_3__ {int cookie; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct hidma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_5(struct dma_chan *VAR_5,
           dma_cookie_t VAR_6,
           struct dma_tx_state *VAR_7)
{
 struct hidma_chan *VAR_8 = FUNC_4(VAR_5);
 enum dma_status VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_9 == VAR_0) {
  bool VAR_10;

  VAR_10 = FUNC_1(VAR_6, VAR_8->last_success,
        VAR_5->cookie);
  return VAR_10 ? VAR_9 : VAR_1;
 }

 if (VAR_8->paused && (VAR_9 == VAR_2)) {
  unsigned long VAR_11;
  dma_cookie_t VAR_12;

  FUNC_2(&VAR_8->lock, VAR_11);
  if (VAR_8->running)
   VAR_12 = VAR_8->running->desc.cookie;
  else
   VAR_12 = -VAR_4;

  if (VAR_12 == VAR_6)
   VAR_9 = VAR_3;

  FUNC_3(&VAR_8->lock, VAR_11);
 }

 return VAR_9;
}
