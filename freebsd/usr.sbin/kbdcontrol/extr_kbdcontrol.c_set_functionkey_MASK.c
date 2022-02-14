
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keynum; int keydef; int flen; } ;
typedef TYPE_1__ fkeyarg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,...) ;

__attribute__((used)) static void
FUNC_8(char *VAR_3, char *VAR_4)
{
 fkeyarg_t VAR_5;

 if (!FUNC_3(VAR_3, "load") && !FUNC_3(VAR_4, "default")) {
  FUNC_2();
  return;
 }
 VAR_5.keynum = FUNC_0(VAR_3);
 if (VAR_5.keynum < 1 || VAR_5.keynum > VAR_1) {
  FUNC_7("function key number must be between 1 and %d",
   VAR_1);
  return;
 }
 if ((VAR_5.flen = FUNC_4(VAR_4)) > VAR_0) {
  FUNC_7("function key string too long (%d > %d)",
   VAR_5.flen, VAR_0);
  return;
 }
 FUNC_5(VAR_5.keydef, VAR_4, VAR_0);
 VAR_5.keynum -= 1;
 if (FUNC_1(0, VAR_2, &VAR_5) < 0)
  FUNC_6("setting function key");
}
