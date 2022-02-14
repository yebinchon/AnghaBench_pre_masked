
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int event_free; int event_spinlock; int event_bitmap; int * event; int dev; } ;
struct etnaviv_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct etnaviv_gpu *VAR_2, unsigned VAR_3,
 unsigned int *VAR_4)
{
 unsigned long VAR_5 = FUNC_4(10 * 10000);
 unsigned VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  unsigned long VAR_8;

  VAR_8 = FUNC_8(&VAR_2->event_free, VAR_5);

  if (!VAR_8) {
   FUNC_1(VAR_2->dev, "wait_for_completion_timeout failed");
   goto out;
  }

  VAR_7++;
  VAR_5 = VAR_8;
 }

 FUNC_6(&VAR_2->event_spinlock);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  int VAR_9 = FUNC_2(VAR_2->event_bitmap, VAR_1);

  VAR_4[VAR_6] = VAR_9;
  FUNC_3(&VAR_2->event[VAR_9], 0, sizeof(struct etnaviv_event));
  FUNC_5(VAR_9, VAR_2->event_bitmap);
 }

 FUNC_7(&VAR_2->event_spinlock);

 return 0;

out:
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_0(&VAR_2->event_free);

 return -VAR_0;
}
