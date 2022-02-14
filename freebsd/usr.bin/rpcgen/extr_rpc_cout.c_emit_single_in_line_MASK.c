
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ relation ;
struct TYPE_3__ {char* name; int type; } ;
typedef TYPE_1__ declaration ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,int) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(int VAR_3, declaration *VAR_4, int VAR_5, relation VAR_6)
{
 char *VAR_7;

 FUNC_4(VAR_2, VAR_3);
 if (VAR_5 == VAR_0)
  FUNC_0(VAR_2, "IXDR_PUT_");
 else
  if (VAR_6 == VAR_1)
   FUNC_0(VAR_2, "objp->%s = IXDR_GET_", VAR_4->name);
  else
   FUNC_0(VAR_2, "*genp++ = IXDR_GET_");

 VAR_7 = FUNC_5(VAR_4->type);


 if (FUNC_2(VAR_7, "INT") == 0)
 {
  FUNC_1(VAR_7);
  VAR_7 = FUNC_3("LONG");
 }

 if (FUNC_2(VAR_7, "U_INT") == 0)
 {
  FUNC_1(VAR_7);
  VAR_7 = FUNC_3("U_LONG");
 }
 if (VAR_5 == VAR_0)
  if (VAR_6 == VAR_1)
   FUNC_0(VAR_2,
    "%s(buf, objp->%s);\n", VAR_7, VAR_4->name);
  else
   FUNC_0(VAR_2, "%s(buf, *genp++);\n", VAR_7);

 else
  FUNC_0(VAR_2, "%s(buf);\n", VAR_7);
 FUNC_1(VAR_7);
}
