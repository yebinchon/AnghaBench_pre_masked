
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_device {int flags; int misc_wait; } ;
struct drbd_backing_dev {int disk_conf; } ;
struct TYPE_2__ {long disk_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (struct drbd_device*,int,int ) ;
 int FUNC_1 (struct drbd_device*,char*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *) ;
 long FUNC_6 (int ,int,long) ;

void FUNC_7(struct drbd_device *VAR_4, struct drbd_backing_dev *VAR_5,
         unsigned int *VAR_6)
{
 long VAR_7;

 FUNC_3();
 VAR_7 = FUNC_2(VAR_5->disk_conf)->disk_timeout;
 FUNC_4();
 VAR_7 = VAR_7 * VAR_2 / 10;
 if (VAR_7 == 0)
  VAR_7 = VAR_3;

 VAR_7 = FUNC_6(VAR_4->misc_wait,
   *VAR_6 || FUNC_5(VAR_1, &VAR_4->flags), VAR_7);
 if (VAR_7 == 0) {
  FUNC_1(VAR_4, "meta-data IO operation timed out\n");
  FUNC_0(VAR_4, 1, VAR_0);
 }
}
