
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_2__ {int read; int cleanup; int init; int name; } ;
struct hisi_rng {TYPE_1__ rng; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,struct resource*) ;
 struct hisi_rng* FUNC_5 (int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct hisi_rng*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct hisi_rng *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_7(VAR_6, VAR_7);

 VAR_8 = FUNC_6(VAR_6, VAR_2, 0);
 VAR_7->base = FUNC_4(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->rng.name = VAR_6->name;
 VAR_7->rng.init = VAR_4;
 VAR_7->rng.cleanup = VAR_3;
 VAR_7->rng.read = VAR_5;

 VAR_9 = FUNC_3(&VAR_6->dev, &VAR_7->rng);
 if (VAR_9) {
  FUNC_2(&VAR_6->dev, "failed to register hwrng\n");
  return VAR_9;
 }

 return 0;
}
