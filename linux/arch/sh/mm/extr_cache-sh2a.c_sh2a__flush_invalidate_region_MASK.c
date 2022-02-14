
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(void *VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_9 = (unsigned long)VAR_6 & ~(VAR_2-1);
 VAR_10 = ((unsigned long)VAR_6 + VAR_7 + VAR_2-1)
  & ~(VAR_2-1);

 FUNC_5(VAR_11);
 FUNC_3();


 if (((VAR_10 - VAR_9) >> VAR_4) >= VAR_3) {
  FUNC_1(FUNC_0(VAR_5) | VAR_1,
        VAR_5);
 } else {
  for (VAR_8 = VAR_9; VAR_8 < VAR_10; VAR_8 += VAR_2)
   FUNC_6(VAR_0, VAR_8);
 }

 FUNC_2();
 FUNC_4(VAR_11);
}
