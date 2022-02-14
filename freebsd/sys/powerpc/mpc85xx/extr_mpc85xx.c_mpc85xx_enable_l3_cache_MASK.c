
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__,char*) ;

void
FUNC_7(void)
{
 uint32_t VAR_12, VAR_13, VAR_14;


 VAR_14 = FUNC_1(FUNC_5(VAR_4));
 if (VAR_14 == VAR_5 || VAR_14 == VAR_6 || VAR_14 == VAR_7 ||
     VAR_14 == VAR_8 || VAR_14 == VAR_9 || VAR_14 == VAR_10) {
  VAR_12 = FUNC_2(VAR_1);
  if ((VAR_12 & VAR_2) == 0) {
   FUNC_4();
   FUNC_3();
  }

  VAR_12 = FUNC_2(VAR_1);
  if ((VAR_11 & VAR_3) != 0 ||
      (VAR_12 & VAR_2) == 0) {
   VAR_13 = FUNC_0(FUNC_2(VAR_0));
   FUNC_6("L3 Corenet Platform Cache: %d KB %sabled\n",
       VAR_13, (VAR_12 & VAR_2) == 0 ?
       "dis" : "en");
  }
 }
}
