
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mvebu_icu {scalar_t__ base; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct resource*) ;
 struct mvebu_icu* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct mvebu_icu*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct mvebu_icu *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(&VAR_8->dev, sizeof(struct mvebu_icu),
      VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = &VAR_8->dev;

 VAR_10 = FUNC_9(VAR_8, VAR_6, 0);
 VAR_9->base = FUNC_4(&VAR_8->dev, VAR_10);
 if (FUNC_1(VAR_9->base)) {
  FUNC_3(&VAR_8->dev, "Failed to map icu base address.\n");
  return FUNC_2(VAR_9->base);
 }
 if (!FUNC_8(VAR_8->dev.of_node))
  FUNC_12(&VAR_7);





 for (VAR_11 = 0 ; VAR_11 < VAR_5 ; VAR_11++) {
  u32 VAR_12, VAR_13;

  VAR_12 = FUNC_11(VAR_9->base + FUNC_0(VAR_11));
  VAR_13 = VAR_12 >> VAR_2;

  if (VAR_13 == VAR_3 ||
      (VAR_13 == VAR_4 &&
       !FUNC_13(&VAR_7)))
   FUNC_14(0x0, VAR_9->base + FUNC_0(VAR_11));
 }

 FUNC_10(VAR_8, VAR_9);

 if (FUNC_13(&VAR_7))
  return FUNC_7(VAR_8);
 else
  return FUNC_6(&VAR_8->dev);
}
