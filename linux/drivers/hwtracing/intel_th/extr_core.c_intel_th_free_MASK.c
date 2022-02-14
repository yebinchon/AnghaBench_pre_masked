
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_th {int num_thdevs; int id; int major; int dev; int ** thdev; int * hub; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct intel_th*) ;
 int FUNC_4 (struct intel_th*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct intel_th *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2);

 FUNC_2(VAR_2->hub);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_thdevs; VAR_3++) {
  if (VAR_2->thdev[VAR_3] != VAR_2->hub)
   FUNC_2(VAR_2->thdev[VAR_3]);
  VAR_2->thdev[VAR_3] = ((void*)0);
 }

 VAR_2->num_thdevs = 0;

 FUNC_6(VAR_2->dev);
 FUNC_5(VAR_2->dev);

 FUNC_0(VAR_2->major, 0, VAR_0,
       "intel_th/output");

 FUNC_1(&VAR_1, VAR_2->id);

 FUNC_4(VAR_2);
}
