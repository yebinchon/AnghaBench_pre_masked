
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct psmouse*,int) ;
 scalar_t__ FUNC_1 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_2,
           u16 VAR_3, u16 VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_2->ps2dev;


 if (FUNC_1(VAR_5, ((void*)0), VAR_1) ||
     FUNC_0(VAR_2, 0x0A0) ||
     FUNC_0(VAR_2, VAR_3) ||
     FUNC_0(VAR_2, VAR_4) ||
     FUNC_1(VAR_5, ((void*)0), VAR_0))
  return -1;

 return 0;
}
