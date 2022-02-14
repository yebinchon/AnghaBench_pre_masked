
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long sp_space_high; unsigned long sp_space_used_highest; unsigned long sp_space_low; scalar_t__ sp_space_throttled; int sp_space_throttle_count; int sp_space_used; } ;
typedef TYPE_1__ SVCPOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long FUNC_0 (int *,long) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(SVCPOOL *VAR_2, long VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(&VAR_2->sp_space_used, VAR_3) + VAR_3;
 if (VAR_3 > 0) {
  if (VAR_4 >= VAR_2->sp_space_high && !VAR_2->sp_space_throttled) {
   VAR_2->sp_space_throttled = VAR_1;
   VAR_2->sp_space_throttle_count++;
  }
  if (VAR_4 > VAR_2->sp_space_used_highest)
   VAR_2->sp_space_used_highest = VAR_4;
 } else {
  if (VAR_4 < VAR_2->sp_space_low && VAR_2->sp_space_throttled) {
   VAR_2->sp_space_throttled = VAR_0;
   FUNC_1(VAR_2);
  }
 }
}
