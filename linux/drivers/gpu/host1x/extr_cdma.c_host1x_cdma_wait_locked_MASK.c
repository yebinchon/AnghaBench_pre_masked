
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct push_buffer {int dummy; } ;
struct host1x_cdma {int event; int lock; int complete; int sync_queue; struct push_buffer push_buffer; } ;
typedef enum cdma_event { ____Placeholder_cdma_event } cdma_event ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct host1x_cdma*) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct push_buffer*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;

unsigned int FUNC_10(struct host1x_cdma *VAR_2,
         enum cdma_event VAR_3)
{
 for (;;) {
  struct push_buffer *VAR_4 = &VAR_2->push_buffer;
  unsigned int VAR_5;

  switch (VAR_3) {
  case 128:
   VAR_5 = FUNC_4(&VAR_2->sync_queue) ? 1 : 0;
   break;

  case 129:
   VAR_5 = FUNC_3(VAR_4);
   break;

  default:
   FUNC_0(1);
   return -VAR_1;
  }

  if (VAR_5)
   return VAR_5;

  FUNC_8(FUNC_2(FUNC_1(VAR_2)->dev),
           VAR_3);


  if (VAR_2->event != VAR_0) {
   FUNC_6(&VAR_2->lock);
   FUNC_7();
   FUNC_5(&VAR_2->lock);
   continue;
  }

  VAR_2->event = VAR_3;

  FUNC_6(&VAR_2->lock);
  FUNC_9(&VAR_2->complete);
  FUNC_5(&VAR_2->lock);
 }

 return 0;
}
