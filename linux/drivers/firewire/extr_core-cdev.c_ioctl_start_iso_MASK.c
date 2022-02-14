
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_cdev_start_iso {scalar_t__ handle; int tags; int sync; int cycle; } ;
union ioctl_arg {struct fw_cdev_start_iso start_iso; } ;
struct client {TYPE_1__* iso_context; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct client *VAR_12, union ioctl_arg *VAR_13)
{
 struct fw_cdev_start_iso *VAR_14 = &VAR_13->start_iso;

 FUNC_0(
     VAR_2 != VAR_7 ||
     VAR_3 != VAR_8 ||
     VAR_4 != VAR_9 ||
     VAR_5 != VAR_10 ||
     VAR_1 != VAR_6);

 if (VAR_12->iso_context == ((void*)0) || VAR_14->handle != 0)
  return -VAR_0;

 if (VAR_12->iso_context->type == VAR_11 &&
     (VAR_14->tags == 0 || VAR_14->tags > 15 || VAR_14->sync > 15))
  return -VAR_0;

 return FUNC_1(VAR_12->iso_context,
        VAR_14->cycle, VAR_14->sync, VAR_14->tags);
}
