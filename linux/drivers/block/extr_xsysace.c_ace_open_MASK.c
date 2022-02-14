
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_disk; } ;
struct ace_device {int lock; scalar_t__ users; int dev; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct ace_device* private_data; } ;


 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct ace_device *VAR_3 = VAR_1->bd_disk->private_data;
 unsigned long VAR_4;

 FUNC_1(VAR_3->dev, "ace_open() users=%i\n", VAR_3->users + 1);

 FUNC_2(&VAR_0);
 FUNC_4(&VAR_3->lock, VAR_4);
 VAR_3->users++;
 FUNC_5(&VAR_3->lock, VAR_4);

 FUNC_0(VAR_1);
 FUNC_3(&VAR_0);

 return 0;
}
