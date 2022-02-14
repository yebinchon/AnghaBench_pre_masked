
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jailparam {char* jp_name; int * jp_value; } ;
struct cfjail {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cfjail const*,char*,char*,char*) ;
 char* FUNC_3 (struct jailparam*) ;
 int FUNC_4 (struct jailparam*,unsigned int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char) ;
 int FUNC_7 (int ,char*) ;
 int VAR_4 ;
 char* FUNC_8 (int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_9(const struct cfjail *VAR_6, struct jailparam *VAR_7, unsigned VAR_8,
    int VAR_9)
{
 char *VAR_10;
 int VAR_11;
 unsigned VAR_12;

 VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_9);
 if (VAR_5 > 0) {
  FUNC_2(VAR_6, "jail_set(%s%s)",
      (VAR_9 & (VAR_0 | VAR_2)) == VAR_0
      ? "JAIL_CREATE" : "JAIL_UPDATE",
      (VAR_9 & VAR_1) ? " | JAIL_DYING" : "");
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
   FUNC_5(" %s", VAR_7[VAR_12].jp_name);
   if (VAR_7[VAR_12].jp_value == ((void*)0))
    continue;
   FUNC_6('=');
   VAR_10 = FUNC_3(VAR_7 + VAR_12);
   if (VAR_10 == ((void*)0))
    FUNC_0(1, "jailparam_export");
   FUNC_7(VAR_4, VAR_10);
   FUNC_1(VAR_10);
  }
  if (VAR_11 < 0)
   FUNC_5(": %s", FUNC_8(VAR_3));
  FUNC_5("\n");
 }
 return VAR_11;
}
