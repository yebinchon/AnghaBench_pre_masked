
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {int value; } ;


 struct fixed31_32 FUNC_0 (struct fixed31_32,int ) ;
 struct fixed31_32 FUNC_1 (struct fixed31_32,int) ;
 int FUNC_2 (struct fixed31_32) ;
 int FUNC_3 (struct fixed31_32,int) ;
 struct fixed31_32 FUNC_4 (struct fixed31_32,struct fixed31_32) ;

__attribute__((used)) static inline void FUNC_5(
  bool VAR_0,
  int VAR_1,
  int VAR_2,
  int VAR_3,
  struct fixed31_32 VAR_4,
  struct fixed31_32 *VAR_5,
  int *VAR_6,
  int *VAR_7)
{
 if (!VAR_0) {

  if ((*VAR_6 + *VAR_7) < VAR_2) {
   int VAR_8 = VAR_2 - *VAR_7 - *VAR_6;
   int VAR_9 = FUNC_2(FUNC_4(*VAR_5, VAR_4));

   VAR_9 = VAR_9 > 0 ? VAR_9 : 0;
   *VAR_7 += VAR_9 < VAR_8 ? VAR_9 : VAR_8;
  }


  if (*VAR_6) {
   int VAR_10;

   *VAR_5 = FUNC_0(*VAR_5, FUNC_3(VAR_4, VAR_1));
   VAR_10 = FUNC_2(*VAR_5) - *VAR_6;
   if (VAR_10 < VAR_3) {
    int VAR_11 = *VAR_6 >= (VAR_3 - VAR_10) ?
       (VAR_3 - VAR_10) : *VAR_6;
    *VAR_6 -= VAR_11;
    *VAR_7 += VAR_11;
    VAR_10 += VAR_11;
   } else if (VAR_10 > VAR_3) {
    *VAR_6 += VAR_10 - VAR_3;
    *VAR_7 -= VAR_10 - VAR_3;
    VAR_10 = VAR_3;
   }
   VAR_5->value &= 0xffffffff;
   *VAR_5 = FUNC_1(*VAR_5, VAR_10);
  }
 } else {

  if (*VAR_6) {
   int VAR_12 = FUNC_2(FUNC_4(*VAR_5, VAR_4));

   VAR_12 = VAR_12 > 0 ? VAR_12 : 0;
   *VAR_7 += VAR_12 < *VAR_6 ? VAR_12 : *VAR_6;
   *VAR_6 -= VAR_12 < *VAR_6 ? VAR_12 : *VAR_6;
  }


  if ((*VAR_6 + *VAR_7) < VAR_2) {
   int VAR_13;
   int VAR_14 = VAR_2 - *VAR_6 - *VAR_7;





   *VAR_5 = FUNC_0(*VAR_5, FUNC_3(VAR_4, VAR_1));




   VAR_13 = FUNC_2(*VAR_5) - VAR_14;
   if (VAR_13 < VAR_3) {
    int VAR_15 = VAR_14 >= (VAR_3 - VAR_13) ?
       (VAR_3 - VAR_13) : VAR_14;
    *VAR_7 += VAR_15;
    VAR_13 += VAR_15;
   } else if (VAR_13 > VAR_3) {
    *VAR_7 += VAR_13 - VAR_3;
    VAR_13 = VAR_3;
   }
   VAR_5->value &= 0xffffffff;
   *VAR_5 = FUNC_1(*VAR_5, VAR_13);
  }
 }
}
