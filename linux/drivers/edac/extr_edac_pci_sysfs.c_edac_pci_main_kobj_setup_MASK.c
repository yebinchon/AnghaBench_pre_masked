
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct bus_type {TYPE_1__* dev_root; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 struct bus_type* FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *,char*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(void)
{
 int VAR_8;
 struct bus_type *VAR_9;

 FUNC_2(0, "\n");


 if (FUNC_1(&VAR_5) != 1)
  return 0;




 VAR_9 = FUNC_3();





 if (!FUNC_9(VAR_4)) {
  FUNC_2(1, "try_module_get() failed\n");
  VAR_8 = -VAR_0;
  goto decrement_count_fail;
 }

 VAR_6 = FUNC_7(sizeof(struct kobject), VAR_2);
 if (!VAR_6) {
  FUNC_2(1, "Failed to allocate\n");
  VAR_8 = -VAR_1;
  goto kzalloc_fail;
 }


 VAR_8 = FUNC_5(VAR_6,
       &VAR_7,
       &VAR_9->dev_root->kobj, "pci");
 if (VAR_8) {
  FUNC_2(1, "Failed to register '.../edac/pci'\n");
  goto kobject_init_and_add_fail;
 }





 FUNC_6(VAR_6, VAR_3);
 FUNC_2(1, "Registered '.../edac/pci' kobject\n");

 return 0;


kobject_init_and_add_fail:
 FUNC_4(VAR_6);

kzalloc_fail:
 FUNC_8(VAR_4);

decrement_count_fail:

 FUNC_0(&VAR_5);

 return VAR_8;
}
