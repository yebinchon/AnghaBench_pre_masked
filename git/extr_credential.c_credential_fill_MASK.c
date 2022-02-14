
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct credential {scalar_t__ password; scalar_t__ username; TYPE_2__ helpers; scalar_t__ quit; } ;
struct TYPE_3__ {int string; } ;


 int FUNC_0 (struct credential*) ;
 int FUNC_1 (struct credential*,int ,char*) ;
 int FUNC_2 (struct credential*) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(struct credential *VAR_0)
{
 int VAR_1;

 if (VAR_0->username && VAR_0->password)
  return;

 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->helpers.nr; VAR_1++) {
  FUNC_1(VAR_0, VAR_0->helpers.items[VAR_1].string, "get");
  if (VAR_0->username && VAR_0->password)
   return;
  if (VAR_0->quit)
   FUNC_3("credential helper '%s' told us to quit",
       VAR_0->helpers.items[VAR_1].string);
 }

 FUNC_2(VAR_0);
 if (!VAR_0->username && !VAR_0->password)
  FUNC_3("unable to get password from user");
}
