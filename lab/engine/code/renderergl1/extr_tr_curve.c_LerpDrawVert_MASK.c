
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* xyz; float* st; float* lightmap; int* color; } ;
typedef TYPE_1__ drawVert_t ;



__attribute__((used)) static void FUNC_0( drawVert_t *VAR_0, drawVert_t *VAR_1, drawVert_t *VAR_2 ) {
 VAR_2->xyz[0] = 0.5f * (VAR_0->xyz[0] + VAR_1->xyz[0]);
 VAR_2->xyz[1] = 0.5f * (VAR_0->xyz[1] + VAR_1->xyz[1]);
 VAR_2->xyz[2] = 0.5f * (VAR_0->xyz[2] + VAR_1->xyz[2]);

 VAR_2->st[0] = 0.5f * (VAR_0->st[0] + VAR_1->st[0]);
 VAR_2->st[1] = 0.5f * (VAR_0->st[1] + VAR_1->st[1]);

 VAR_2->lightmap[0] = 0.5f * (VAR_0->lightmap[0] + VAR_1->lightmap[0]);
 VAR_2->lightmap[1] = 0.5f * (VAR_0->lightmap[1] + VAR_1->lightmap[1]);

 VAR_2->color[0] = (VAR_0->color[0] + VAR_1->color[0]) >> 1;
 VAR_2->color[1] = (VAR_0->color[1] + VAR_1->color[1]) >> 1;
 VAR_2->color[2] = (VAR_0->color[2] + VAR_1->color[2]) >> 1;
 VAR_2->color[3] = (VAR_0->color[3] + VAR_1->color[3]) >> 1;
}
