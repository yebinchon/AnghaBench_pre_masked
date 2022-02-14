
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_cdev_get_cycle_timer {int local_time; int cycle_timer; } ;
union ioctl_arg {struct fw_cdev_get_cycle_timer get_cycle_timer; } ;
struct fw_cdev_get_cycle_timer2 {int tv_sec; int tv_nsec; int cycle_timer; int clk_id; } ;
struct client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct client*,union ioctl_arg*) ;

__attribute__((used)) static int FUNC_1(struct client *VAR_3, union ioctl_arg *VAR_4)
{
 struct fw_cdev_get_cycle_timer *VAR_5 = &VAR_4->get_cycle_timer;
 struct fw_cdev_get_cycle_timer2 VAR_6;

 VAR_6 = VAR_0;
 FUNC_0(VAR_3, (union ioctl_arg *)&VAR_6);

 VAR_5->local_time = VAR_6 * VAR_2 + VAR_6 / VAR_1;
 VAR_5->cycle_timer = VAR_6;

 return 0;
}
