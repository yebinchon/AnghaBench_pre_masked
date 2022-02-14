
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct push_buffer {int dummy; } ;
struct host1x_cdma {scalar_t__ event; int lock; int complete; struct push_buffer push_buffer; } ;
struct host1x {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct host1x_cdma*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct host1x*,struct host1x_cdma*) ;
 unsigned int FUNC_3 (struct push_buffer*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct host1x *VAR_2,
          struct host1x_cdma *VAR_3,
          unsigned int VAR_4)
{
 while (1) {
  struct push_buffer *VAR_5 = &VAR_3->push_buffer;
  unsigned int VAR_6;

  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 >= VAR_4)
   break;

  FUNC_7(FUNC_1(FUNC_0(VAR_3)->dev),
           VAR_1);

  FUNC_2(VAR_2, VAR_3);


  if (VAR_3->event != VAR_0) {
   FUNC_5(&VAR_3->lock);
   FUNC_6();
   FUNC_4(&VAR_3->lock);
   continue;
  }

  VAR_3->event = VAR_1;

  FUNC_5(&VAR_3->lock);
  FUNC_8(&VAR_3->complete);
  FUNC_4(&VAR_3->lock);
 }

 return 0;
}
