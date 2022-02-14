
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_cdev_set_iso_channels {scalar_t__ handle; int channels; } ;
union ioctl_arg {struct fw_cdev_set_iso_channels set_iso_channels; } ;
struct fw_iso_context {int dummy; } ;
struct client {struct fw_iso_context* iso_context; } ;


 int VAR_0 ;
 int FUNC_0 (struct fw_iso_context*,int *) ;

__attribute__((used)) static int FUNC_1(struct client *VAR_1, union ioctl_arg *VAR_2)
{
 struct fw_cdev_set_iso_channels *VAR_3 = &VAR_2->set_iso_channels;
 struct fw_iso_context *VAR_4 = VAR_1->iso_context;

 if (VAR_4 == ((void*)0) || VAR_3->handle != 0)
  return -VAR_0;

 return FUNC_0(VAR_4, &VAR_3->channels);
}
