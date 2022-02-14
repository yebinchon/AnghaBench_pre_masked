
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct gb_interface*) ;

void FUNC_4(struct gb_interface *VAR_0)
{
 if (FUNC_2(&VAR_0->dev)) {
  FUNC_3(VAR_0);

  FUNC_1(&VAR_0->dev);
  FUNC_0(&VAR_0->dev, "Interface removed\n");
 }
}
