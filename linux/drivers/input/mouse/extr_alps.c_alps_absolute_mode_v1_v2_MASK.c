
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_3)
{
 struct ps2dev *VAR_4 = &VAR_3->ps2dev;


 if (FUNC_0(VAR_4, ((void*)0), VAR_0) ||
     FUNC_0(VAR_4, ((void*)0), VAR_0) ||
     FUNC_0(VAR_4, ((void*)0), VAR_0) ||
     FUNC_0(VAR_4, ((void*)0), VAR_0) ||
     FUNC_0(VAR_4, ((void*)0), VAR_1))
  return -1;





 return FUNC_0(VAR_4, ((void*)0), VAR_2);
}
