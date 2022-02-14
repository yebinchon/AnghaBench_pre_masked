
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct htcp {int maxB; int old_maxB; int beta; int modeswitch; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void
FUNC_2(struct htcp *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 if (VAR_2) {
  uint32_t VAR_6 = VAR_3->maxB;
  uint32_t VAR_7 = VAR_3->old_maxB;

  VAR_3->old_maxB = VAR_3->maxB;

  if (!FUNC_1(5 * VAR_6, 4 * VAR_7, 6 * VAR_7)) {
   VAR_3->beta = VAR_1;
   VAR_3->modeswitch = 0;
   return;
  }
 }

 if (VAR_3->modeswitch && VAR_4 > (uint32_t)FUNC_0(10) && VAR_5) {
  VAR_3->beta = (VAR_4 << 7) / VAR_5;
  if (VAR_3->beta < VAR_1)
   VAR_3->beta = VAR_1;
  else if (VAR_3->beta > VAR_0)
   VAR_3->beta = VAR_0;
 } else {
  VAR_3->beta = VAR_1;
  VAR_3->modeswitch = 1;
 }
}
