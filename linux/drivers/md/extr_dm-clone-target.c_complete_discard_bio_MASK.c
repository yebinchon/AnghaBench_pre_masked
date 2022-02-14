
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {unsigned long region_shift; int flags; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct clone*,struct bio*,unsigned long*,unsigned long*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct clone*,struct bio*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct bio*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct clone *VAR_1, struct bio *VAR_2, bool VAR_3)
{
 unsigned long VAR_4, VAR_5;






 if (FUNC_4(VAR_0, &VAR_1->flags) && VAR_3) {
  FUNC_3(VAR_1, VAR_2);
  FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_5);
  FUNC_5(VAR_2, VAR_4 << VAR_1->region_shift,
    (VAR_5 - VAR_4) << VAR_1->region_shift);
  FUNC_2(VAR_2);
 } else
  FUNC_0(VAR_2);
}
