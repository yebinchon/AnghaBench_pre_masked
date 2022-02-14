
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_region {int dummy; } ;
struct fpga_manager {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct fpga_region**) ;
 struct fpga_region** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct fpga_region**) ;
 struct fpga_region* FUNC_3 (struct device*,struct fpga_manager*,int (*) (struct fpga_region*)) ;

struct fpga_region
*FUNC_4(struct device *VAR_2,
    struct fpga_manager *VAR_3,
    int (*VAR_4)(struct fpga_region *))
{
 struct fpga_region **VAR_5, *VAR_6;

 VAR_5 = FUNC_1(VAR_1, sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (!VAR_6) {
  FUNC_2(VAR_5);
 } else {
  *VAR_5 = VAR_6;
  FUNC_0(VAR_2, VAR_5);
 }

 return VAR_6;
}
