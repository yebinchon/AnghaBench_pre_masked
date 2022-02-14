
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct of_endpoint {int port; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,struct of_endpoint*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_1,
      struct device_node *VAR_2)
{
 struct of_endpoint VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;





 if (VAR_3.port == 2)
  return 0;

 return -VAR_0;
}
