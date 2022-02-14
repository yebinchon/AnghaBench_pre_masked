
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int brotli_free_func ;
typedef scalar_t__ brotli_alloc_func ;
struct TYPE_8__ {int * htrees; int * codes; } ;
struct TYPE_7__ {int * htrees; int * codes; } ;
struct TYPE_6__ {int * htrees; int * codes; } ;
struct TYPE_9__ {int canny_ringbuffer_allocation; int* dist_rb; int mtf_upper_bound; int * symbols_lists_array; int * symbol_lists; int * block_len_trees; int * block_type_trees; scalar_t__ dist_rb_idx; scalar_t__ max_distance; scalar_t__ window_bits; scalar_t__ should_wrap_ringbuffer; scalar_t__ is_metadata; scalar_t__ is_uncompressed; scalar_t__ is_last_metablock; TYPE_3__ distance_hgroup; TYPE_2__ insert_copy_hgroup; TYPE_1__ literal_hgroup; scalar_t__ sub_loop_counter; int * dist_context_map_slice; int * context_map_slice; int * dist_context_map; int * context_modes; int * context_map; scalar_t__ ringbuffer_mask; scalar_t__ new_ringbuffer_size; scalar_t__ ringbuffer_size; int * ringbuffer; scalar_t__ partial_pos_out; scalar_t__ rb_roundtrips; scalar_t__ pos; scalar_t__ loop_counter; scalar_t__ buffer_length; int dictionary; int substate_read_block_length; int substate_decode_uint8; int substate_huffman; int substate_uncompressed; int substate_context_map; int substate_tree_group; int substate_metablock_header; int state; int br; scalar_t__ error_code; void* memory_manager_opaque; int free_func; scalar_t__ alloc_func; } ;
typedef TYPE_4__ BrotliDecoderState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

void FUNC_2(BrotliDecoderState* VAR_11,
    brotli_alloc_func VAR_12, brotli_free_func VAR_13, void* VAR_14) {
  if (!VAR_12) {
    VAR_11->alloc_func = VAR_9;
    VAR_11->free_func = VAR_10;
    VAR_11->memory_manager_opaque = 0;
  } else {
    VAR_11->alloc_func = VAR_12;
    VAR_11->free_func = VAR_13;
    VAR_11->memory_manager_opaque = VAR_14;
  }

  VAR_11->error_code = 0;

  FUNC_1(&VAR_11->br);
  VAR_11->state = VAR_8;
  VAR_11->substate_metablock_header = VAR_4;
  VAR_11->substate_tree_group = VAR_6;
  VAR_11->substate_context_map = VAR_1;
  VAR_11->substate_uncompressed = VAR_7;
  VAR_11->substate_huffman = VAR_3;
  VAR_11->substate_decode_uint8 = VAR_2;
  VAR_11->substate_read_block_length = VAR_5;

  VAR_11->dictionary = FUNC_0();

  VAR_11->buffer_length = 0;
  VAR_11->loop_counter = 0;
  VAR_11->pos = 0;
  VAR_11->rb_roundtrips = 0;
  VAR_11->partial_pos_out = 0;

  VAR_11->block_type_trees = ((void*)0);
  VAR_11->block_len_trees = ((void*)0);
  VAR_11->ringbuffer = ((void*)0);
  VAR_11->ringbuffer_size = 0;
  VAR_11->new_ringbuffer_size = 0;
  VAR_11->ringbuffer_mask = 0;

  VAR_11->context_map = ((void*)0);
  VAR_11->context_modes = ((void*)0);
  VAR_11->dist_context_map = ((void*)0);
  VAR_11->context_map_slice = ((void*)0);
  VAR_11->dist_context_map_slice = ((void*)0);

  VAR_11->sub_loop_counter = 0;

  VAR_11->literal_hgroup.codes = ((void*)0);
  VAR_11->literal_hgroup.htrees = ((void*)0);
  VAR_11->insert_copy_hgroup.codes = ((void*)0);
  VAR_11->insert_copy_hgroup.htrees = ((void*)0);
  VAR_11->distance_hgroup.codes = ((void*)0);
  VAR_11->distance_hgroup.htrees = ((void*)0);

  VAR_11->is_last_metablock = 0;
  VAR_11->is_uncompressed = 0;
  VAR_11->is_metadata = 0;
  VAR_11->should_wrap_ringbuffer = 0;
  VAR_11->canny_ringbuffer_allocation = 1;

  VAR_11->window_bits = 0;
  VAR_11->max_distance = 0;
  VAR_11->dist_rb[0] = 16;
  VAR_11->dist_rb[1] = 15;
  VAR_11->dist_rb[2] = 11;
  VAR_11->dist_rb[3] = 4;
  VAR_11->dist_rb_idx = 0;
  VAR_11->block_type_trees = ((void*)0);
  VAR_11->block_len_trees = ((void*)0);


  VAR_11->symbol_lists = &VAR_11->symbols_lists_array[VAR_0 + 1];

  VAR_11->mtf_upper_bound = 63;
}
