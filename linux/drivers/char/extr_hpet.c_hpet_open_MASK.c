
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hpets {int hp_ntimer; struct hpet_dev* hp_dev; struct hpets* hp_next; } ;
struct hpet_dev {int hd_flags; scalar_t__ hd_irqdata; } ;
struct file {int f_mode; struct hpet_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hpet_dev*) ;
 struct hpets* VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_7, struct file *VAR_8)
{
 struct hpet_dev *VAR_9;
 struct hpets *VAR_10;
 int VAR_11;

 if (VAR_8->f_mode & VAR_2)
  return -VAR_1;

 FUNC_1(&VAR_5);
 FUNC_3(&VAR_4);

 for (VAR_9 = ((void*)0), VAR_10 = VAR_6; VAR_10 && !VAR_9; VAR_10 = VAR_10->hp_next)
  for (VAR_11 = 0; VAR_11 < VAR_10->hp_ntimer; VAR_11++)
   if (VAR_10->hp_dev[VAR_11].hd_flags & VAR_3)
    continue;
   else {
    VAR_9 = &VAR_10->hp_dev[VAR_11];
    break;
   }

 if (!VAR_9) {
  FUNC_4(&VAR_4);
  FUNC_2(&VAR_5);
  return -VAR_0;
 }

 VAR_8->private_data = VAR_9;
 VAR_9->hd_irqdata = 0;
 VAR_9->hd_flags |= VAR_3;
 FUNC_4(&VAR_4);
 FUNC_2(&VAR_5);

 FUNC_0(VAR_9);

 return 0;
}
