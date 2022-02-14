
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t curr_histogram_ix_; scalar_t__ block_size_; scalar_t__ target_block_size_; int * histograms_; } ;
typedef int MemoryManager ;
typedef TYPE_1__ ContextBlockSplitter ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int *,size_t) ;

__attribute__((used)) static void FUNC_3(
    ContextBlockSplitter* VAR_1, MemoryManager* VAR_2,
    size_t VAR_3, size_t VAR_4) {
  FUNC_2(&VAR_1->histograms_[VAR_1->curr_histogram_ix_ + VAR_4],
      VAR_3);
  ++VAR_1->block_size_;
  if (VAR_1->block_size_ == VAR_1->target_block_size_) {
    FUNC_1(VAR_1, VAR_2, VAR_0);
    if (FUNC_0(VAR_2)) return;
  }
}
