
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct file {struct dma_buf* private_data; } ;
struct dma_buf {int lock; scalar_t__ name; scalar_t__ exp_name; int file; scalar_t__ size; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0, struct file *VAR_1)
{
 struct dma_buf *VAR_2 = VAR_1->private_data;

 FUNC_3(VAR_0, "size:\t%zu\n", VAR_2->size);

 FUNC_3(VAR_0, "count:\t%ld\n", FUNC_0(VAR_2->file) - 1);
 FUNC_3(VAR_0, "exp_name:\t%s\n", VAR_2->exp_name);
 FUNC_1(&VAR_2->lock);
 if (VAR_2->name)
  FUNC_3(VAR_0, "name:\t%s\n", VAR_2->name);
 FUNC_2(&VAR_2->lock);
}
