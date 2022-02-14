
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int*) ;
 int* FUNC_5 (int const*,char,size_t) ;
 int* FUNC_6 (int ,int,size_t) ;
 void* FUNC_7 (int const*,size_t) ;
 int FUNC_8 (int ,int ,int,int*,size_t) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(const uint8_t *VAR_5, size_t VAR_6)
{
 uint64_t VAR_7, VAR_8, VAR_9;
 uint8_t *VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 bool VAR_14;
 int VAR_15;


 VAR_5 += 1;
 VAR_6 -= 1;


 VAR_10 = FUNC_5(VAR_5, ',', VAR_6);
 if (VAR_10 == ((void*)0) || VAR_10 == VAR_5) {
  FUNC_9(VAR_1);
  return;
 }
 VAR_8 = FUNC_7(VAR_5, VAR_10 - VAR_5);
 VAR_6 -= (VAR_10 - VAR_5) + 1;
 VAR_5 += (VAR_10 - VAR_5) + 1;


 VAR_11 = FUNC_7(VAR_5, VAR_6);

 VAR_14 = 0;
 while (VAR_11 > 0) {
  VAR_15 = FUNC_4(VAR_3, VAR_8, &VAR_7);
  if (VAR_15 == -1) {
   if (VAR_14)
    FUNC_2();
   else
    FUNC_9(VAR_4);
   return;
  }
  if (VAR_15 == 0) {
   if (VAR_14)
    FUNC_2();
   else
    FUNC_9(VAR_0);
   return;
  }


  VAR_12 = FUNC_3() - VAR_7 % FUNC_3();
  if (VAR_12 > VAR_11)
   VAR_12 = VAR_11;

  VAR_10 = FUNC_6(VAR_2, VAR_7, VAR_12);
  if (VAR_10 != ((void*)0)) {




   if (!VAR_14) {
    FUNC_10();
    VAR_14 = 1;
   }
   while (VAR_12 > 0) {
    FUNC_0(*VAR_10);
    VAR_10++;
    VAR_7++;
    VAR_8++;
    VAR_11--;
    VAR_12--;
   }
  } else {





   while (VAR_12 > 0) {
    if (VAR_7 & 1 || VAR_12 == 1)
     VAR_13 = 1;
    else if (VAR_7 & 2 || VAR_12 == 2)
     VAR_13 = 2;
    else
     VAR_13 = 4;
    VAR_15 = FUNC_8(VAR_2, VAR_3, VAR_7, &VAR_9,
        VAR_13);
    if (VAR_15 == 0) {
     if (!VAR_14) {
      FUNC_10();
      VAR_14 = 1;
     }
     VAR_7 += VAR_13;
     VAR_8 += VAR_13;
     VAR_11 -= VAR_13;
     VAR_12 -= VAR_13;
     while (VAR_13 > 0) {
      FUNC_0(VAR_9);
      VAR_9 >>= 8;
      VAR_13--;
     }
    } else {
     if (VAR_14)
      FUNC_2();
     else
      FUNC_9(VAR_0);
     return;
    }
   }
  }
  FUNC_1(VAR_11 == 0 || VAR_7 % FUNC_3() == 0);
 }
 if (!VAR_14)
  FUNC_10();
 FUNC_2();
}
