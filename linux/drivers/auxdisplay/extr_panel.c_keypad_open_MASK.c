
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7;

 VAR_7 = -VAR_0;
 if (!FUNC_0(&VAR_3))
  goto fail;

 VAR_7 = -VAR_1;
 if (VAR_6->f_mode & VAR_2)
  goto fail;

 VAR_4 = 0;
 return 0;
 fail:
 FUNC_1(&VAR_3);
 return VAR_7;
}
