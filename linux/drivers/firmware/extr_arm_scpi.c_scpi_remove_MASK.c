
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scpi_drvinfo {TYPE_1__** dvfs; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* opps; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct scpi_drvinfo* FUNC_1 (struct platform_device*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 int VAR_3;
 struct scpi_drvinfo *VAR_4 = FUNC_1(VAR_2);

 VAR_1 = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0 && VAR_4->dvfs[VAR_3]; VAR_3++) {
  FUNC_0(VAR_4->dvfs[VAR_3]->opps);
  FUNC_0(VAR_4->dvfs[VAR_3]);
 }

 return 0;
}
