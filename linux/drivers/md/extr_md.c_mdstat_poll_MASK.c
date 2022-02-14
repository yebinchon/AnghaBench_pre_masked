
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ poll_event; } ;
struct file {struct seq_file* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_7, poll_table *VAR_8)
{
 struct seq_file *VAR_9 = VAR_7->private_data;
 __poll_t VAR_10;

 if (VAR_6)
  return VAR_1|VAR_3|VAR_0|VAR_2;
 FUNC_1(VAR_7, &VAR_5, VAR_8);


 VAR_10 = VAR_1 | VAR_3;

 if (VAR_9->poll_event != FUNC_0(&VAR_4))
  VAR_10 |= VAR_0 | VAR_2;
 return VAR_10;
}
