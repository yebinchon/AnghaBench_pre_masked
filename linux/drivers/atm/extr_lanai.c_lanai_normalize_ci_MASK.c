
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vci_t ;
struct lanai_dev {int num_vci; } ;
struct atm_vcc {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct lanai_dev*,int,struct atm_vcc const*) ;

__attribute__((used)) static int FUNC_1(struct lanai_dev *VAR_2,
 const struct atm_vcc *VAR_3, short *VAR_4, vci_t *VAR_5)
{
 switch (*VAR_4) {
  case 128:
   *VAR_4 = 0;

  case 0:
   break;
  default:
   return -VAR_1;
 }
 switch (*VAR_5) {
  case 129:
   for (*VAR_5 = VAR_0; *VAR_5 < VAR_2->num_vci;
       (*VAR_5)++)
    if (FUNC_0(VAR_2, *VAR_5, VAR_3))
     return 0;
   return -VAR_1;
  default:
   if (*VAR_5 >= VAR_2->num_vci || *VAR_5 < 0 ||
       !FUNC_0(VAR_2, *VAR_5, VAR_3))
    return -VAR_1;
 }
 return 0;
}
