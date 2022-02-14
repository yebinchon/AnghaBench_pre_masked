
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fw_cdev_allocate {int handle; scalar_t__ offset; int closure; scalar_t__ length; scalar_t__ region_end; } ;
union ioctl_arg {struct fw_cdev_allocate allocate; } ;
struct fw_address_region {scalar_t__ end; scalar_t__ start; } ;
struct client {scalar_t__ version; } ;
struct TYPE_4__ {int handle; int (* release ) (struct client*,TYPE_1__*) ;} ;
struct TYPE_5__ {scalar_t__ offset; struct address_handler_resource* callback_data; int address_callback; scalar_t__ length; } ;
struct address_handler_resource {TYPE_1__ resource; TYPE_2__ handler; struct client* client; int closure; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct client*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*,struct fw_address_region*) ;
 int VAR_3 ;
 int FUNC_2 (struct address_handler_resource*) ;
 struct address_handler_resource* FUNC_3 (int,int ) ;
 int FUNC_4 (struct client*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct client *VAR_4, union ioctl_arg *VAR_5)
{
 struct fw_cdev_allocate *VAR_6 = &VAR_5->allocate;
 struct address_handler_resource *VAR_7;
 struct fw_address_region VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_8.start = VAR_6->offset;
 if (VAR_4->version < VAR_1)
  VAR_8.end = VAR_6->offset + VAR_6->length;
 else
  VAR_8.end = VAR_6->region_end;

 VAR_7->handler.length = VAR_6->length;
 VAR_7->handler.address_callback = VAR_3;
 VAR_7->handler.callback_data = VAR_7;
 VAR_7->closure = VAR_6->closure;
 VAR_7->client = VAR_4;

 VAR_9 = FUNC_1(&VAR_7->handler, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7);
  return VAR_9;
 }
 VAR_6->offset = VAR_7->handler.offset;

 VAR_7->resource.release = FUNC_4;
 VAR_9 = FUNC_0(VAR_4, &VAR_7->resource, VAR_2);
 if (VAR_9 < 0) {
  FUNC_4(VAR_4, &VAR_7->resource);
  return VAR_9;
 }
 VAR_6->handle = VAR_7->resource.handle;

 return 0;
}
