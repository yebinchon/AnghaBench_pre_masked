
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_dma_chan {int lock; int flags; } ;
struct dw_desc {scalar_t__ total_len; scalar_t__ residue; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 struct dw_desc* FUNC_0 (struct dw_dma_chan*,int ) ;
 struct dw_desc* FUNC_1 (struct dw_dma_chan*) ;
 scalar_t__ FUNC_2 (struct dw_dma_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static u32 FUNC_6(struct dw_dma_chan *VAR_1, dma_cookie_t VAR_2)
{
 struct dw_desc *VAR_3;
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_1->lock, VAR_4);

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3) {
  if (VAR_3 == FUNC_1(VAR_1)) {
   VAR_5 = VAR_3->residue;
   if (FUNC_5(VAR_0, &VAR_1->flags) && VAR_5)
    VAR_5 -= FUNC_2(VAR_1);
  } else {
   VAR_5 = VAR_3->total_len;
  }
 } else {
  VAR_5 = 0;
 }

 FUNC_4(&VAR_1->lock, VAR_4);
 return VAR_5;
}
