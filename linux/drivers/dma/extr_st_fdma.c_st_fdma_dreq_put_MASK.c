
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_fdma_dev {int dreq_mask; int dev; } ;
struct st_fdma_chan {int dreq_line; struct st_fdma_dev* fdev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct st_fdma_chan *VAR_0)
{
 struct st_fdma_dev *VAR_1 = VAR_0->fdev;

 FUNC_1(VAR_1->dev, "put dreq_line:%#x\n", VAR_0->dreq_line);
 FUNC_0(VAR_0->dreq_line, &VAR_1->dreq_mask);
}
