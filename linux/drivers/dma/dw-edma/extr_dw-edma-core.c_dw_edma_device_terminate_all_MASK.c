
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_edma_chan {int configured; scalar_t__ status; scalar_t__ request; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct dw_edma_chan* FUNC_1 (struct dma_chan*) ;
 scalar_t__ FUNC_2 (struct dw_edma_chan*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_7)
{
 struct dw_edma_chan *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = 0;
 FUNC_0(VAR_6);

 if (!VAR_8->configured) {

 } else if (VAR_8->status == VAR_4) {
  VAR_8->status = VAR_3;
  VAR_8->configured = 0;
 } else if (VAR_8->status == VAR_3) {
  VAR_8->configured = 0;
 } else if (FUNC_2(VAR_8) == VAR_0) {




  VAR_8->status = VAR_3;
  VAR_8->configured = 0;
 } else if (VAR_8->request > VAR_1) {
  VAR_9 = -VAR_5;
 } else {
  VAR_8->request = VAR_2;
 }

 return VAR_9;
}
