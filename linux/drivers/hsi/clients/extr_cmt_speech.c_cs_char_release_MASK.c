
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct cs_char* private_data; } ;
struct cs_char {int lock; scalar_t__ opened; int dataind_queue; int chardev_queue; int mmap_base; int * hi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct cs_char *VAR_2 = VAR_1->private_data;

 FUNC_1(VAR_2->hi);
 FUNC_3(&VAR_2->lock);
 VAR_2->hi = ((void*)0);
 FUNC_2(VAR_2->mmap_base);
 FUNC_0(&VAR_2->chardev_queue);
 FUNC_0(&VAR_2->dataind_queue);
 VAR_2->opened = 0;
 FUNC_4(&VAR_2->lock);

 return 0;
}
