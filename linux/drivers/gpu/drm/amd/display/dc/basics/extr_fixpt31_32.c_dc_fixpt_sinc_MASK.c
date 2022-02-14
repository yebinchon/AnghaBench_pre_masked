
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fixed31_32 {scalar_t__ value; } ;
struct TYPE_4__ {int value; } ;


 int FUNC_0 (struct fixed31_32) ;
 struct fixed31_32 FUNC_1 (int ,struct fixed31_32) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__,int ) ;
 int FUNC_4 (struct fixed31_32,struct fixed31_32) ;
 int FUNC_5 (TYPE_1__,int) ;
 struct fixed31_32 VAR_0 ;
 struct fixed31_32 FUNC_6 (struct fixed31_32) ;
 struct fixed31_32 FUNC_7 (struct fixed31_32,int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

struct fixed31_32 FUNC_9(struct fixed31_32 VAR_2)
{
 struct fixed31_32 VAR_3;

 struct fixed31_32 VAR_4 = VAR_0;

 int VAR_5 = 27;

 struct fixed31_32 VAR_6 = VAR_2;

 if (FUNC_3(
  VAR_1,
  FUNC_0(VAR_2))) {
  VAR_6 = FUNC_7(
   VAR_6,
   FUNC_5(
    VAR_1,
    (int)FUNC_8(
     VAR_6.value,
     VAR_1.value)));
 }

 VAR_3 = FUNC_6(VAR_6);

 do {
  VAR_4 = FUNC_7(
   VAR_0,
   FUNC_2(
    FUNC_4(
     VAR_3,
     VAR_4),
    VAR_5 * (VAR_5 - 1)));

  VAR_5 -= 2;
 } while (VAR_5 > 2);

 if (VAR_2.value != VAR_6.value)
  VAR_4 = FUNC_1(
   FUNC_4(VAR_4, VAR_6),
   VAR_2);

 return VAR_4;
}
