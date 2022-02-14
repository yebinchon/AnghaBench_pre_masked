
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fixed31_32) ;
 int FUNC_2 (struct fixed31_32,int ) ;
 struct fixed31_32 FUNC_3 (struct fixed31_32,long long) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,struct fixed31_32) ;
 int FUNC_6 (int ,int) ;
 struct fixed31_32 VAR_2 ;
 int FUNC_7 (int ) ;
 struct fixed31_32 FUNC_8 (struct fixed31_32,unsigned char) ;
 struct fixed31_32 FUNC_9 (struct fixed31_32,int ) ;
 struct fixed31_32 FUNC_10 (struct fixed31_32) ;

struct fixed31_32 FUNC_11(struct fixed31_32 VAR_3)
{







 if (FUNC_4(
  VAR_1,
  FUNC_1(VAR_3))) {
  int VAR_4 = FUNC_7(
   FUNC_2(
    VAR_3,
    VAR_0));

  struct fixed31_32 VAR_5 = FUNC_9(
   VAR_3,
   FUNC_6(
    VAR_0,
    VAR_4));

  FUNC_0(VAR_4 != 0);

  FUNC_0(FUNC_5(
   FUNC_1(VAR_5),
   VAR_2));

  if (VAR_4 > 0)
   return FUNC_8(
    FUNC_10(VAR_5),
    (unsigned char)VAR_4);
  else
   return FUNC_3(
    FUNC_10(VAR_5),
    1LL << -VAR_4);
 } else if (VAR_3.value != 0)
  return FUNC_10(VAR_3);
 else
  return VAR_2;
}
