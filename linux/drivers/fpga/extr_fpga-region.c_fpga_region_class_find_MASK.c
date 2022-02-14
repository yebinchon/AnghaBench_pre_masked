
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_region {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int ,struct device*,void const*,int (*) (struct device*,void const*)) ;
 int VAR_0 ;
 struct fpga_region* FUNC_1 (struct device*) ;

struct fpga_region *FUNC_2(
 struct device *VAR_1, const void *VAR_2,
 int (*VAR_3)(struct device *, const void *))
{
 struct device *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 return FUNC_1(VAR_4);
}
