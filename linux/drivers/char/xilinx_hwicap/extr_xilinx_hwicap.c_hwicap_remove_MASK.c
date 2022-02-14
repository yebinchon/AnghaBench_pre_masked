
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwicap_drvdata {int mem_size; int mem_start; int base_address; int cdev; int devt; } ;
struct device {int devt; } ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 struct hwicap_drvdata* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hwicap_drvdata*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__* VAR_3 ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4)
{
 struct hwicap_drvdata *VAR_5;

 VAR_5 = FUNC_2(VAR_4);

 if (!VAR_5)
  return 0;

 FUNC_3(VAR_1, VAR_5->devt);
 FUNC_1(&VAR_5->cdev);
 FUNC_4(VAR_5->base_address);
 FUNC_8(VAR_5->mem_start, VAR_5->mem_size);
 FUNC_5(VAR_5);

 FUNC_6(&VAR_2);
 VAR_3[FUNC_0(VAR_4->devt)-VAR_0] = 0;
 FUNC_7(&VAR_2);
 return 0;
}
