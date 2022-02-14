
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {scalar_t__ idx; int wptr; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct radeon_device *VAR_5,
    struct radeon_ring *VAR_6)
{
 if (VAR_6->idx == VAR_4) {
  FUNC_1(VAR_1, VAR_6->wptr);
  (void)FUNC_0(VAR_1);
 } else if (VAR_6->idx == VAR_0) {
  FUNC_1(VAR_2, VAR_6->wptr);
  (void)FUNC_0(VAR_2);
 } else {
  FUNC_1(VAR_3, VAR_6->wptr);
  (void)FUNC_0(VAR_3);
 }
}
