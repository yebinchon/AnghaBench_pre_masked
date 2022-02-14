
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_mc_driver {struct fsl_mc_device_id* match_id_table; } ;
struct fsl_mc_device_id {int vendor; int obj_type; } ;
struct TYPE_2__ {int state; int vendor; int type; } ;
struct fsl_mc_device {TYPE_1__ obj_desc; int dev; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct fsl_mc_device* FUNC_3 (struct device*) ;
 struct fsl_mc_driver* FUNC_4 (struct device_driver*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct device_driver *VAR_2)
{
 const struct fsl_mc_device_id *VAR_3;
 struct fsl_mc_device *VAR_4 = FUNC_3(VAR_1);
 struct fsl_mc_driver *VAR_5 = FUNC_4(VAR_2);
 bool VAR_6 = 0;

 if (!VAR_5->match_id_table)
  goto out;





 if ((VAR_4->obj_desc.state & VAR_0) == 0 &&
     !FUNC_1(&VAR_4->dev))
  goto out;





 for (VAR_3 = VAR_5->match_id_table; VAR_3->vendor != 0x0; VAR_3++) {
  if (VAR_3->vendor == VAR_4->obj_desc.vendor &&
      FUNC_2(VAR_3->obj_type, VAR_4->obj_desc.type) == 0) {
   VAR_6 = 1;

   break;
  }
 }

out:
 FUNC_0(VAR_1, "%smatched\n", VAR_6 ? "" : "not ");
 return VAR_6;
}
