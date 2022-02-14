
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int open_mutex; int openers; int flags; TYPE_1__* gendisk; } ;
struct block_device {TYPE_1__* bd_disk; int bd_dev; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct mddev* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 struct mddev* FUNC_4 (int ) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct block_device *VAR_4, fmode_t VAR_5)
{




 struct mddev *VAR_6 = FUNC_4(VAR_4->bd_dev);
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;

 if (VAR_6->gendisk != VAR_4->bd_disk) {



  FUNC_5(VAR_6);

  FUNC_3(VAR_3);

  return -VAR_1;
 }
 FUNC_0(VAR_6 != VAR_4->bd_disk->private_data);

 if ((VAR_7 = FUNC_6(&VAR_6->open_mutex)))
  goto out;

 if (FUNC_8(VAR_2, &VAR_6->flags)) {
  FUNC_7(&VAR_6->open_mutex);
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = 0;
 FUNC_1(&VAR_6->openers);
 FUNC_7(&VAR_6->open_mutex);

 FUNC_2(VAR_4);
 out:
 if (VAR_7)
  FUNC_5(VAR_6);
 return VAR_7;
}
