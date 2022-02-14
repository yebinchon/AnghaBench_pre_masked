
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_type; int v_value; scalar_t__ v_name; } ;
typedef TYPE_1__ value_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char) ;
 int FUNC_10 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (char*,int ,int ,int ) ;
 TYPE_1__* VAR_4 ;

void
FUNC_14(int VAR_5)
{
 value_t *VAR_6;
 char *VAR_7;
 char VAR_8[5];

 FUNC_10("v\r");
 for (VAR_6 = VAR_4; VAR_6->v_name; VAR_6++) {
  FUNC_4(VAR_6->v_name, VAR_3);
  switch (VAR_6->v_type&VAR_0) {
  case 128:
   if (VAR_6->v_value) {
    VAR_7 = FUNC_6(4*FUNC_11(VAR_6->v_value) + 1);
    if (VAR_7 == ((void*)0)) {
     FUNC_3(VAR_2, "Unable to malloc()\n");
     FUNC_0();
    }
    FUNC_12(VAR_7, VAR_6->v_value, VAR_1);
    FUNC_8(" %s", VAR_7);
    FUNC_5(VAR_7);
   }
   FUNC_9('\r');
   FUNC_9('\n');
   break;
  case 129:
   FUNC_8(" %ld\r\n", FUNC_7(VAR_6->v_value));
   break;
  case 131:
   FUNC_8(" %s\r\n",
       !FUNC_1(VAR_6->v_value) ? "false" : "true");
   break;
  case 130:
   FUNC_13(VAR_8, FUNC_2(VAR_6->v_value), VAR_1, 0);
   FUNC_8(" %s\r\n", VAR_8);
   break;
  }
 }
}
