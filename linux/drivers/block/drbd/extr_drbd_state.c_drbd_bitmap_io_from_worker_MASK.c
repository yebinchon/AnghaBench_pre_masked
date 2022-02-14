
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drbd_device {int suspend_cnt; } ;
typedef enum bm_flag { ____Placeholder_bm_flag } bm_flag ;
struct TYPE_6__ {TYPE_2__* connection; } ;
struct TYPE_4__ {scalar_t__ task; } ;
struct TYPE_5__ {TYPE_1__ worker; } ;


 int FUNC_0 (struct drbd_device*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct drbd_device*,char*,int) ;
 int FUNC_3 (struct drbd_device*) ;
 int FUNC_4 (struct drbd_device*) ;
 TYPE_3__* FUNC_5 (struct drbd_device*) ;

int FUNC_6(struct drbd_device *VAR_1,
  int (*VAR_2)(struct drbd_device *),
  char *VAR_3, enum bm_flag VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_1, VAR_0 == FUNC_5(VAR_1)->connection->worker.task);


 FUNC_1(&VAR_1->suspend_cnt);

 FUNC_2(VAR_1, VAR_3, VAR_4);
 VAR_5 = VAR_2(VAR_1);
 FUNC_3(VAR_1);

 FUNC_4(VAR_1);

 return VAR_5;
}
