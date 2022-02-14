
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_vdi {int dummy; } ;
struct ipu_soc {struct ipu_vdi* vdi_priv; } ;



struct ipu_vdi *FUNC_0(struct ipu_soc *VAR_0)
{
 return VAR_0->vdi_priv;
}
