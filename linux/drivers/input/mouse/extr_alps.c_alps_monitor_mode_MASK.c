
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_5, bool VAR_6)
{
 struct ps2dev *VAR_7 = &VAR_5->ps2dev;

 if (VAR_6) {

  if (FUNC_0(VAR_7, ((void*)0), VAR_2) ||
      FUNC_0(VAR_7, ((void*)0), VAR_1) ||
      FUNC_0(VAR_7, ((void*)0), VAR_0) ||
      FUNC_0(VAR_7, ((void*)0), VAR_0) ||
      FUNC_0(VAR_7, ((void*)0), VAR_4) ||
      FUNC_0(VAR_7, ((void*)0), VAR_3) ||
      FUNC_0(VAR_7, ((void*)0), VAR_4) ||
      FUNC_0(VAR_7, ((void*)0), VAR_1))
   return -1;
 } else {

  if (FUNC_0(VAR_7, ((void*)0), VAR_2))
   return -1;
 }

 return 0;
}
