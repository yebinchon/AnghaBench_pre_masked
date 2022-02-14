
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_cdev_stop_iso {scalar_t__ handle; } ;
union ioctl_arg {struct fw_cdev_stop_iso stop_iso; } ;
struct client {int * iso_context; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct client *VAR_1, union ioctl_arg *VAR_2)
{
 struct fw_cdev_stop_iso *VAR_3 = &VAR_2->stop_iso;

 if (VAR_1->iso_context == ((void*)0) || VAR_3->handle != 0)
  return -VAR_0;

 return FUNC_0(VAR_1->iso_context);
}
