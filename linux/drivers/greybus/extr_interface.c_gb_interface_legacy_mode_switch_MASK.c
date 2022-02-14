
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int disconnected; int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct gb_interface*) ;
 int FUNC_3 (struct gb_interface*) ;
 int FUNC_4 (struct gb_interface*) ;

__attribute__((used)) static int FUNC_5(struct gb_interface *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->dev, "legacy mode switch detected\n");


 VAR_0->disconnected = 1;
 FUNC_3(VAR_0);
 VAR_0->disconnected = 0;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_0->dev, "failed to re-enable interface: %d\n", VAR_1);
  FUNC_2(VAR_0);
 }

 return VAR_1;
}
