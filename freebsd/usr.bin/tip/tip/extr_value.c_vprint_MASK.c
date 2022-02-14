
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* v_name; int v_type; int v_value; } ;
typedef TYPE_1__ value_t ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(value_t *VAR_4)
{
 char *VAR_5;

 if (VAR_3 > 0 && VAR_3 < VAR_1)
  while (VAR_3++ < VAR_1)
   FUNC_6(' ');
 VAR_3 += FUNC_7(VAR_4->v_name);
 switch (VAR_4->v_type&VAR_2) {

 case 131:
  if (FUNC_0(VAR_4->v_value) == VAR_0) {
   VAR_3++;
   FUNC_6('!');
  }
  FUNC_5("%s", VAR_4->v_name);
  break;

 case 128:
  FUNC_5("%s=", VAR_4->v_name);
  VAR_3++;
  if (VAR_4->v_value) {
   VAR_5 = FUNC_3(VAR_4->v_value);
   VAR_3 += FUNC_7(VAR_5);
   FUNC_5("%s", VAR_5);
  }
  break;

 case 129:
  VAR_3 += 6;
  FUNC_5("%s=%-5ld", VAR_4->v_name, FUNC_4(VAR_4->v_value));
  break;

 case 130:
  FUNC_5("%s=", VAR_4->v_name);
  VAR_3++;
  if (VAR_4->v_value) {
   VAR_5 = FUNC_2(FUNC_1(VAR_4->v_value));
   VAR_3 += FUNC_7(VAR_5);
   FUNC_5("%s", VAR_5);
  }
  break;
 }
 if (VAR_3 >= VAR_1) {
  VAR_3 = 0;
  FUNC_5("\r\n");
  return;
 }
}
