
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {struct cppi_glue_infos const* data; } ;
struct device {int of_node; } ;
struct cppi_glue_infos {int dummy; } ;


 int VAR_0 ;
 struct of_device_id* FUNC_0 (int ,int ) ;

__attribute__((used)) static const struct cppi_glue_infos *FUNC_1(struct device *VAR_1)
{
 const struct of_device_id *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->of_node);
 if (!VAR_2)
  return ((void*)0);
 return VAR_2->data;
}
