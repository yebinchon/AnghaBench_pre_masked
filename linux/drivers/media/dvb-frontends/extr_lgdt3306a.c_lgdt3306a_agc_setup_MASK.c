
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int dummy; } ;
struct dtv_frontend_properties {int modulation; } ;


 int VAR_0 ;




 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct lgdt3306a_state *VAR_1,
         struct dtv_frontend_properties *VAR_2)
{

 FUNC_0("\n");

 switch (VAR_2->modulation) {
 case 128:
  break;
 case 130:
 case 131:
 case 129:
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
