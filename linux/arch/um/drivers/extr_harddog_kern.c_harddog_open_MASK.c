
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (struct inode*,struct file*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_7, struct file *VAR_8)
{
 int VAR_9 = -VAR_0;
 char *VAR_10 = ((void*)0);

 FUNC_2(&VAR_3);
 FUNC_4(&VAR_5);
 if(VAR_6)
  goto err;







 VAR_9 = FUNC_6(&VAR_2, &VAR_4, VAR_10);
 if(VAR_9)
  goto err;

 VAR_6 = 1;
 FUNC_5(&VAR_5);
 FUNC_3(&VAR_3);
 return FUNC_7(VAR_7, VAR_8);
err:
 FUNC_5(&VAR_5);
 FUNC_3(&VAR_3);
 return VAR_9;
}
