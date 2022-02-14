
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {int dummy; } ;


 int FUNC_0 (struct fixed31_32,struct fixed31_32*) ;
 int FUNC_1 (struct fixed31_32,struct fixed31_32*) ;
 struct fixed31_32 FUNC_2 (struct fixed31_32,struct fixed31_32) ;
 struct fixed31_32 FUNC_3 (struct fixed31_32,struct fixed31_32) ;
 scalar_t__ FUNC_4 (struct fixed31_32,struct fixed31_32) ;
 struct fixed31_32 FUNC_5 (int,int) ;
 struct fixed31_32 FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct fixed31_32,struct fixed31_32) ;
 scalar_t__ FUNC_8 (struct fixed31_32,struct fixed31_32) ;
 struct fixed31_32 FUNC_9 (struct fixed31_32,struct fixed31_32) ;
 struct fixed31_32 VAR_0 ;
 struct fixed31_32 FUNC_10 (struct fixed31_32,struct fixed31_32) ;
 struct fixed31_32 VAR_1 ;

__attribute__((used)) static void FUNC_11(struct fixed31_32 VAR_2,
    struct fixed31_32 VAR_3,
    struct fixed31_32 VAR_4,
    struct fixed31_32 VAR_5,
    struct fixed31_32 *VAR_6)
{
 struct fixed31_32 VAR_7;
 struct fixed31_32 VAR_8;
 struct fixed31_32 VAR_9;
 struct fixed31_32 VAR_10;
 struct fixed31_32 VAR_11;
 struct fixed31_32 VAR_12;
 struct fixed31_32 VAR_13;
 struct fixed31_32 VAR_14;
 struct fixed31_32 VAR_15;
 struct fixed31_32 VAR_16;
 struct fixed31_32 VAR_17;
 struct fixed31_32 VAR_18;
 struct fixed31_32 VAR_19;
 struct fixed31_32 VAR_20;
 struct fixed31_32 VAR_21 = FUNC_5(15, 10);
 struct fixed31_32 VAR_22 = FUNC_5(5, 10);
 struct fixed31_32 VAR_23 = FUNC_5(1, 1000000);

 if (FUNC_4(VAR_5, VAR_1)) {
  *VAR_6 = VAR_1;
  return;
 }

 FUNC_1(VAR_2, &VAR_11);
 FUNC_1(FUNC_3(VAR_4, VAR_5), &VAR_7);
 FUNC_1(FUNC_3(VAR_3, VAR_5), &VAR_8);
 FUNC_1(VAR_0, &VAR_9);
 VAR_21 = FUNC_3(FUNC_2(VAR_0, VAR_22), VAR_9);
 VAR_10 = FUNC_10(FUNC_9(VAR_21, VAR_8), VAR_22);

 if (FUNC_8(VAR_11, VAR_10))
  VAR_12 = VAR_11;
 else if (FUNC_7(VAR_10, VAR_11) && FUNC_7(VAR_11, VAR_0)) {
  if (FUNC_8(VAR_23, FUNC_10(VAR_0, VAR_10)))

   VAR_14 = FUNC_3(FUNC_10(VAR_11, VAR_10),
     FUNC_10(VAR_0, VAR_10));
  else
   VAR_14 = VAR_1;

  VAR_17 = FUNC_6(2);
  VAR_18 = FUNC_6(3);

  VAR_15 = FUNC_9(VAR_14, VAR_14);
  VAR_16 = FUNC_9(VAR_15, VAR_14);
  VAR_19 = FUNC_9(VAR_17, VAR_16);
  VAR_20 = FUNC_9(VAR_18, VAR_15);


  VAR_12 = FUNC_9(VAR_10, FUNC_2(VAR_0,
    FUNC_10(VAR_19, VAR_20)));


  VAR_12 = FUNC_2(VAR_12, FUNC_9(VAR_8,
    FUNC_10(VAR_20, VAR_19)));

  VAR_19 = FUNC_9(VAR_17, VAR_15);
  VAR_20 = FUNC_10(VAR_0, VAR_10);


  VAR_12 = FUNC_2(VAR_12, FUNC_9(VAR_20,
    FUNC_2(VAR_14, FUNC_10(VAR_16, VAR_19))));
 } else
  VAR_12 = VAR_0;

 VAR_19 = FUNC_10(VAR_0, VAR_12);
 VAR_20 = FUNC_9(VAR_19, VAR_19);
 VAR_20 = FUNC_9(VAR_20, VAR_20);


 VAR_13 = FUNC_2(VAR_12, FUNC_9(VAR_7, VAR_20));
 FUNC_0(VAR_13, VAR_6);

 *VAR_6 = FUNC_3(*VAR_6, FUNC_3(VAR_3, VAR_5));
}
