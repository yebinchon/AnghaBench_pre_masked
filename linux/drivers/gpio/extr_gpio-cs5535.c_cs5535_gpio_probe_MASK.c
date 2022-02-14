
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_3__ {int chip; int lock; struct platform_device* pdev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_3 ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct resource *VAR_5;
 int VAR_6 = -VAR_0;
 ulong VAR_7 = VAR_3;
 VAR_5 = FUNC_4(VAR_4, VAR_1, 0);
 if (!VAR_5) {
  FUNC_0(&VAR_4->dev, "can't fetch device resource info\n");
  return VAR_6;
 }

 if (!FUNC_3(&VAR_4->dev, VAR_5->start, FUNC_5(VAR_5),
     VAR_4->name)) {
  FUNC_0(&VAR_4->dev, "can't request region\n");
  return VAR_6;
 }


 VAR_2.base = VAR_5->start;
 VAR_2.pdev = VAR_4;
 FUNC_6(&VAR_2.lock);

 FUNC_1(&VAR_4->dev, "reserved resource region %pR\n", VAR_5);


 VAR_3 &= 0x1F7FFFFF;



 VAR_3 &= ~(1 << 28);

 if (VAR_7 != VAR_3)
  FUNC_1(&VAR_4->dev, "mask changed from 0x%08lX to 0x%08lX\n",
    VAR_7, VAR_3);


 VAR_6 = FUNC_2(&VAR_4->dev, &VAR_2.chip,
         &VAR_2);
 if (VAR_6)
  return VAR_6;

 return 0;
}
