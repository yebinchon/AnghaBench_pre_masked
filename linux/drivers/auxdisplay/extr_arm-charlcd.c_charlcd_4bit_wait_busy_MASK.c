
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charlcd {int dev; } ;


 scalar_t__ FUNC_0 (struct charlcd*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct charlcd *VAR_0)
{
 int VAR_1 = 50;

 FUNC_2(100);
 while (FUNC_0(VAR_0) && VAR_1)
  VAR_1--;
 if (!VAR_1)
  FUNC_1(VAR_0->dev, "timeout waiting for busyflag\n");
}
