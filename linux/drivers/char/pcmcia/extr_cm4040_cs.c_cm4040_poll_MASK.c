
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reader_dev {int buffer_status; int poll_wait; } ;
struct file {struct reader_dev* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct reader_dev*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_6, poll_table *VAR_7)
{
 struct reader_dev *VAR_8 = VAR_6->private_data;
 __poll_t VAR_9 = 0;

 FUNC_1(VAR_6, &VAR_8->poll_wait, VAR_7);

 if (FUNC_2(VAR_0, &VAR_8->buffer_status))
  VAR_9 |= VAR_2 | VAR_4;
 if (FUNC_2(VAR_1, &VAR_8->buffer_status))
  VAR_9 |= VAR_3 | VAR_5;

 FUNC_0(2, VAR_8, "<- cm4040_poll(%u)\n", VAR_9);

 return VAR_9;
}
