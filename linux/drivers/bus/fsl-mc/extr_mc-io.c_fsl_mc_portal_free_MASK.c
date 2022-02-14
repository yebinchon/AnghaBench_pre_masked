
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_resource {scalar_t__ type; struct fsl_mc_device* data; } ;
struct fsl_mc_io {struct fsl_mc_device* dpmcp_dev; } ;
struct fsl_mc_device {int * consumer_link; struct fsl_mc_resource* resource; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fsl_mc_io*) ;
 int FUNC_1 (struct fsl_mc_resource*) ;

void FUNC_2(struct fsl_mc_io *VAR_1)
{
 struct fsl_mc_device *VAR_2;
 struct fsl_mc_resource *VAR_3;





 VAR_2 = VAR_1->dpmcp_dev;

 VAR_3 = VAR_2->resource;
 if (!VAR_3 || VAR_3->type != VAR_0)
  return;

 if (VAR_3->data != VAR_2)
  return;

 FUNC_0(VAR_1);
 FUNC_1(VAR_3);

 VAR_2->consumer_link = ((void*)0);
}
