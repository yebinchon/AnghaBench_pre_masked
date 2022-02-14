
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_type; char* v_value; int v_access; } ;
typedef TYPE_1__ value_t ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char) ;
 int FUNC_8 (char*,int ) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(value_t *VAR_6, char *VAR_7)
{
 if (!FUNC_10(VAR_6->v_access, VAR_5)) {
  FUNC_5("access denied\r\n");
  return;
 }

 switch (VAR_6->v_type&VAR_4) {
 case 128:
  if (VAR_6->v_value && FUNC_2(VAR_6->v_value, VAR_7))
   return;
  if (!(VAR_6->v_type&(VAR_1|VAR_2)))
   FUNC_3(VAR_6->v_value);
  if ((VAR_6->v_value = FUNC_9(VAR_7)) == VAR_3) {
   FUNC_5("out of core\r\n");
   return;
  }
  VAR_6->v_type &= ~(VAR_1|VAR_2);
  break;
 case 129:
  if (FUNC_4(VAR_6->v_value) == FUNC_4(VAR_7))
   return;
  FUNC_8(VAR_6->v_value, FUNC_4(VAR_7));
  break;
 case 131:
  if (FUNC_0(VAR_6->v_value) == (*VAR_7 != '!'))
   return;
  FUNC_6(VAR_6->v_value, (*VAR_7 != '!'));
  break;
 case 130:
  if (FUNC_1(VAR_6->v_value) == *VAR_7)
   return;
  FUNC_7(VAR_6->v_value, *VAR_7);
 }
 VAR_6->v_access |= VAR_0;
}
