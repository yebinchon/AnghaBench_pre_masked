
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ last_processed_pos_; scalar_t__ input_pos_; } ;
typedef TYPE_1__ BrotliEncoderState ;



__attribute__((used)) static uint64_t FUNC_0(BrotliEncoderState* VAR_0) {
  return VAR_0->input_pos_ - VAR_0->last_processed_pos_;
}
