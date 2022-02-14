
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ block_len_; size_t block_ix_; scalar_t__* block_lengths_; int* block_types_; int entropy_ix_; int alphabet_size_; int * bits_; int * depths_; int block_split_code_; } ;
typedef TYPE_1__ BlockEncoder ;


 int FUNC_0 (int ,int ,size_t*,int*) ;
 int FUNC_1 (int *,scalar_t__,int,int ,size_t*,int*) ;

__attribute__((used)) static void FUNC_2(BlockEncoder* VAR_0, size_t VAR_1, size_t* VAR_2,
    uint8_t* VAR_3) {
  if (VAR_0->block_len_ == 0) {
    size_t VAR_4 = ++VAR_0->block_ix_;
    uint32_t VAR_5 = VAR_0->block_lengths_[VAR_4];
    uint8_t VAR_6 = VAR_0->block_types_[VAR_4];
    VAR_0->block_len_ = VAR_5;
    VAR_0->entropy_ix_ = VAR_6 * VAR_0->alphabet_size_;
    FUNC_1(&VAR_0->block_split_code_, VAR_5, VAR_6, 0,
        VAR_2, VAR_3);
  }
  --VAR_0->block_len_;
  {
    size_t VAR_7 = VAR_0->entropy_ix_ + VAR_1;
    FUNC_0(VAR_0->depths_[VAR_7], VAR_0->bits_[VAR_7], VAR_2, VAR_3);
  }
}
