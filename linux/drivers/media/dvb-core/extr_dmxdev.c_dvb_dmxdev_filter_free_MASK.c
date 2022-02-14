
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; int * data; } ;
struct dmxdev_filter {int mutex; TYPE_1__ buffer; int vb2_ctx; } ;
struct dmxdev {int mutex; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmxdev_filter*) ;
 int FUNC_1 (struct dmxdev_filter*,int ) ;
 int FUNC_2 (struct dmxdev_filter*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct dmxdev *VAR_1,
      struct dmxdev_filter *VAR_2)
{
 FUNC_6(&VAR_1->mutex);
 FUNC_6(&VAR_2->mutex);
 if (FUNC_3(&VAR_2->vb2_ctx))
  FUNC_5(&VAR_2->vb2_ctx);
 FUNC_4(&VAR_2->vb2_ctx);


 FUNC_2(VAR_2);
 FUNC_0(VAR_2);

 if (VAR_2->buffer.data) {
  void *VAR_3 = VAR_2->buffer.data;

  FUNC_8(&VAR_1->lock);
  VAR_2->buffer.data = ((void*)0);
  FUNC_9(&VAR_1->lock);
  FUNC_10(VAR_3);
 }

 FUNC_1(VAR_2, VAR_0);
 FUNC_11(&VAR_2->buffer.queue);
 FUNC_7(&VAR_2->mutex);
 FUNC_7(&VAR_1->mutex);
 return 0;
}
