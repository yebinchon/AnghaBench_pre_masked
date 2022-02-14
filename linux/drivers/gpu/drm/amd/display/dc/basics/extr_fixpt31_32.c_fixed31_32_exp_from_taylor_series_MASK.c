
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {int dummy; } ;


 int FUNC_0 (int ) ;
 struct fixed31_32 FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned int) ;
 struct fixed31_32 FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct fixed31_32,int ) ;
 int FUNC_5 (struct fixed31_32,struct fixed31_32) ;
 int VAR_0 ;

__attribute__((used)) static struct fixed31_32 FUNC_6(struct fixed31_32 VAR_1)
{
 unsigned int VAR_2 = 9;

 struct fixed31_32 VAR_3 = FUNC_3(
  VAR_2 + 2,
  VAR_2 + 1);


 FUNC_0(FUNC_4(VAR_1, VAR_0));

 do
  VAR_3 = FUNC_1(
   VAR_0,
   FUNC_2(
    FUNC_5(
     VAR_1,
     VAR_3),
    VAR_2));
 while (--VAR_2 != 1);

 return FUNC_1(
  VAR_0,
  FUNC_5(
   VAR_1,
   VAR_3));
}
