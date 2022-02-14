
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 unsigned long VAR_10 ;
 int FUNC_5 (int ,short*,int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(void *VAR_11, int VAR_12)
{
 short *VAR_13 = VAR_11;
 unsigned long VAR_14;


 FUNC_0(0x08, VAR_0);

 FUNC_0(VAR_12 & 0xFF, VAR_2);
 FUNC_0((VAR_12 >> 8) & 0xFF, VAR_1);

 FUNC_0(0, VAR_7);
 FUNC_0(0, VAR_8);
 FUNC_0(0, VAR_6);

 if (!FUNC_4()) {
  FUNC_3(((void*)0));
  return;
 }
 VAR_14 = VAR_10 + VAR_5;
 FUNC_0(VAR_3, VAR_9);
 while (!FUNC_2() && FUNC_6(VAR_10, VAR_14))
  FUNC_1();
 if (!FUNC_6(VAR_10, VAR_14 + 1)) {
  FUNC_3(((void*)0));
  return;
 }
 FUNC_5(VAR_4, VAR_13, 6);
}
