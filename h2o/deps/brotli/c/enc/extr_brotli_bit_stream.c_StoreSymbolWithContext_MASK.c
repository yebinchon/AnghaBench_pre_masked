
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {scalar_t__ block_len_; size_t block_ix_; size_t* block_lengths_; size_t entropy_ix_; size_t alphabet_size_; int * bits_; int * depths_; int block_split_code_; scalar_t__* block_types_; } ;
typedef TYPE_1__ BlockEncoder ;


 int FUNC_0 (int ,int ,size_t*,scalar_t__*) ;
 int FUNC_1 (int *,size_t,scalar_t__,int ,size_t*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(BlockEncoder* VAR_0, size_t VAR_1,
    size_t VAR_2, const uint32_t* VAR_3, size_t* VAR_4,
    uint8_t* VAR_5, const size_t VAR_6) {
  if (VAR_0->block_len_ == 0) {
    size_t VAR_7 = ++VAR_0->block_ix_;
    uint32_t VAR_8 = VAR_0->block_lengths_[VAR_7];
    uint8_t VAR_9 = VAR_0->block_types_[VAR_7];
    VAR_0->block_len_ = VAR_8;
    VAR_0->entropy_ix_ = (size_t)VAR_9 << VAR_6;
    FUNC_1(&VAR_0->block_split_code_, VAR_8, VAR_9, 0,
        VAR_4, VAR_5);
  }
  --VAR_0->block_len_;
  {
    size_t VAR_10 = VAR_3[VAR_0->entropy_ix_ + VAR_2];
    size_t VAR_11 = VAR_10 * VAR_0->alphabet_size_ + VAR_1;
    FUNC_0(VAR_0->depths_[VAR_11], VAR_0->bits_[VAR_11], VAR_4, VAR_5);
  }
}
