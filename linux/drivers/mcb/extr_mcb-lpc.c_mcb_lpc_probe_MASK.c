
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct priv {int bus; int base; TYPE_1__* mem; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 struct priv* FUNC_6 (int *,int,int ) ;
 struct resource* FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct priv*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 struct priv *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_6(&VAR_6->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->mem = FUNC_11(VAR_6, VAR_4, 0);
 if (!VAR_8->mem) {
  FUNC_4(&VAR_6->dev, "No Memory resource\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_7(&VAR_6->dev, VAR_8->mem->start,
          FUNC_13(VAR_8->mem),
          VAR_5);
 if (!VAR_7) {
  FUNC_4(&VAR_6->dev, "Failed to request IO memory\n");
  return -VAR_0;
 }

 VAR_8->base = FUNC_5(&VAR_6->dev, VAR_8->mem->start,
      FUNC_13(VAR_8->mem));
 if (!VAR_8->base) {
  FUNC_4(&VAR_6->dev, "Cannot ioremap\n");
  return -VAR_2;
 }

 FUNC_12(VAR_6, VAR_8);

 VAR_8->bus = FUNC_8(&VAR_6->dev);
 if (FUNC_0(VAR_8->bus))
  return FUNC_1(VAR_8->bus);

 VAR_9 = FUNC_2(VAR_8->bus, VAR_8->mem->start, VAR_8->base);
 if (VAR_9 < 0) {
  FUNC_10(VAR_8->bus);
  return VAR_9;
 }

 FUNC_3(&VAR_6->dev, "Found %d cells\n", VAR_9);

 FUNC_9(VAR_8->bus);

 return 0;

}
