
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_16;

 VAR_10 = 4;
 VAR_13 = VAR_4;
 VAR_16 = (VAR_12 == VAR_7 ||
        VAR_12 == VAR_5);

 if ((VAR_16 || VAR_12 == VAR_8) &&
     FUNC_1(VAR_0, VAR_9, &VAR_10) == 0) {
  VAR_11 = VAR_8;
  if (VAR_15)
   FUNC_2("using sysctl for AC line status");
 } else {
  FUNC_2("unable to determine AC line status");
  VAR_11 = VAR_7;
 }
}
