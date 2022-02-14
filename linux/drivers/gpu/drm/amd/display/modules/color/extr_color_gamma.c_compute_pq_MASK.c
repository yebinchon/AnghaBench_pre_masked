
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {int dummy; } ;


 int FUNC_0 (struct fixed31_32 const,int ) ;
 struct fixed31_32 FUNC_1 (int ,int ) ;
 struct fixed31_32 FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct fixed31_32,struct fixed31_32) ;
 int FUNC_4 (struct fixed31_32 const,struct fixed31_32) ;
 struct fixed31_32 const VAR_0 ;
 struct fixed31_32 FUNC_5 (struct fixed31_32,struct fixed31_32 const) ;
 struct fixed31_32 VAR_1 ;

__attribute__((used)) static void FUNC_6(struct fixed31_32 VAR_2, struct fixed31_32 *VAR_3)
{

 const struct fixed31_32 VAR_4 =
  FUNC_2(159301758, 1000000000);
 const struct fixed31_32 VAR_5 =
  FUNC_2(7884375, 100000);
 const struct fixed31_32 VAR_6 =
  FUNC_2(8359375, 10000000);
 const struct fixed31_32 VAR_7 =
  FUNC_2(188515625, 10000000);
 const struct fixed31_32 VAR_8 =
  FUNC_2(186875, 10000);

 struct fixed31_32 VAR_9;
 struct fixed31_32 VAR_10;

 if (FUNC_3(VAR_2, VAR_1))
  VAR_2 = VAR_1;

 VAR_9 = FUNC_5(VAR_2, VAR_4);
 VAR_10 = FUNC_1(
   FUNC_0(VAR_6,
     (FUNC_4(VAR_7, VAR_9))),
   FUNC_0(VAR_0,
     (FUNC_4(VAR_8, VAR_9))));
 *VAR_3 = FUNC_5(VAR_10, VAR_5);
}
