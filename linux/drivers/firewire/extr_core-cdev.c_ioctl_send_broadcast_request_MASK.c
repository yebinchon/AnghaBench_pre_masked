
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_cdev_send_request {int tcode; scalar_t__ offset; } ;
union ioctl_arg {struct fw_cdev_send_request send_request; } ;
struct client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct client*,struct fw_cdev_send_request*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct client *VAR_6,
     union ioctl_arg *VAR_7)
{
 struct fw_cdev_send_request *VAR_8 = &VAR_7->send_request;

 switch (VAR_8->tcode) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_3;
 }


 if (VAR_8->offset < VAR_1 + VAR_0)
  return -VAR_2;

 return FUNC_0(VAR_6, VAR_8, VAR_4 | 0x3f, VAR_5);
}
