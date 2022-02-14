
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {int rsts; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct sysc *VAR_0)
{
 VAR_0->rsts =
  FUNC_2(VAR_0->dev, "rstctrl");
 if (FUNC_0(VAR_0->rsts))
  return FUNC_1(VAR_0->rsts);

 return 0;
}
