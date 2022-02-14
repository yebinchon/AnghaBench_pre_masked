
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpiu_drvdata {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; int refcnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct tpiu_drvdata* FUNC_2 (int ) ;
 int FUNC_3 (struct tpiu_drvdata*) ;

__attribute__((used)) static int FUNC_4(struct coresight_device *VAR_1)
{
 struct tpiu_drvdata *VAR_2 = FUNC_2(VAR_1->dev.parent);

 if (FUNC_0(VAR_1->refcnt))
  return -VAR_0;

 FUNC_3(VAR_2);

 FUNC_1(&VAR_1->dev, "TPIU disabled\n");
 return 0;
}
