
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (scalar_t__) ;
 struct fixed31_32 FUNC_2 (struct fixed31_32,int ) ;
 int FUNC_3 (struct fixed31_32,int ) ;
 int FUNC_4 (struct fixed31_32) ;
 struct fixed31_32 FUNC_5 (struct fixed31_32) ;
 struct fixed31_32 VAR_0 ;
 struct fixed31_32 FUNC_6 (struct fixed31_32,struct fixed31_32) ;

struct fixed31_32 FUNC_7(struct fixed31_32 VAR_1)
{
 struct fixed31_32 VAR_2 = FUNC_5(VAR_0);


 struct fixed31_32 VAR_3;

 FUNC_0(VAR_1.value > 0);



 do {
  struct fixed31_32 VAR_4 = FUNC_2(
   FUNC_6(
    VAR_2,
    VAR_0),
   FUNC_3(
    VAR_1,
    FUNC_4(VAR_2)));

  VAR_3 = FUNC_6(
   VAR_2,
   VAR_4);

  VAR_2 = VAR_4;

 } while (FUNC_1(VAR_3.value) > 100ULL);

 return VAR_2;
}
