
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ length_; size_t idx_; TYPE_1__* split_; int type_; } ;
struct TYPE_4__ {scalar_t__* lengths; int * types; } ;
typedef TYPE_2__ BlockSplitIterator ;



__attribute__((used)) static void FUNC_0(BlockSplitIterator* VAR_0) {
  if (VAR_0->length_ == 0) {
    ++VAR_0->idx_;
    VAR_0->type_ = VAR_0->split_->types[VAR_0->idx_];
    VAR_0->length_ = VAR_0->split_->lengths[VAR_0->idx_];
  }
  --VAR_0->length_;
}
