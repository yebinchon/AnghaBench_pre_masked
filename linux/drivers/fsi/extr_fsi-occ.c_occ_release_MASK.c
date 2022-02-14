
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occ_client {scalar_t__ buffer; } ;
struct inode {int dummy; } ;
struct file {struct occ_client* private_data; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct occ_client*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct occ_client *VAR_2 = VAR_1->private_data;

 FUNC_0((unsigned long)VAR_2->buffer);
 FUNC_1(VAR_2);

 return 0;
}
