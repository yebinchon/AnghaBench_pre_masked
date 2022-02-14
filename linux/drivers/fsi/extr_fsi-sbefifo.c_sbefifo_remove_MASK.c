
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int devt; } ;
struct sbefifo {int dead; TYPE_1__ dev; int cdev; int lock; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (struct device*,char*) ;
 struct sbefifo* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1)
{
 struct sbefifo *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, "Removing sbefifo device...\n");

 FUNC_5(&VAR_2->lock);
 VAR_2->dead = 1;
 FUNC_6(&VAR_2->lock);

 FUNC_0(&VAR_2->cdev, &VAR_2->dev);
 FUNC_4(VAR_2->dev.devt);
 FUNC_3(VAR_1, ((void*)0), VAR_0);
 FUNC_7(&VAR_2->dev);

 return 0;
}
