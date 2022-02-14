
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


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (struct coresight_device*,struct perf_event*) ;
 int FUNC_2 (struct coresight_device*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct coresight_device *VAR_3,
         struct perf_event *VAR_4, u32 VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct etmv4_drvdata *VAR_8 = FUNC_0(VAR_3->dev.parent);

 VAR_7 = FUNC_3(&VAR_8->mode, VAR_0, VAR_5);


 if (VAR_7)
  return -VAR_1;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_2(VAR_3);
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_3, VAR_4);
  break;
 default:
  VAR_6 = -VAR_2;
 }


 if (VAR_6)
  FUNC_4(&VAR_8->mode, VAR_0);

 return VAR_6;
}
