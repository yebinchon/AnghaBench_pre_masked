
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_engine {int running; int dev; int queue_lock; scalar_t__ busy; int queue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct crypto_engine *VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3 = 500;
 int VAR_4 = 0;

 FUNC_3(&VAR_1->queue_lock, VAR_2);





 while ((FUNC_0(&VAR_1->queue) || VAR_1->busy) && VAR_3--) {
  FUNC_4(&VAR_1->queue_lock, VAR_2);
  FUNC_2(20);
  FUNC_3(&VAR_1->queue_lock, VAR_2);
 }

 if (FUNC_0(&VAR_1->queue) || VAR_1->busy)
  VAR_4 = -VAR_0;
 else
  VAR_1->running = 0;

 FUNC_4(&VAR_1->queue_lock, VAR_2);

 if (VAR_4)
  FUNC_1(VAR_1->dev, "could not stop engine\n");

 return VAR_4;
}
