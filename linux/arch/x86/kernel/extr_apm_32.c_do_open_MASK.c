
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; struct apm_user* private_data; } ;
struct apm_user {int writer; int reader; struct apm_user* next; int suser; scalar_t__ standbys_read; scalar_t__ suspends_read; scalar_t__ standbys_pending; scalar_t__ suspends_pending; scalar_t__ event_head; scalar_t__ event_tail; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct apm_user* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct apm_user* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_8, struct file *VAR_9)
{
 struct apm_user *VAR_10;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_5);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_10->magic = VAR_0;
 VAR_10->event_tail = VAR_10->event_head = 0;
 VAR_10->suspends_pending = VAR_10->standbys_pending = 0;
 VAR_10->suspends_read = VAR_10->standbys_read = 0;







 VAR_10->suser = FUNC_0(VAR_1);
 VAR_10->writer = (VAR_9->f_mode & VAR_4) == VAR_4;
 VAR_10->reader = (VAR_9->f_mode & VAR_3) == VAR_3;
 FUNC_2(&VAR_7);
 VAR_10->next = VAR_6;
 VAR_6 = VAR_10;
 FUNC_3(&VAR_7);
 VAR_9->private_data = VAR_10;
 return 0;
}
