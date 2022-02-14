
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {size_t lg_base; size_t lg_delta; int pgs; scalar_t__ ndelta; } ;
typedef TYPE_1__ sc_t ;
struct TYPE_7__ {TYPE_1__* sc; } ;
typedef TYPE_2__ sc_data_t ;
typedef int bitmap_info_t ;
struct TYPE_8__ {size_t reg_size; int slab_size; unsigned int n_shards; int bitmap_info; scalar_t__ nregs; } ;
typedef TYPE_3__ bin_info_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void
FUNC_1(sc_data_t *VAR_2, unsigned VAR_3[VAR_1],
    bin_info_t VAR_4[VAR_1]) {
 for (unsigned VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  bin_info_t *VAR_6 = &VAR_4[VAR_5];
  sc_t *VAR_7 = &VAR_2->sc[VAR_5];
  VAR_6->reg_size = ((size_t)1U << VAR_7->lg_base)
      + ((size_t)VAR_7->ndelta << VAR_7->lg_delta);
  VAR_6->slab_size = (VAR_7->pgs << VAR_0);
  VAR_6->nregs =
      (uint32_t)(VAR_6->slab_size / VAR_6->reg_size);
  VAR_6->n_shards = VAR_3[VAR_5];
  bitmap_info_t VAR_8 = FUNC_0(
      VAR_6->nregs);
  VAR_6->bitmap_info = VAR_8;
 }
}
