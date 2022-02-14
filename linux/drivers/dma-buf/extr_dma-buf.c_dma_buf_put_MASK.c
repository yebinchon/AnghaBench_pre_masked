
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buf {int file; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct dma_buf *VAR_0)
{
 if (FUNC_0(!VAR_0 || !VAR_0->file))
  return;

 FUNC_1(VAR_0->file);
}
