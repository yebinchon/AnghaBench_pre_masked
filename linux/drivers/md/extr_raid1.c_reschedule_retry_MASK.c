
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int wait_barrier; int device_lock; int * nr_queued; int retry_list; } ;
struct r1bio {int retry_list; int sector; struct mddev* mddev; } ;
struct mddev {int thread; struct r1conf* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct r1bio *VAR_0)
{
 unsigned long VAR_1;
 struct mddev *VAR_2 = VAR_0->mddev;
 struct r1conf *VAR_3 = VAR_2->private;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0->sector);
 FUNC_4(&VAR_3->device_lock, VAR_1);
 FUNC_1(&VAR_0->retry_list, &VAR_3->retry_list);
 FUNC_0(&VAR_3->nr_queued[VAR_4]);
 FUNC_5(&VAR_3->device_lock, VAR_1);

 FUNC_6(&VAR_3->wait_barrier);
 FUNC_2(VAR_2->thread);
}
