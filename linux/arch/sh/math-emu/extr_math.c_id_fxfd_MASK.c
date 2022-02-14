
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_fpu_soft_struct {int dummy; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (struct sh_fpu_soft_struct*,int) ;
 int FUNC_1 (struct sh_fpu_soft_struct*,int) ;
 int FUNC_2 (struct sh_fpu_soft_struct*,int const) ;

__attribute__((used)) static int FUNC_3(struct sh_fpu_soft_struct *VAR_3, int VAR_4)
{
 const int VAR_5[] = { VAR_2, VAR_1, VAR_0, 0 };
 switch (VAR_4 & 3) {
 case 3:
  FUNC_2(VAR_3, VAR_5[VAR_4 >> 2]);
  break;
 case 1:
  FUNC_1(VAR_3, VAR_4 - 1);
  break;
 default:
  FUNC_0(VAR_3, VAR_4);
 }
 return 0;
}
