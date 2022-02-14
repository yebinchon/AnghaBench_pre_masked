
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {scalar_t__ queue; int part0; struct gendisk* random; } ;
struct device {int devt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct gendisk* FUNC_2 (struct device*) ;
 int FUNC_3 (struct gendisk*) ;
 int FUNC_4 (struct gendisk*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gendisk*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0)
{
 struct gendisk *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_0->devt);
 FUNC_3(VAR_1);
 FUNC_6(VAR_1->random);
 FUNC_4(VAR_1, ((void*)0));
 FUNC_5(&VAR_1->part0);
 if (VAR_1->queue)
  FUNC_1(VAR_1->queue);
 FUNC_6(VAR_1);
}
