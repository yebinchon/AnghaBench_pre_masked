
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static bool FUNC_1(struct device_node *VAR_0)
{
 return FUNC_0(VAR_0, "allwinner,sun4i-a10-display-frontend") ||
  FUNC_0(VAR_0, "allwinner,sun5i-a13-display-frontend") ||
  FUNC_0(VAR_0, "allwinner,sun6i-a31-display-frontend") ||
  FUNC_0(VAR_0, "allwinner,sun7i-a20-display-frontend") ||
  FUNC_0(VAR_0, "allwinner,sun8i-a23-display-frontend") ||
  FUNC_0(VAR_0, "allwinner,sun8i-a33-display-frontend") ||
  FUNC_0(VAR_0, "allwinner,sun9i-a80-display-frontend");
}
