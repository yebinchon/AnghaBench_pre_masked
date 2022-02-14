
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpemu {int fe_fpscr; int fe_cx; } ;


 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static int
FUNC_0(struct fpemu *VAR_2, int VAR_3)
{
 int VAR_4;


 switch ((VAR_2->fe_fpscr) & VAR_1) {

 default:
 case 130:
  VAR_4 = 1;
  break;

 case 128:
  VAR_4 = 0;
  break;

 case 129:
  VAR_4 = VAR_3 == 0;
  break;

 case 131:
  VAR_4 = VAR_3;
  break;
 }
 if (VAR_4)
  VAR_2->fe_cx |= VAR_0;
 return (VAR_4);
}
