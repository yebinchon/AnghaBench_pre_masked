
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_bus {int id; TYPE_2__* cur_master; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int pid; } ;
struct TYPE_4__ {TYPE_1__ info; } ;


 struct i3c_bus* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i3c_bus*) ;
 int FUNC_2 (struct i3c_bus*) ;
 int FUNC_3 (char*,char*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct i3c_bus *VAR_3 = FUNC_0(VAR_0);
 ssize_t VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_3(VAR_2, "%d-%llx\n", VAR_3->id,
        VAR_3->cur_master->info.pid);
 FUNC_2(VAR_3);

 return VAR_4;
}
