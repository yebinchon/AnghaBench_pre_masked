
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy_dev {int state; int buf_lock; scalar_t__ req_len; int wq; } ;
struct file {struct proxy_dev* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_5, poll_table *VAR_6)
{
 struct proxy_dev *VAR_7 = VAR_5->private_data;
 __poll_t VAR_8;

 FUNC_2(VAR_5, &VAR_7->wq, VAR_6);

 VAR_8 = VAR_2;

 FUNC_0(&VAR_7->buf_lock);

 if (VAR_7->req_len)
  VAR_8 |= VAR_1 | VAR_3;

 if (!(VAR_7->state & VAR_4))
  VAR_8 |= VAR_0;

 FUNC_1(&VAR_7->buf_lock);

 return VAR_8;
}
