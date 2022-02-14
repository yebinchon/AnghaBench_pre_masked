
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int last_wrap; } ;
typedef TYPE_2__ drm_mga_sarea_t ;
struct TYPE_9__ {int wrapped; } ;
struct TYPE_8__ {TYPE_1__* primary; TYPE_2__* sarea_priv; TYPE_4__ prim; } ;
typedef TYPE_3__ drm_mga_private_t ;
typedef TYPE_4__ drm_mga_primary_buffer_t ;
struct TYPE_6__ {int offset; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;

void FUNC_4(drm_mga_private_t *VAR_2)
{
 drm_mga_primary_buffer_t *VAR_3 = &VAR_2->prim;
 drm_mga_sarea_t *VAR_4 = VAR_2->sarea_priv;
 u32 VAR_5 = VAR_2->primary->offset;
 FUNC_0("\n");

 VAR_4->last_wrap++;
 FUNC_0("   wrap = %d\n", VAR_4->last_wrap);

 FUNC_3();
 FUNC_1(VAR_1, VAR_5 | VAR_0);

 FUNC_2(0, &VAR_3->wrapped);
 FUNC_0("done.\n");
}
