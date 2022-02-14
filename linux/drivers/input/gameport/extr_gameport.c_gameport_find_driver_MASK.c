
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int name; int phys; int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gameport *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->dev);
 if (VAR_1 < 0)
  FUNC_0(&VAR_0->dev,
    "device_attach() failed for %s (%s), error: %d\n",
    VAR_0->phys, VAR_0->name, VAR_1);
}
