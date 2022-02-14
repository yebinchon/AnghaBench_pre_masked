
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int string; } ;
struct value {int type; TYPE_1__ u; } ;
struct number {int dummy; } ;
typedef enum bcode_compare { ____Placeholder_bcode_compare } bcode_compare ;
struct TYPE_4__ {int * reg; } ;





 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct number*,struct number*) ;
 int FUNC_2 (int ) ;
 struct number* FUNC_3 () ;
 int FUNC_4 (struct number*) ;
 char FUNC_5 () ;
 int FUNC_6 () ;
 struct value* FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,int) ;

__attribute__((used)) static void
FUNC_11(enum bcode_compare VAR_2)
{
 struct number *VAR_3, *VAR_4;
 struct value *VAR_5;
 int VAR_6, VAR_7;
 bool VAR_8;

 VAR_7 = VAR_0;
 VAR_6 = FUNC_6();
 if (FUNC_5() == 'e')
  VAR_7 = FUNC_6();
 else
  FUNC_8();

 VAR_3 = FUNC_3();
 if (VAR_3 == ((void*)0))
  return;
 VAR_4 = FUNC_3();
 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_3);
  return;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4);

 if (!VAR_8 && VAR_7 != VAR_0)
  VAR_6 = VAR_7;

 if (VAR_6 >= 0 && (VAR_8 || (!VAR_8 && VAR_7 != VAR_0))) {
  VAR_5 = FUNC_7(&VAR_1.reg[VAR_6]);
  if (VAR_5 == ((void*)0))
   FUNC_10("register '%c' (0%o) is empty", VAR_6, VAR_6);
  else {
   switch(VAR_5->type) {
   case 130:
    FUNC_10("register '%c' (0%o) is empty", VAR_6, VAR_6);
    break;
   case 129:
    FUNC_9("eval called with non-string argument");
    break;
   case 128:
    FUNC_2(FUNC_0(VAR_5->u.string));
    break;
   }
  }
 }
}
