
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct fixed31_32 const,struct fixed31_32) ;
 struct fixed31_32 VAR_0 ;
 struct fixed31_32 FUNC_2 (struct fixed31_32) ;
 struct fixed31_32 FUNC_3 (struct fixed31_32,int ) ;

struct fixed31_32 FUNC_4(struct fixed31_32 VAR_1)
{


 const struct fixed31_32 VAR_2 = FUNC_2(VAR_1);

 struct fixed31_32 VAR_3 = VAR_0;

 int VAR_4 = 26;

 do {
  VAR_3 = FUNC_3(
   VAR_0,
   FUNC_0(
    FUNC_1(
     VAR_2,
     VAR_3),
    VAR_4 * (VAR_4 - 1)));

  VAR_4 -= 2;
 } while (VAR_4 != 0);

 return VAR_3;
}
