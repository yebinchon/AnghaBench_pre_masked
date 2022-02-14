
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpet_dev {unsigned long hd_irqdata; int hd_waitqueue; int hd_ireqfreq; } ;
struct file {struct hpet_dev* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_3, poll_table * VAR_4)
{
 unsigned long VAR_5;
 struct hpet_dev *VAR_6;

 VAR_6 = VAR_3->private_data;

 if (!VAR_6->hd_ireqfreq)
  return 0;

 FUNC_0(VAR_3, &VAR_6->hd_waitqueue, VAR_4);

 FUNC_1(&VAR_2);
 VAR_5 = VAR_6->hd_irqdata;
 FUNC_2(&VAR_2);

 if (VAR_5 != 0)
  return VAR_0 | VAR_1;

 return 0;
}
