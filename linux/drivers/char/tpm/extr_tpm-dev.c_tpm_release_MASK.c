
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_priv {TYPE_1__* chip; } ;
struct file {struct file_priv* private_data; } ;
struct TYPE_2__ {int is_open; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct file_priv*) ;
 int FUNC_2 (struct file*,struct file_priv*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct file_priv *VAR_2 = VAR_1->private_data;

 FUNC_2(VAR_1, VAR_2);
 FUNC_0(0, &VAR_2->chip->is_open);
 FUNC_1(VAR_2);

 return 0;
}
