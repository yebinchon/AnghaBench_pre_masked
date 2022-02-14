
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int current_modulation; } ;
struct dtv_frontend_properties {int modulation; } ;


 int VAR_0 ;




 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int) ;
 int FUNC_3 (struct lgdt3306a_state*) ;

__attribute__((used)) static int FUNC_4(struct lgdt3306a_state *VAR_1,
       struct dtv_frontend_properties *VAR_2)
{
 int VAR_3;

 FUNC_0("\n");

 switch (VAR_2->modulation) {
 case 128:
  VAR_3 = FUNC_3(VAR_1);
  break;
 case 130:
 case 131:
 case 129:
  VAR_3 = FUNC_2(VAR_1, VAR_2->modulation);
  break;
 default:
  return -VAR_0;
 }
 if (FUNC_1(VAR_3))
  goto fail;

 VAR_1->current_modulation = VAR_2->modulation;

fail:
 return VAR_3;
}
