
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long* FUNC_3 (int ,int) ;
 int FUNC_4 (int,unsigned long*) ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 int VAR_8 = FUNC_5();
 unsigned long *VAR_9 = FUNC_3(VAR_7, VAR_8);
 int VAR_10 = FUNC_1(VAR_2);
 int VAR_11, VAR_12;

 VAR_11 = VAR_1 + VAR_10;
 FUNC_4(VAR_11, VAR_9);
 FUNC_0(VAR_11);

 VAR_12 = VAR_0 + VAR_10;
 FUNC_4(VAR_12, VAR_9);
 FUNC_0(VAR_12);

 if (VAR_10 == 0) {
  FUNC_2(VAR_3, VAR_9[0]);
  FUNC_2(VAR_5, VAR_9[1]);
 } else {
  FUNC_2(VAR_4, VAR_9[0]);
  FUNC_2(VAR_6, VAR_9[1]);
 }
}
