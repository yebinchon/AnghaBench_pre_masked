
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_gpu {int dummy; } ;
struct drm_printer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_printer*,char*,...) ;
 int FUNC_1 (struct msm_gpu*,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct msm_gpu *VAR_2, struct drm_printer *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, "ROQ state:\n");
 FUNC_2(VAR_2, VAR_0, 0);

 for (VAR_4 = 0; VAR_4 < 512 / 4; VAR_4++) {
  uint32_t VAR_5[4];
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
   VAR_5[VAR_6] = FUNC_1(VAR_2, VAR_1);
  FUNC_0(VAR_3, "  %02x: %08x %08x %08x %08x\n", VAR_4,
   VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
 }

 return 0;
}
