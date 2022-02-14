
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; scalar_t__ offset; struct fwnet_device* callback_data; int address_callback; } ;
struct fwnet_device {scalar_t__ local_fifo; TYPE_1__ handler; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct fwnet_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->local_fifo != VAR_0)
  return 0;

 VAR_3->handler.length = 4096;
 VAR_3->handler.address_callback = VAR_2;
 VAR_3->handler.callback_data = VAR_3;

 VAR_4 = FUNC_0(&VAR_3->handler,
          &VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->local_fifo = VAR_3->handler.offset;

 return 0;
}
