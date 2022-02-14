
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9150_gpadc {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct da9150_gpadc*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct da9150_gpadc *VAR_1, int VAR_2,
           int VAR_3, int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_2) {
 case 134:
 case 133:
 case 132:
 case 131:
  *VAR_4 = FUNC_0(VAR_5);
  break;
 case 130:
  *VAR_4 = FUNC_1(VAR_5);
  break;
 case 129:
  *VAR_4 = FUNC_3(VAR_5);
  break;
 case 128:
  *VAR_4 = FUNC_4(VAR_5);
  break;
 default:

  *VAR_4 = VAR_5;
  break;
 }

 return VAR_0;
}
