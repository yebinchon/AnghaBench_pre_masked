
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10conf {int wait_barrier; int device_lock; int nr_queued; int retry_list; } ;
struct r10bio {int retry_list; struct mddev* mddev; } ;
struct mddev {int thread; struct r10conf* private; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct r10bio *VAR_0)
{
 unsigned long VAR_1;
 struct mddev *VAR_2 = VAR_0->mddev;
 struct r10conf *VAR_3 = VAR_2->private;

 FUNC_2(&VAR_3->device_lock, VAR_1);
 FUNC_0(&VAR_0->retry_list, &VAR_3->retry_list);
 VAR_3->nr_queued ++;
 FUNC_3(&VAR_3->device_lock, VAR_1);


 FUNC_4(&VAR_3->wait_barrier);

 FUNC_1(VAR_2->thread);
}
