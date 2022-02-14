
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fsl_mc_io {int dev; } ;
struct dprc_attributes {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct fsl_mc_io*,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,int ,int ,struct dprc_attributes*) ;
 int FUNC_3 (struct fsl_mc_io*,int ,int,int *) ;
 int FUNC_4 (struct dprc_attributes*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct fsl_mc_io *VAR_0,
    int VAR_1, struct dprc_attributes *VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, 0, VAR_1, &VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "dprc_open() failed: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_4(VAR_2, 0, sizeof(struct dprc_attributes));
 VAR_4 = FUNC_2(VAR_0, 0, VAR_3, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "dprc_get_attributes() failed: %d\n",
   VAR_4);
  goto common_cleanup;
 }

 VAR_4 = 0;

common_cleanup:
 (void)FUNC_1(VAR_0, 0, VAR_3);
 return VAR_4;
}
