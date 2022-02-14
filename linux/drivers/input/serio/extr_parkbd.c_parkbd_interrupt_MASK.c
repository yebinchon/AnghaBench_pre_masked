
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_8)
{

 if (VAR_7) {

  if (VAR_3 && ((VAR_3 == 11) || FUNC_3(VAR_1, VAR_4 + VAR_0/100))) {
   VAR_3 = 0;
   VAR_2 = 0;
   VAR_7 = 0;
   FUNC_1(3);
   return;
  }

  FUNC_1(((VAR_2 >> VAR_3++) & 1) | 2);

  if (VAR_3 == 11) {
   VAR_3 = 0;
   VAR_2 = 0;
   VAR_7 = 0;
   FUNC_1(3);
  }

 } else {

  if ((VAR_3 == VAR_5 + 10) || FUNC_3(VAR_1, VAR_4 + VAR_0/100)) {
   VAR_3 = 0;
   VAR_2 = 0;
  }

  VAR_2 |= (FUNC_0() >> 1) << VAR_3++;

  if (VAR_3 == VAR_5 + 10)
   FUNC_2(VAR_6, (VAR_2 >> (2 - VAR_5)) & 0xff, 0);
 }

 VAR_4 = VAR_1;
}
