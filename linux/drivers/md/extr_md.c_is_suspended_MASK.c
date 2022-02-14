
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {scalar_t__ suspend_lo; scalar_t__ suspend_hi; scalar_t__ suspended; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;

__attribute__((used)) static bool FUNC_2(struct mddev *VAR_1, struct bio *VAR_2)
{
 if (VAR_1->suspended)
  return 1;
 if (FUNC_0(VAR_2) != VAR_0)
  return 0;
 if (VAR_1->suspend_lo >= VAR_1->suspend_hi)
  return 0;
 if (VAR_2->bi_iter.bi_sector >= VAR_1->suspend_hi)
  return 0;
 if (FUNC_1(VAR_2) < VAR_1->suspend_lo)
  return 0;
 return 1;
}
