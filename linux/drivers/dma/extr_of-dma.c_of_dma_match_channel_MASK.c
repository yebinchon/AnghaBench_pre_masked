
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int,char const**) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_1, const char *VAR_2,
    int VAR_3, struct of_phandle_args *VAR_4)
{
 const char *VAR_5;

 if (FUNC_1(VAR_1, "dma-names", VAR_3, &VAR_5))
  return -VAR_0;

 if (FUNC_2(VAR_2, VAR_5))
  return -VAR_0;

 if (FUNC_0(VAR_1, "dmas", "#dma-cells", VAR_3,
           VAR_4))
  return -VAR_0;

 return 0;
}
