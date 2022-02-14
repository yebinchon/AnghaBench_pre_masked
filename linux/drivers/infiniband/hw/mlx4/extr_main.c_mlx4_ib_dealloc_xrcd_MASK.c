
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_xrcd {int device; } ;
struct ib_udata {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int xrcdn; int pd; int cq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_xrcd*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct ib_xrcd*) ;

__attribute__((used)) static int FUNC_6(struct ib_xrcd *VAR_0, struct ib_udata *VAR_1)
{
 FUNC_1(FUNC_5(VAR_0)->cq);
 FUNC_0(FUNC_5(VAR_0)->pd);
 FUNC_3(FUNC_4(VAR_0->device)->dev, FUNC_5(VAR_0)->xrcdn);
 FUNC_2(VAR_0);

 return 0;
}
