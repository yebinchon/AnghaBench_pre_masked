
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Key; int ExtKey; scalar_t__ Up; } ;
typedef TYPE_1__ uiAreaKeyEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int ) ;





__attribute__((used)) static int FUNC_4(uiAreaKeyEvent *VAR_2)
{
 size_t VAR_3;

 if (VAR_2->Up)
  return 0;
 if (VAR_2->Key != 0)
  return 0;
 switch (VAR_2->ExtKey) {
 case 128:

  return 1;
 case 131:

  return 1;
 case 130:
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (VAR_3 == 0)
   return 0;
  VAR_3--;
  VAR_1 = FUNC_2(VAR_0, VAR_3);
  FUNC_0();
  return 1;
 case 129:
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (VAR_3 == FUNC_3(VAR_0))
   return 0;
  VAR_3++;
  VAR_1 = FUNC_2(VAR_0, VAR_3);
  FUNC_0();
  return 1;
 }
 return 0;
}
