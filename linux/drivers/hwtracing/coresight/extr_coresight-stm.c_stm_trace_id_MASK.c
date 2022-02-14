
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm_drvdata {int traceid; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 struct stm_drvdata* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct coresight_device *VAR_0)
{
 struct stm_drvdata *VAR_1 = FUNC_0(VAR_0->dev.parent);

 return VAR_1->traceid;
}
