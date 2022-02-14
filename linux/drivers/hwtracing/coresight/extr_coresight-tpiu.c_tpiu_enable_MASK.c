
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tpiu_drvdata {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; int refcnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct tpiu_drvdata* FUNC_2 (int ) ;
 int FUNC_3 (struct tpiu_drvdata*) ;

__attribute__((used)) static int FUNC_4(struct coresight_device *VAR_0, u32 VAR_1, void *VAR_2)
{
 struct tpiu_drvdata *VAR_3 = FUNC_2(VAR_0->dev.parent);

 FUNC_3(VAR_3);
 FUNC_0(VAR_0->refcnt);
 FUNC_1(&VAR_0->dev, "TPIU enabled\n");
 return 0;
}
