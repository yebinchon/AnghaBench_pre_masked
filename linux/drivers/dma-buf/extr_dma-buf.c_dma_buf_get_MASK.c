
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dma_buf* private_data; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dma_buf* FUNC_0 (int ) ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;

struct dma_buf *FUNC_4(int VAR_2)
{
 struct file *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 if (!FUNC_3(VAR_3)) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_1);
 }

 return VAR_3->private_data;
}
