
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct of_endpoint {scalar_t__ port; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device_node*,struct of_endpoint*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_2,
        struct device_node *VAR_3)
{
 struct of_endpoint VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;





 if (VAR_4.port == VAR_1)
  return 0;

 return -VAR_0;
}
