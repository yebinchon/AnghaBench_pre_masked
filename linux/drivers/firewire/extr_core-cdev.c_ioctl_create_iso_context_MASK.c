
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_cdev_create_iso_context {int type; int channel; int header_size; scalar_t__ handle; int closure; int speed; } ;
union ioctl_arg {struct fw_cdev_create_iso_context create_iso_context; } ;
struct fw_iso_context {int drop_overflow_headers; } ;
struct client {scalar_t__ version; int buffer_is_mapped; int lock; struct fw_iso_context* iso_context; int iso_closure; TYPE_1__* device; int buffer; } ;
typedef int fw_iso_callback_t ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;



 scalar_t__ FUNC_1 (struct fw_iso_context*) ;
 int FUNC_2 (struct fw_iso_context*) ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ) ;
 struct fw_iso_context* FUNC_4 (int ,int,int,int ,int,int ,struct client*) ;
 int FUNC_5 (struct fw_iso_context*) ;
 int VAR_7 ;
 int FUNC_6 (struct fw_iso_context*) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct client *VAR_9, union ioctl_arg *VAR_10)
{
 struct fw_cdev_create_iso_context *VAR_11 = &VAR_10->create_iso_context;
 struct fw_iso_context *VAR_12;
 fw_iso_callback_t VAR_13;
 int VAR_14;

 FUNC_0(VAR_4 != 128 ||
       VAR_2 != 130 ||
       VAR_3 !=
     129);

 switch (VAR_11->type) {
 case 128:
  if (VAR_11->speed > VAR_6 || VAR_11->channel > 63)
   return -VAR_1;

  VAR_13 = VAR_7;
  break;

 case 130:
  if (VAR_11->header_size < 4 || (VAR_11->header_size & 3) ||
      VAR_11->channel > 63)
   return -VAR_1;

  VAR_13 = VAR_7;
  break;

 case 129:
  VAR_13 = (fw_iso_callback_t)VAR_8;
  break;

 default:
  return -VAR_1;
 }

 VAR_12 = FUNC_4(VAR_9->device->card, VAR_11->type,
   VAR_11->channel, VAR_11->speed, VAR_11->header_size, VAR_13, VAR_9);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);
 if (VAR_9->version < VAR_5)
  VAR_12->drop_overflow_headers = 1;


 FUNC_7(&VAR_9->lock);
 if (VAR_9->iso_context != ((void*)0)) {
  FUNC_8(&VAR_9->lock);
  FUNC_5(VAR_12);

  return -VAR_0;
 }
 if (!VAR_9->buffer_is_mapped) {
  VAR_14 = FUNC_3(&VAR_9->buffer,
         VAR_9->device->card,
         FUNC_6(VAR_12));
  if (VAR_14 < 0) {
   FUNC_8(&VAR_9->lock);
   FUNC_5(VAR_12);

   return VAR_14;
  }
  VAR_9->buffer_is_mapped = 1;
 }
 VAR_9->iso_closure = VAR_11->closure;
 VAR_9->iso_context = VAR_12;
 FUNC_8(&VAR_9->lock);

 VAR_11->handle = 0;

 return 0;
}
