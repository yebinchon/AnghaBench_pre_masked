
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct TYPE_2__ {int obase; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,struct value*,char*,int ) ;
 int FUNC_1 (char,int ) ;
 int VAR_1 ;
 struct value* FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct value *VAR_2 = FUNC_2();
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_1, VAR_2, "", VAR_0.obase);
  (void)FUNC_1('\n', VAR_1);
 }
 else
  FUNC_3("stack empty");
}
