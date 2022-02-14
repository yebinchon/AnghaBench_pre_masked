
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct credential {int approved; TYPE_2__ helpers; int password; int username; } ;
struct TYPE_3__ {int string; } ;


 int FUNC_0 (struct credential*) ;
 int FUNC_1 (struct credential*,int ,char*) ;

void FUNC_2(struct credential *VAR_0)
{
 int VAR_1;

 if (VAR_0->approved)
  return;
 if (!VAR_0->username || !VAR_0->password)
  return;

 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->helpers.nr; VAR_1++)
  FUNC_1(VAR_0, VAR_0->helpers.items[VAR_1].string, "store");
 VAR_0->approved = 1;
}
