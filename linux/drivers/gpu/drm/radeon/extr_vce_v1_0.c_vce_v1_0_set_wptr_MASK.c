
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {scalar_t__ idx; int wptr; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct radeon_device *VAR_3,
         struct radeon_ring *VAR_4)
{
 if (VAR_4->idx == VAR_0)
  FUNC_0(VAR_1, VAR_4->wptr);
 else
  FUNC_0(VAR_2, VAR_4->wptr);
}
