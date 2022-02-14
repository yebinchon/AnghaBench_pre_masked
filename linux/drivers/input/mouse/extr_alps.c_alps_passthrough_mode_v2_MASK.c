
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ps2dev*,int *,int) ;
 int FUNC_1 (struct ps2dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_3, bool VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_3->ps2dev;
 int VAR_6 = VAR_4 ? VAR_2 : VAR_1;

 if (FUNC_0(VAR_5, ((void*)0), VAR_6) ||
     FUNC_0(VAR_5, ((void*)0), VAR_6) ||
     FUNC_0(VAR_5, ((void*)0), VAR_6) ||
     FUNC_0(VAR_5, ((void*)0), VAR_0))
  return -1;


 FUNC_1(VAR_5, 3, 100);

 return 0;
}
