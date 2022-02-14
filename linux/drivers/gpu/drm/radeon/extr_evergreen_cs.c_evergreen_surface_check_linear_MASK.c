
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_parser {int dummy; } ;
struct eg_surface {int layer_size; int nbx; int nby; int bpe; int nsamples; int base_align; int palign; int halign; } ;



__attribute__((used)) static int FUNC_0(struct radeon_cs_parser *VAR_0,
       struct eg_surface *VAR_1,
       const char *VAR_2)
{
 VAR_1->layer_size = VAR_1->nbx * VAR_1->nby * VAR_1->bpe * VAR_1->nsamples;
 VAR_1->base_align = VAR_1->bpe;
 VAR_1->palign = 1;
 VAR_1->halign = 1;
 return 0;
}
