
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_driver {struct fsi_device_id* id_table; } ;
struct fsi_device_id {scalar_t__ engine_type; scalar_t__ version; } ;
struct fsi_device {scalar_t__ engine_type; scalar_t__ version; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct fsi_device* FUNC_0 (struct device*) ;
 struct fsi_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct fsi_device *VAR_3 = FUNC_0(VAR_1);
 struct fsi_driver *VAR_4 = FUNC_1(VAR_2);
 const struct fsi_device_id *VAR_5;

 if (!VAR_4->id_table)
  return 0;

 for (VAR_5 = VAR_4->id_table; VAR_5->engine_type; VAR_5++) {
  if (VAR_5->engine_type != VAR_3->engine_type)
   continue;
  if (VAR_5->version == VAR_0 ||
    VAR_5->version == VAR_3->version)
   return 1;
 }

 return 0;
}
