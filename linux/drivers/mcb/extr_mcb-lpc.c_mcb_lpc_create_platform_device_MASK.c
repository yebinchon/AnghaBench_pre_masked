
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct dmi_system_id {struct resource* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct resource*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct dmi_system_id *VAR_2)
{
 struct resource *VAR_3 = VAR_2->driver_data;
 int VAR_4;

 VAR_1 = FUNC_2("mcb-lpc", -1);
 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_3, 1);
 if (VAR_4)
  goto out_put;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  goto out_put;

 return 0;

out_put:
 FUNC_3(VAR_1);
 return VAR_4;
}
