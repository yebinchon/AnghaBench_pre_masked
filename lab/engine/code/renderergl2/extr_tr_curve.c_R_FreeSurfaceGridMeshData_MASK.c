
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int verts; int indexes; int heightLodError; int widthLodError; } ;
typedef TYPE_1__ srfBspSurface_t ;
struct TYPE_5__ {int (* Free ) (int ) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( srfBspSurface_t *VAR_1 ) {
 VAR_0.Free(VAR_1->widthLodError);
 VAR_0.Free(VAR_1->heightLodError);
 VAR_0.Free(VAR_1->indexes);
 VAR_0.Free(VAR_1->verts);
}
