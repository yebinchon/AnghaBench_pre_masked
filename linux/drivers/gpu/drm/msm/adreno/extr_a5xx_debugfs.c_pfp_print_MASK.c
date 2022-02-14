
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct drm_printer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_printer*,char*,...) ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct msm_gpu *VAR_2, struct drm_printer *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, "PFP state:\n");

 for (VAR_4 = 0; VAR_4 < 36; VAR_4++) {
  FUNC_2(VAR_2, VAR_0, VAR_4);
  FUNC_0(VAR_3, "  %02x: %08x\n", VAR_4,
   FUNC_1(VAR_2, VAR_1));
 }

 return 0;
}
