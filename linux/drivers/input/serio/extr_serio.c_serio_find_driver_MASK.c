
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int name; int phys; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (VAR_2 < 0 && VAR_2 != -VAR_0)
  FUNC_0(&VAR_1->dev,
    "device_attach() failed for %s (%s), error: %d\n",
    VAR_1->phys, VAR_1->name, VAR_2);
}
