
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_device {int dev; int * mc_io; int mc_handle; } ;
struct fsl_mc_bus {int irq_resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct fsl_mc_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fsl_mc_device*) ;
 int FUNC_9 (struct fsl_mc_bus*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct fsl_mc_device*) ;
 struct fsl_mc_bus* FUNC_12 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_13(struct fsl_mc_device *VAR_2)
{
 int VAR_3;
 struct fsl_mc_bus *VAR_4 = FUNC_12(VAR_2);

 if (!FUNC_11(VAR_2))
  return -VAR_0;
 if (!VAR_2->mc_io)
  return -VAR_0;

 if (!VAR_4->irq_resources)
  return -VAR_0;

 if (FUNC_1(&VAR_2->dev))
  FUNC_6(VAR_2);

 FUNC_4(&VAR_2->dev, ((void*)0), VAR_1);

 if (FUNC_1(&VAR_2->dev)) {
  FUNC_9(VAR_4);
  FUNC_3(&VAR_2->dev, ((void*)0));
 }

 FUNC_8(VAR_2);

 VAR_3 = FUNC_5(VAR_2->mc_io, 0, VAR_2->mc_handle);
 if (VAR_3 < 0)
  FUNC_0(&VAR_2->dev, "dprc_close() failed: %d\n", VAR_3);

 if (!FUNC_10(&VAR_2->dev)) {
  FUNC_7(VAR_2->mc_io);
  VAR_2->mc_io = ((void*)0);
 }

 FUNC_2(&VAR_2->dev, "DPRC device unbound from driver");
 return 0;
}
