
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int base; } ;
struct TYPE_5__ {int base; } ;
struct TYPE_4__ {int drivers; int lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(void)
{
 int VAR_9;

 if (FUNC_1(&VAR_8.lock) < 0)
  return -1;

 if ((VAR_9 = FUNC_3(&VAR_8.drivers, 3,
  VAR_4)) < 0)
  goto done;

 if ((VAR_9 = FUNC_4(
   VAR_6, &VAR_1.base)) < 0 ||
  (VAR_9 = FUNC_4(
   VAR_7, &VAR_2.base)) < 0 ||
  (VAR_9 = FUNC_4(
   VAR_5, &VAR_0)) < 0)
  goto done;

 FUNC_0(VAR_3);

done:
 if (VAR_9 < 0)
  FUNC_2(&VAR_8.drivers);

 return VAR_9;
}
