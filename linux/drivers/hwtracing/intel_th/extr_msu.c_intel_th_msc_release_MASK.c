
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {struct msc* msc; } ;
struct msc {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct msc_iter* private_data; } ;


 int FUNC_0 (struct msc_iter*,struct msc*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct msc_iter *VAR_2 = VAR_1->private_data;
 struct msc *VAR_3 = VAR_2->msc;

 FUNC_0(VAR_2, VAR_3);

 return 0;
}
