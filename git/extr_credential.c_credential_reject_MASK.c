
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct credential {scalar_t__ approved; int password; int username; TYPE_2__ helpers; } ;
struct TYPE_3__ {int string; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct credential*) ;
 int FUNC_2 (struct credential*,int ,char*) ;

void FUNC_3(struct credential *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->helpers.nr; VAR_1++)
  FUNC_2(VAR_0, VAR_0->helpers.items[VAR_1].string, "erase");

 FUNC_0(VAR_0->username);
 FUNC_0(VAR_0->password);
 VAR_0->approved = 0;
}
