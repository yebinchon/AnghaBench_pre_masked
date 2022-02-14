
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulptx_walk {scalar_t__ last_sg_len; int * last_sg; int pair; scalar_t__ pair_idx; scalar_t__ nents; struct ulptx_sgl* sgl; } ;
struct ulptx_sgl {int sge; } ;



__attribute__((used)) static inline void FUNC_0(struct ulptx_walk *VAR_0,
       struct ulptx_sgl *VAR_1)
{
 VAR_0->sgl = VAR_1;
 VAR_0->nents = 0;
 VAR_0->pair_idx = 0;
 VAR_0->pair = VAR_1->sge;
 VAR_0->last_sg = ((void*)0);
 VAR_0->last_sg_len = 0;
}
