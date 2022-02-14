
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int type_code_calculator; } ;
struct TYPE_5__ {size_t alphabet_size_; size_t num_block_types_; size_t num_blocks_; scalar_t__ bits_; scalar_t__ depths_; scalar_t__ entropy_ix_; int block_len_; scalar_t__ block_ix_; TYPE_1__ block_split_code_; int const* block_lengths_; int const* block_types_; } ;
typedef TYPE_2__ BlockEncoder ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(BlockEncoder* VAR_0, size_t VAR_1,
    size_t VAR_2, const uint8_t* VAR_3,
    const uint32_t* VAR_4, const size_t VAR_5) {
  VAR_0->alphabet_size_ = VAR_1;
  VAR_0->num_block_types_ = VAR_2;
  VAR_0->block_types_ = VAR_3;
  VAR_0->block_lengths_ = VAR_4;
  VAR_0->num_blocks_ = VAR_5;
  FUNC_0(&VAR_0->block_split_code_.type_code_calculator);
  VAR_0->block_ix_ = 0;
  VAR_0->block_len_ = VAR_5 == 0 ? 0 : VAR_4[0];
  VAR_0->entropy_ix_ = 0;
  VAR_0->depths_ = 0;
  VAR_0->bits_ = 0;
}
