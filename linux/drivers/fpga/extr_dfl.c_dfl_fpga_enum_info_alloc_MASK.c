
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfl_fpga_enum_info {int dfls; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dfl_fpga_enum_info* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

struct dfl_fpga_enum_info *FUNC_4(struct device *VAR_1)
{
 struct dfl_fpga_enum_info *VAR_2;

 FUNC_2(VAR_1);

 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  FUNC_3(VAR_1);
  return ((void*)0);
 }

 VAR_2->dev = VAR_1;
 FUNC_0(&VAR_2->dfls);

 return VAR_2;
}
