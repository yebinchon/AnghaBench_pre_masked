
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int input_pos_; int last_processed_pos_; } ;
typedef TYPE_1__ BrotliEncoderState ;
typedef int BROTLI_BOOL ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static BROTLI_BOOL FUNC_2(BrotliEncoderState* VAR_0) {
  uint32_t VAR_1 = FUNC_1(VAR_0->last_processed_pos_);
  uint32_t VAR_2 = FUNC_1(VAR_0->input_pos_);
  VAR_0->last_processed_pos_ = VAR_0->input_pos_;
  return FUNC_0(VAR_2 < VAR_1);
}
