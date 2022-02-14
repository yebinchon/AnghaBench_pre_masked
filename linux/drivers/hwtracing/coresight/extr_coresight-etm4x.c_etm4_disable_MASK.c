
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_event {int dummy; } ;
struct etmv4_drvdata {int mode; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;





 struct etmv4_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (struct coresight_device*,struct perf_event*) ;
 int FUNC_2 (struct coresight_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const) ;

__attribute__((used)) static void FUNC_5(struct coresight_device *VAR_0,
    struct perf_event *VAR_1)
{
 u32 VAR_2;
 struct etmv4_drvdata *VAR_3 = FUNC_0(VAR_0->dev.parent);






 VAR_2 = FUNC_3(&VAR_3->mode);

 switch (VAR_2) {
 case 130:
  break;
 case 128:
  FUNC_2(VAR_0);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 }

 if (VAR_2)
  FUNC_4(&VAR_3->mode, 130);
}
