
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_io {struct fsl_mc_device* dpmcp_dev; } ;
struct fsl_mc_device {int * mc_io; int dev; int mc_handle; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct fsl_mc_io*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fsl_mc_io *VAR_0)
{
 int VAR_1;
 struct fsl_mc_device *VAR_2 = VAR_0->dpmcp_dev;

 VAR_1 = FUNC_1(VAR_0,
       0,
       VAR_2->mc_handle);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_2->dev, "dpmcp_close() failed: %d\n",
   VAR_1);
 }

 VAR_0->dpmcp_dev = ((void*)0);
 VAR_2->mc_io = ((void*)0);
}
