
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_plane {int dummy; } ;
struct sti_hqvdp {int dummy; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_2__ {int primary; } ;


 int FUNC_0 (struct sti_hqvdp*,int ) ;
 struct sti_hqvdp* FUNC_1 (struct sti_plane*) ;
 struct sti_plane* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_0)
{
 struct sti_plane *VAR_1 = FUNC_2(VAR_0);
 struct sti_hqvdp *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2, VAR_0->dev->primary);
}
