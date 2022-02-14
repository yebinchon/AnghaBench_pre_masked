
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fifo_func {scalar_t__ uevent_init; } ;
struct nvkm_fifo {int nr; int kevent; int cevent; int uevent; int engine; int mask; int lock; int chan; struct nvkm_fifo_func const* func; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,struct nvkm_device*,int,int,int *) ;
 int FUNC_4 (int *,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

int
FUNC_6(const struct nvkm_fifo_func *VAR_5, struct nvkm_device *VAR_6,
        int VAR_7, int VAR_8, struct nvkm_fifo *VAR_9)
{
 int VAR_10;

 VAR_9->func = VAR_5;
 FUNC_0(&VAR_9->chan);
 FUNC_5(&VAR_9->lock);

 if (FUNC_1(VAR_9->nr > VAR_0))
  VAR_9->nr = VAR_0;
 else
  VAR_9->nr = VAR_8;
 FUNC_2(VAR_9->mask, 0, VAR_9->nr);

 VAR_10 = FUNC_3(&VAR_1, VAR_6, VAR_7, 1, &VAR_9->engine);
 if (VAR_10)
  return VAR_10;

 if (VAR_5->uevent_init) {
  VAR_10 = FUNC_4(&VAR_4, 1, 1,
          &VAR_9->uevent);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_4(&VAR_2, 1, 1, &VAR_9->cevent);
 if (VAR_10)
  return VAR_10;

 return FUNC_4(&VAR_3, 1, VAR_8, &VAR_9->kevent);
}
