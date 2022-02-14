
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int full; } ;
typedef TYPE_1__ fInt ;


 TYPE_1__ FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static fInt FUNC_3(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 bool VAR_5;
 fInt VAR_6;

 VAR_3 = 0;
 VAR_4 = 0;
 VAR_5 = 0;

 if (VAR_1 < 0) {
  VAR_1 = -1*VAR_1;
  VAR_5 = 1;
 }

 if (VAR_2 < 0) {
  VAR_2 = -1*VAR_2;
  VAR_5 = !VAR_5;
 }

 if ((VAR_1 > VAR_0) || VAR_2 > VAR_0) {
  if ((VAR_1/VAR_2) <= VAR_0) {
   while (VAR_1 > VAR_0) {
    VAR_1 = VAR_1 >> 1;
    VAR_3++;
   }

   while (VAR_2 > VAR_0) {
    VAR_2 = VAR_2 >> 1;
    VAR_4++;
   }
  } else {
   VAR_6.full = 0;
   return VAR_6;
  }
 }

 if (VAR_2 == 1)
  return FUNC_0(VAR_1);

 VAR_6 = FUNC_1(FUNC_0(VAR_1 * FUNC_2(-1, VAR_5)), FUNC_0(VAR_2));

 VAR_6.full = VAR_6.full << VAR_3;
 VAR_6.full = VAR_6.full >> VAR_4;

 return VAR_6;
}
