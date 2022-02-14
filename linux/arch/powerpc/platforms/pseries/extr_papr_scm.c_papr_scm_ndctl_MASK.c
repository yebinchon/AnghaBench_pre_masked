
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct papr_scm_priv {TYPE_1__* pdev; int metadata_size; } ;
struct nvdimm_bus_descriptor {int dummy; } ;
struct nvdimm {int dummy; } ;
struct nd_cmd_get_config_size {int max_xfer; int config_size; int status; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int *,char*,int) ;
 struct papr_scm_priv* FUNC_1 (struct nvdimm*) ;
 int FUNC_2 (struct papr_scm_priv*,void*) ;
 int FUNC_3 (struct papr_scm_priv*,void*) ;

int FUNC_4(struct nvdimm_bus_descriptor *VAR_1, struct nvdimm *VAR_2,
  unsigned int VAR_3, void *VAR_4, unsigned int VAR_5, int *VAR_6)
{
 struct nd_cmd_get_config_size *VAR_7;
 struct papr_scm_priv *VAR_8;


 if (!VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 129:
  VAR_7 = VAR_4;

  VAR_7->status = 0;
  VAR_7->max_xfer = 8;
  VAR_7->config_size = VAR_8->metadata_size;
  *VAR_6 = 0;
  break;

 case 130:
  *VAR_6 = FUNC_2(VAR_8, VAR_4);
  break;

 case 128:
  *VAR_6 = FUNC_3(VAR_8, VAR_4);
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_8->pdev->dev, "returned with cmd_rc = %d\n", *VAR_6);

 return 0;
}
