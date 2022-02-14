
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (scalar_t__) ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_11(void)
{
 unsigned int VAR_15 = VAR_9;
 unsigned int VAR_16;

 if (!VAR_14) {
  FUNC_0("wf: creating control loops !\n");
  FUNC_7();
  FUNC_8();
  FUNC_6();
  VAR_14 = 1;
 }


 if (VAR_12 && --VAR_12)
  return;

 VAR_9 = 0;
 if (VAR_8)
  FUNC_9(VAR_8);
 if (VAR_13)
  FUNC_10(VAR_13);
 if (VAR_7)
  FUNC_5(VAR_7);

 VAR_11 = 0;
 VAR_16 = VAR_9 & ~VAR_15;




 if (VAR_9 && !VAR_15) {
  if (VAR_1)
   FUNC_2(VAR_1);
  if (VAR_2)
   FUNC_2(VAR_2);
  if (VAR_3)
   FUNC_2(VAR_3);
  if (VAR_4)
   FUNC_2(VAR_4);
  if (VAR_5)
   FUNC_2(VAR_5);
  if (VAR_6)
   FUNC_2(VAR_6);
 }




 if (!VAR_9 && VAR_15) {
  if (VAR_1)
   FUNC_3(VAR_1);
  VAR_11 = 1;
 }




 if (VAR_16 & VAR_0) {
  FUNC_4();
  VAR_12 = 2;
  VAR_10 = 1;
 }







 if (!VAR_9 && VAR_10) {
  FUNC_1();
  VAR_10 = 0;
 }
}
