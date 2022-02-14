
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_resource {scalar_t__ type; struct fsl_mc_device* data; } ;
struct fsl_mc_device {int * consumer_link; struct fsl_mc_resource* resource; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fsl_mc_resource*) ;

void FUNC_1(struct fsl_mc_device *VAR_1)
{
 struct fsl_mc_resource *VAR_2;

 VAR_2 = VAR_1->resource;
 if (VAR_2->type == VAR_0)
  return;
 if (VAR_2->data != VAR_1)
  return;

 FUNC_0(VAR_2);

 VAR_1->consumer_link = ((void*)0);
}
