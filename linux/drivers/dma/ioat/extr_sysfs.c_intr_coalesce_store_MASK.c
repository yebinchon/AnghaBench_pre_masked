
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_chan {int intr_coalesce; } ;
struct dma_chan {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int*) ;
 struct ioatdma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static ssize_t FUNC_2(struct dma_chan *VAR_2, const char *VAR_3,
size_t VAR_4)
{
 int VAR_5 = 0;
 struct ioatdma_chan *VAR_6 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3, "%du", &VAR_5) != -1) {
  if ((VAR_5 < 0) ||
      (VAR_5 > VAR_1))
   return -VAR_0;
  VAR_6->intr_coalesce = VAR_5;
 }

 return VAR_4;
}
