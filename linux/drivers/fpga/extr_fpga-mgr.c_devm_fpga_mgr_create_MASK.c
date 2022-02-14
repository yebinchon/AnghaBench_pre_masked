
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_manager_ops {int dummy; } ;
struct fpga_manager {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct fpga_manager**) ;
 struct fpga_manager** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct fpga_manager**) ;
 struct fpga_manager* FUNC_3 (struct device*,char const*,struct fpga_manager_ops const*,void*) ;

struct fpga_manager *FUNC_4(struct device *VAR_2, const char *VAR_3,
       const struct fpga_manager_ops *VAR_4,
       void *VAR_5)
{
 struct fpga_manager **VAR_6, *VAR_7;

 VAR_6 = FUNC_1(VAR_1, sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_7) {
  FUNC_2(VAR_6);
 } else {
  *VAR_6 = VAR_7;
  FUNC_0(VAR_2, VAR_6);
 }

 return VAR_7;
}
