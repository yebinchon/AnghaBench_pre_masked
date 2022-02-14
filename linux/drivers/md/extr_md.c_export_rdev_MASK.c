
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_rdev {int kobj; TYPE_1__* bdev; int flags; } ;
struct TYPE_2__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct md_rdev*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct md_rdev*) ;

__attribute__((used)) static void FUNC_7(struct md_rdev *VAR_2)
{
 char VAR_3[VAR_1];

 FUNC_4("md: export_rdev(%s)\n", FUNC_0(VAR_2->bdev,VAR_3));
 FUNC_3(VAR_2);

 if (FUNC_5(VAR_0, &VAR_2->flags))
  FUNC_2(VAR_2->bdev->bd_dev);

 FUNC_6(VAR_2);
 FUNC_1(&VAR_2->kobj);
}
