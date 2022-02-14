
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct uniphier_system_bus_priv {struct device* dev; int membase; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct uniphier_system_bus_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int * FUNC_6 (int ,char*,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,struct device*) ;
 int FUNC_9 (int ,char*,int*) ;
 scalar_t__ FUNC_10 (int ,int const*) ;
 int FUNC_11 (struct platform_device*,struct uniphier_system_bus_priv*) ;
 int FUNC_12 (struct uniphier_system_bus_priv*,int,int,scalar_t__,int) ;
 int FUNC_13 (struct uniphier_system_bus_priv*) ;
 int FUNC_14 (struct uniphier_system_bus_priv*) ;
 int FUNC_15 (struct uniphier_system_bus_priv*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct uniphier_system_bus_priv *VAR_7;
 const __be32 *VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 u64 VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->membase = FUNC_5(VAR_5, 0);
 if (FUNC_0(VAR_7->membase))
  return FUNC_1(VAR_7->membase);

 VAR_7->dev = VAR_6;

 VAR_13 = FUNC_7(VAR_6->of_node);

 VAR_17 = FUNC_9(VAR_6->of_node, "#address-cells", &VAR_9);
 if (VAR_17) {
  FUNC_3(VAR_6, "failed to get #address-cells\n");
  return VAR_17;
 }
 if (VAR_9 != 2) {
  FUNC_3(VAR_6, "#address-cells must be 2\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_9(VAR_6->of_node, "#size-cells", &VAR_9);
 if (VAR_17) {
  FUNC_3(VAR_6, "failed to get #size-cells\n");
  return VAR_17;
 }
 if (VAR_9 != 1) {
  FUNC_3(VAR_6, "#size-cells must be 1\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(VAR_6->of_node, "ranges", &VAR_15);
 if (!VAR_8) {
  FUNC_3(VAR_6, "failed to get ranges property\n");
  return -VAR_1;
 }

 VAR_15 /= sizeof(*VAR_8);
 VAR_16 = VAR_13 + 2;

 for (; VAR_15 >= VAR_16; VAR_15 -= VAR_16) {
  VAR_14 = FUNC_2(VAR_8++);
  VAR_10 = FUNC_2(VAR_8++);
  VAR_12 = FUNC_10(VAR_6->of_node, VAR_8);
  if (VAR_12 == VAR_4)
   return -VAR_0;
  VAR_8 += VAR_13;
  VAR_11 = FUNC_2(VAR_8++);

  VAR_17 = FUNC_12(VAR_7, VAR_14, VAR_10,
         VAR_12, VAR_11);
  if (VAR_17)
   return VAR_17;
 }

 VAR_17 = FUNC_14(VAR_7);
 if (VAR_17)
  return VAR_17;

 FUNC_13(VAR_7);

 FUNC_15(VAR_7);

 FUNC_11(VAR_5, VAR_7);


 return FUNC_8(VAR_6->of_node, ((void*)0), VAR_6);
}
