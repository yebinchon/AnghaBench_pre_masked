
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disk; } ;
struct drbd_device {int this_bdev; TYPE_1__ state; } ;
typedef scalar_t__ sector_t ;


 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drbd_device*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct drbd_device*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct drbd_device *VAR_2, sector_t VAR_3, int VAR_4)
{
 unsigned long VAR_5, VAR_6;
 sector_t VAR_7, VAR_8;

 if (VAR_2->state.disk == VAR_1)
  return 1;
 if (VAR_2->state.disk != VAR_0)
  return 0;
 VAR_7 = VAR_3 + (VAR_4 >> 9) - 1;
 VAR_8 = FUNC_3(VAR_2->this_bdev);
 FUNC_1(VAR_2, VAR_3 < VAR_8);
 FUNC_1(VAR_2, VAR_7 < VAR_8);

 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = FUNC_0(VAR_7);

 return FUNC_2(VAR_2, VAR_5, VAR_6) == 0;
}
