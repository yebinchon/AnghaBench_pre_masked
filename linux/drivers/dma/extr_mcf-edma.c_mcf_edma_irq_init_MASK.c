
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; } ;
struct platform_device {int dummy; } ;
struct fsl_edma_engine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct platform_device*,char*) ;
 struct resource* FUNC_1 (struct platform_device*,int ,char*) ;
 int FUNC_2 (int,int ,int ,char*,struct fsl_edma_engine*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4,
    struct fsl_edma_engine *VAR_5)
{
 int VAR_6 = 0, VAR_7;
 struct resource *VAR_8;

 VAR_8 = FUNC_1(VAR_4,
    VAR_1, "edma-tx-00-15");
 if (!VAR_8)
  return -1;

 for (VAR_6 = 0, VAR_7 = VAR_8->start; VAR_7 <= VAR_8->end; ++VAR_7)
  VAR_6 |= FUNC_2(VAR_7, VAR_3, 0, "eDMA", VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_8 = FUNC_1(VAR_4,
   VAR_1, "edma-tx-16-55");
 if (!VAR_8)
  return -1;

 for (VAR_6 = 0, VAR_7 = VAR_8->start; VAR_7 <= VAR_8->end; ++VAR_7)
  VAR_6 |= FUNC_2(VAR_7, VAR_3, 0, "eDMA", VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, "edma-tx-56-63");
 if (VAR_6 != -VAR_0) {
  VAR_6 = FUNC_2(VAR_6, VAR_3,
      0, "eDMA", VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_4, "edma-err");
 if (VAR_6 != -VAR_0) {
  VAR_6 = FUNC_2(VAR_6, VAR_2,
      0, "eDMA", VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
