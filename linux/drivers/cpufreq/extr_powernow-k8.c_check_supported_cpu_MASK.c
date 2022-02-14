
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int*,int*,int*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 int *VAR_15 = VAR_10;

 *VAR_15 = -VAR_8;

 VAR_11 = FUNC_1(VAR_2);

 if ((VAR_11 & VAR_4) == VAR_5) {
  if (((VAR_11 & VAR_3) != VAR_3) ||
      ((VAR_11 & VAR_6) > VAR_7)) {
   FUNC_2("Processor cpuid %x not supported\n", VAR_11);
   return;
  }

  VAR_11 = FUNC_1(VAR_1);
  if (VAR_11 < VAR_0) {
   FUNC_2("No frequency change capabilities detected\n");
   return;
  }

  FUNC_0(VAR_0, &VAR_11, &VAR_12, &VAR_13, &VAR_14);
  if ((VAR_14 & VAR_9)
   != VAR_9) {
   FUNC_2("Power state transitions not supported\n");
   return;
  }
  *VAR_15 = 0;
 }
}
