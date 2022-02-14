
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int waitcount; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct rdtgroup* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 struct rdtgroup* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6)
{
 struct rdtgroup *VAR_7;

 FUNC_2(&VAR_4);

 VAR_7 = FUNC_4(FUNC_1(VAR_5));
 if (!VAR_7) {
  FUNC_3(&VAR_4);
  return -VAR_0;
 }

 VAR_6->private_data = VAR_7;
 FUNC_0(&VAR_7->waitcount);

 VAR_6->f_mode &= ~(VAR_1 | VAR_2 | VAR_3);

 FUNC_3(&VAR_4);

 return 0;
}
