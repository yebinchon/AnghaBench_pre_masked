
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; } ;
struct platform_device {int dummy; } ;
struct fsl_edma_engine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct fsl_edma_engine*) ;
 int FUNC_1 (struct platform_device*,char*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,char*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_2,
    struct fsl_edma_engine *VAR_3)
{
 int VAR_4;
 struct resource *VAR_5;

 VAR_5 = FUNC_2(VAR_2,
   VAR_1, "edma-tx-00-15");
 if (VAR_5) {
  for (VAR_4 = VAR_5->start; VAR_4 <= VAR_5->end; VAR_4++)
   FUNC_0(VAR_4, VAR_3);
 }

 VAR_5 = FUNC_2(VAR_2,
   VAR_1, "edma-tx-16-55");
 if (VAR_5) {
  for (VAR_4 = VAR_5->start; VAR_4 <= VAR_5->end; VAR_4++)
   FUNC_0(VAR_4, VAR_3);
 }

 VAR_4 = FUNC_1(VAR_2, "edma-tx-56-63");
 if (VAR_4 != -VAR_0)
  FUNC_0(VAR_4, VAR_3);

 VAR_4 = FUNC_1(VAR_2, "edma-err");
 if (VAR_4 != -VAR_0)
  FUNC_0(VAR_4, VAR_3);
}
