
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * htrees; int * codes; } ;
struct TYPE_7__ {int * htrees; int * codes; } ;
struct TYPE_6__ {int * htrees; int * codes; } ;
struct TYPE_9__ {unsigned int* block_length; int* num_block_types; int* block_type_rb; TYPE_3__ distance_hgroup; TYPE_2__ insert_copy_hgroup; TYPE_1__ literal_hgroup; int * context_lookup2; int * context_lookup1; scalar_t__ dist_htree_index; int * dist_context_map_slice; int * literal_htree; int * context_map_slice; int * dist_context_map; int * context_modes; int * context_map; scalar_t__ meta_block_remaining_len; } ;
typedef TYPE_4__ BrotliDecoderState ;



void FUNC_0(BrotliDecoderState* VAR_0) {
  VAR_0->meta_block_remaining_len = 0;
  VAR_0->block_length[0] = 1U << 28;
  VAR_0->block_length[1] = 1U << 28;
  VAR_0->block_length[2] = 1U << 28;
  VAR_0->num_block_types[0] = 1;
  VAR_0->num_block_types[1] = 1;
  VAR_0->num_block_types[2] = 1;
  VAR_0->block_type_rb[0] = 1;
  VAR_0->block_type_rb[1] = 0;
  VAR_0->block_type_rb[2] = 1;
  VAR_0->block_type_rb[3] = 0;
  VAR_0->block_type_rb[4] = 1;
  VAR_0->block_type_rb[5] = 0;
  VAR_0->context_map = ((void*)0);
  VAR_0->context_modes = ((void*)0);
  VAR_0->dist_context_map = ((void*)0);
  VAR_0->context_map_slice = ((void*)0);
  VAR_0->literal_htree = ((void*)0);
  VAR_0->dist_context_map_slice = ((void*)0);
  VAR_0->dist_htree_index = 0;
  VAR_0->context_lookup1 = ((void*)0);
  VAR_0->context_lookup2 = ((void*)0);
  VAR_0->literal_hgroup.codes = ((void*)0);
  VAR_0->literal_hgroup.htrees = ((void*)0);
  VAR_0->insert_copy_hgroup.codes = ((void*)0);
  VAR_0->insert_copy_hgroup.htrees = ((void*)0);
  VAR_0->distance_hgroup.codes = ((void*)0);
  VAR_0->distance_hgroup.htrees = ((void*)0);
}
