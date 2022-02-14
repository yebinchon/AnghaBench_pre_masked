
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {unsigned long num_doorbells; int used; } ;
struct radeon_device {TYPE_1__ doorbell; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ,unsigned long) ;

int FUNC_2(struct radeon_device *VAR_1, u32 *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_1->doorbell.used, VAR_1->doorbell.num_doorbells);
 if (VAR_3 < VAR_1->doorbell.num_doorbells) {
  FUNC_0(VAR_3, VAR_1->doorbell.used);
  *VAR_2 = VAR_3;
  return 0;
 } else {
  return -VAR_0;
 }
}
