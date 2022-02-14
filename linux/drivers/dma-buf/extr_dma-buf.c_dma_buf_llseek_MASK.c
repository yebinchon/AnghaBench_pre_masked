
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dma_buf* private_data; } ;
struct dma_buf {scalar_t__ size; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*) ;

__attribute__((used)) static loff_t FUNC_1(struct file *VAR_4, loff_t VAR_5, int VAR_6)
{
 struct dma_buf *VAR_7;
 loff_t VAR_8;

 if (!FUNC_0(VAR_4))
  return -VAR_0;

 VAR_7 = VAR_4->private_data;




 if (VAR_6 == VAR_2)
  VAR_8 = VAR_7->size;
 else if (VAR_6 == VAR_3)
  VAR_8 = 0;
 else
  return -VAR_1;

 if (VAR_5 != 0)
  return -VAR_1;

 return VAR_8 + VAR_5;
}
