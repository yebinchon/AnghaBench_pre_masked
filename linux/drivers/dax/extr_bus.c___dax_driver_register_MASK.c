
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct device_driver {char const* name; char const* mod_name; int * bus; struct module* owner; } ;
struct dax_device_driver {scalar_t__ match_always; int ids; struct device_driver drv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device_driver*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dax_device_driver *VAR_4,
  struct module *VAR_5, const char *VAR_6)
{
 struct device_driver *VAR_7 = &VAR_4->drv;
 int VAR_8 = 0;

 FUNC_0(&VAR_4->ids);
 VAR_7->owner = VAR_5;
 VAR_7->name = VAR_6;
 VAR_7->mod_name = VAR_6;
 VAR_7->bus = &VAR_2;


 FUNC_3(&VAR_1);
 VAR_3 += VAR_4->match_always;
 if (VAR_3 > 1) {
  VAR_3--;
  FUNC_1(1);
  VAR_8 = -VAR_0;
 }
 FUNC_4(&VAR_1);
 if (VAR_8)
  return VAR_8;
 return FUNC_2(VAR_7);
}
