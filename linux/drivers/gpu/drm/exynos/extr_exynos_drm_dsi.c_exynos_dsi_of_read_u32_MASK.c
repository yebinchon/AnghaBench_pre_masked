
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node const*,char const*,int *) ;
 int FUNC_1 (char*,struct device_node const*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct device_node *VAR_0,
      const char *VAR_1, u32 *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3 < 0)
  FUNC_1("%pOF: failed to get '%s' property\n", VAR_0, VAR_1);

 return VAR_3;
}
