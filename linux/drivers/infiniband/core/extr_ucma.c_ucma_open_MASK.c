
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_file {struct file* filp; int mut; int poll_wait; int ctx_list; int event_list; int close_wq; } ;
struct inode {int dummy; } ;
struct file {struct ucma_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ucma_file*) ;
 struct ucma_file* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 struct ucma_file *VAR_5;

 VAR_5 = FUNC_4(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->close_wq = FUNC_1("ucma_close_id",
       VAR_2);
 if (!VAR_5->close_wq) {
  FUNC_3(VAR_5);
  return -VAR_0;
 }

 FUNC_0(&VAR_5->event_list);
 FUNC_0(&VAR_5->ctx_list);
 FUNC_2(&VAR_5->poll_wait);
 FUNC_5(&VAR_5->mut);

 VAR_4->private_data = VAR_5;
 VAR_5->filp = VAR_4;

 return FUNC_6(VAR_3, VAR_4);
}
