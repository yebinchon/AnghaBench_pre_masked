
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pshadowBits; int dlightBits; int indexes; int numIndexes; int verts; int numVerts; } ;
typedef TYPE_1__ srfBspSurface_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2( srfBspSurface_t *VAR_0 ) {
 if (FUNC_0(VAR_0->numVerts, VAR_0->verts, VAR_0->numIndexes,
  VAR_0->indexes, VAR_0->dlightBits, VAR_0->pshadowBits))
 {
  return;
 }

 FUNC_1(VAR_0->numVerts, VAR_0->verts, VAR_0->numIndexes,
   VAR_0->indexes, VAR_0->dlightBits, VAR_0->pshadowBits);
}
