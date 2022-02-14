
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_cdev_get_cycle_timer2 {int clk_id; int cycle_timer; int tv_nsec; int tv_sec; } ;
union ioctl_arg {struct fw_cdev_get_cycle_timer2 get_cycle_timer2; } ;
typedef int u32 ;
struct timespec64 {int tv_nsec; int tv_sec; int member_1; int member_0; } ;
struct fw_card {TYPE_2__* driver; } ;
struct client {TYPE_1__* device; } ;
struct TYPE_4__ {int (* read_csr ) (struct fw_card*,int ) ;} ;
struct TYPE_3__ {struct fw_card* card; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (struct timespec64*) ;
 int FUNC_2 (struct timespec64*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct fw_card*,int ) ;

__attribute__((used)) static int FUNC_6(struct client *VAR_2, union ioctl_arg *VAR_3)
{
 struct fw_cdev_get_cycle_timer2 *VAR_4 = &VAR_3->get_cycle_timer2;
 struct fw_card *VAR_5 = VAR_2->device->card;
 struct timespec64 VAR_6 = {0, 0};
 u32 VAR_7;
 int VAR_8 = 0;

 FUNC_3();

 VAR_7 = VAR_5->driver->read_csr(VAR_5, VAR_0);

 switch (VAR_4->clk_id) {
 case 128: FUNC_1(&VAR_6); break;
 case 130: FUNC_2(&VAR_6); break;
 case 129: FUNC_0(&VAR_6); break;
 default:
  VAR_8 = -VAR_1;
 }

 FUNC_4();

 VAR_4->tv_sec = VAR_6.tv_sec;
 VAR_4->tv_nsec = VAR_6.tv_nsec;
 VAR_4->cycle_timer = VAR_7;

 return VAR_8;
}
