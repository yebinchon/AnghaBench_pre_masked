
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct credential_operation {scalar_t__ name; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 struct credential_operation* VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_1 ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2)
{
 struct credential_operation const *VAR_3 = VAR_0;
 const char *VAR_4 = FUNC_1(VAR_2, '/');

 VAR_4 = (VAR_4) ? VAR_4 + 1 : VAR_2;
 FUNC_0(VAR_1, "usage: %s <", VAR_4);
 while (VAR_3->name) {
  FUNC_0(VAR_1, "%s", (VAR_3++)->name);
  if (VAR_3->name)
   FUNC_0(VAR_1, "%s", "|");
 }
 FUNC_0(VAR_1, "%s", ">\n");
}
