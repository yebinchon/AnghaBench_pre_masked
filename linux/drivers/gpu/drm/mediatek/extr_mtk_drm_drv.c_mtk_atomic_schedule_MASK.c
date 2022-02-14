
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; struct drm_atomic_state* state; } ;
struct mtk_drm_private {TYPE_1__ commit; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mtk_drm_private *VAR_0,
    struct drm_atomic_state *VAR_1)
{
 VAR_0->commit.state = VAR_1;
 FUNC_0(&VAR_0->commit.work);
}
