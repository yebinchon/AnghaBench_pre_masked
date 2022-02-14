
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdma_engine {TYPE_1__* dev; } ;
struct regmap {int dummy; } ;
struct property {int length; } ;
typedef struct regmap device_node ;
struct TYPE_3__ {struct regmap* of_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 struct property* FUNC_5 (struct regmap*,char*,int *) ;
 int FUNC_6 (struct regmap*) ;
 struct regmap* FUNC_7 (struct regmap*,char*,int ) ;
 int FUNC_8 (struct regmap*,char*,int,int*) ;
 int FUNC_9 (struct regmap*,int,int ,int) ;
 struct regmap* FUNC_10 (struct regmap*) ;

__attribute__((used)) static int FUNC_11(struct sdma_engine *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev->of_node;
 struct device_node *VAR_4 = FUNC_7(VAR_3, "gpr", 0);
 struct property *VAR_5;
 struct regmap *VAR_6;
 char VAR_7[] = "fsl,sdma-event-remap";
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0;

 if (FUNC_1(VAR_3) || FUNC_1(VAR_4))
  goto out;

 VAR_5 = FUNC_5(VAR_3, VAR_7, ((void*)0));
 VAR_11 = VAR_5 ? (VAR_5->length / sizeof(u32)) : 0;
 if (!VAR_11) {
  FUNC_3(VAR_2->dev, "no event needs to be remapped\n");
  goto out;
 } else if (VAR_11 % VAR_1) {
  FUNC_4(VAR_2->dev, "the property %s must modulo %d\n",
    VAR_7, VAR_1);
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_10(VAR_4);
 if (FUNC_1(VAR_6)) {
  FUNC_4(VAR_2->dev, "failed to get gpr regmap\n");
  VAR_13 = FUNC_2(VAR_6);
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12 += VAR_1) {
  VAR_13 = FUNC_8(VAR_3, VAR_7, VAR_12, &VAR_8);
  if (VAR_13) {
   FUNC_4(VAR_2->dev, "failed to read property %s index %d\n",
     VAR_7, VAR_12);
   goto out;
  }

  VAR_13 = FUNC_8(VAR_3, VAR_7, VAR_12 + 1, &VAR_10);
  if (VAR_13) {
   FUNC_4(VAR_2->dev, "failed to read property %s index %d\n",
     VAR_7, VAR_12 + 1);
   goto out;
  }

  VAR_13 = FUNC_8(VAR_3, VAR_7, VAR_12 + 2, &VAR_9);
  if (VAR_13) {
   FUNC_4(VAR_2->dev, "failed to read property %s index %d\n",
     VAR_7, VAR_12 + 2);
   goto out;
  }

  FUNC_9(VAR_6, VAR_8, FUNC_0(VAR_10), VAR_9 << VAR_10);
 }

out:
 if (!FUNC_1(VAR_4))
  FUNC_6(VAR_4);

 return VAR_13;
}
