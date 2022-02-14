
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int texorg; } ;
typedef TYPE_1__ drm_mga_texture_regs_t ;
struct TYPE_6__ {TYPE_1__* tex_state; } ;
typedef TYPE_2__ drm_mga_sarea_t ;
struct TYPE_7__ {TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_mga_private_t ;


 int FUNC_0 (char*,unsigned int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int FUNC_1(drm_mga_private_t *VAR_5, int VAR_6)
{
 drm_mga_sarea_t *VAR_7 = VAR_5->sarea_priv;
 drm_mga_texture_regs_t *VAR_8 = &VAR_7->tex_state[VAR_6];
 unsigned int VAR_9;

 VAR_9 = VAR_8->texorg & (VAR_3 | VAR_1);

 if (VAR_9 == (VAR_4 | VAR_2)) {
  FUNC_0("*** bad TEXORG: 0x%x, unit %d\n", VAR_8->texorg, VAR_6);
  VAR_8->texorg = 0;
  return -VAR_0;
 }

 return 0;
}
