
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_bundle {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gb_bundle*) ;

int FUNC_3(struct gb_bundle *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->dev);
 if (VAR_1) {
  FUNC_0(&VAR_0->dev, "failed to register bundle: %d\n", VAR_1);
  return VAR_1;
 }

 FUNC_2(VAR_0);

 return 0;
}
