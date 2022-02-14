
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_edma_chan {scalar_t__ status; scalar_t__ request; int configured; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct dw_edma_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_1(struct dma_chan *VAR_4)
{
 struct dw_edma_chan *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = 0;

 if (!VAR_5->configured)
  VAR_6 = -VAR_3;
 else if (VAR_5->status != VAR_2)
  VAR_6 = -VAR_3;
 else if (VAR_5->request != VAR_0)
  VAR_6 = -VAR_3;
 else
  VAR_5->request = VAR_1;

 return VAR_6;
}
