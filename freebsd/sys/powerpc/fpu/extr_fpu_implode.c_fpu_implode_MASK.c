
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpn {int dummy; } ;
struct fpemu {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;




 int FUNC_1 (struct fpemu*,struct fpn*,int *) ;
 int FUNC_2 (struct fpemu*,struct fpn*) ;
 int FUNC_3 (struct fpemu*,struct fpn*) ;
 int FUNC_4 (struct fpemu*,struct fpn*,int *) ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(struct fpemu *VAR_1, struct fpn *VAR_2, int VAR_3, u_int *VAR_4)
{

 switch (VAR_3) {

 case 129:
  VAR_4[0] = FUNC_4(VAR_1, VAR_2, VAR_4);
  FUNC_0(VAR_0, ("fpu_implode: long %x %x\n",
   VAR_4[0], VAR_4[1]));
  break;

 case 130:
  VAR_4[0] = 0;
  VAR_4[1] = FUNC_2(VAR_1, VAR_2);
  FUNC_0(VAR_0, ("fpu_implode: int %x\n",
   VAR_4[1]));
  break;

 case 128:
  VAR_4[0] = FUNC_3(VAR_1, VAR_2);
  FUNC_0(VAR_0, ("fpu_implode: single %x\n",
   VAR_4[0]));
  break;

 case 131:
  VAR_4[0] = FUNC_1(VAR_1, VAR_2, VAR_4);
  FUNC_0(VAR_0, ("fpu_implode: double %x %x\n",
   VAR_4[0], VAR_4[1]));
  break; break;

 default:
  FUNC_5("fpu_implode: invalid type %d", VAR_3);
 }
}
