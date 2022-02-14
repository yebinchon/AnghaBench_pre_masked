
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_module {size_t num_interfaces; int * interfaces; int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gb_module*) ;

int FUNC_4(struct gb_module *VAR_0)
{
 size_t VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->dev);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev, "failed to register module: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_3(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_interfaces; ++VAR_1)
  FUNC_2(VAR_0->interfaces[VAR_1]);

 return 0;
}
