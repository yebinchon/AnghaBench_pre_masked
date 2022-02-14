
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chd {int loss_compete; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 () ;

__attribute__((used)) static __inline int
FUNC_1(int VAR_5, int VAR_6, struct chd *VAR_7)
{
 unsigned long VAR_8, VAR_9;

 VAR_9 = FUNC_0();

 if (VAR_5 < VAR_4) {
  VAR_7->loss_compete = 0;
  VAR_8 = (((VAR_0 / 100) * VAR_2) /
      (VAR_4 - VAR_3)) *
      (VAR_5 - VAR_3);
 } else {
  if (VAR_5 > VAR_4) {
   VAR_8 = (((VAR_0 / 100) * VAR_2) /
       (VAR_6 - VAR_4)) *
       (VAR_6 - VAR_5);
   if (VAR_1 && VAR_9 < VAR_8)
    VAR_7->loss_compete = 1;
  } else {
   VAR_8 = (VAR_0 / 100) * VAR_2;
   VAR_7->loss_compete = 0;
  }
 }

 return (VAR_9 < VAR_8);
}
