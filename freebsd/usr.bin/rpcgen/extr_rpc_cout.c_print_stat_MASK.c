
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int relation ;
struct TYPE_3__ {char* prefix; char* type; char* array_max; int name; int rel; } ;
typedef TYPE_1__ declaration ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int,char const*,char const*,int ,char const*,char*,int ) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, declaration *VAR_1)
{
 const char *VAR_2 = VAR_1->prefix;
 const char *VAR_3 = VAR_1->type;
 const char *VAR_4 = VAR_1->array_max;
 relation VAR_5 = VAR_1->rel;
 char VAR_6[256];

 if (FUNC_0(VAR_3, VAR_5)) {
  FUNC_2(VAR_6, "objp->%s", VAR_1->name);
 } else {
  FUNC_2(VAR_6, "&objp->%s", VAR_1->name);
 }
 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_5, VAR_4, VAR_6, VAR_1->name);
}
