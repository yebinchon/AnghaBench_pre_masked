
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_prd_msg_header {int type; int size; } ;
struct opal_prd_msg {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct opal_prd_msg*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct opal_prd_msg_header VAR_4;

 VAR_4.size = FUNC_1(sizeof(VAR_4));
 VAR_4.type = VAR_0;

 FUNC_2((struct opal_prd_msg *)&VAR_4);

 FUNC_0(&VAR_1, 0);

 return 0;
}
