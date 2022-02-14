
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ipu_soc {int dummy; } ;
struct drm_plane {int dummy; } ;
struct TYPE_2__ {struct ipu_soc* ipu; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipu_soc*,int ,int ) ;
 int FUNC_1 (struct ipu_soc*) ;
 TYPE_1__* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static bool FUNC_3(struct drm_plane *VAR_1,
        uint32_t VAR_2, uint64_t VAR_3)
{
 struct ipu_soc *VAR_4 = FUNC_2(VAR_1)->ipu;


 if (VAR_3 == VAR_0)
  return 1;


 if (!FUNC_1(VAR_4))
  return 0;

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
