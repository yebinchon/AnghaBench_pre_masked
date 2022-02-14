
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int force_overwrite; int fout; int current_output_path; int test_integrity; int fin; int current_input_path; } ;
typedef TYPE_1__ Context ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static BROTLI_BOOL FUNC_2(Context* VAR_0) {
  BROTLI_BOOL VAR_1 = FUNC_0(VAR_0->current_input_path, &VAR_0->fin);
  if (!VAR_0->test_integrity && VAR_1) {
    VAR_1 = FUNC_1(
        VAR_0->current_output_path, &VAR_0->fout, VAR_0->force_overwrite);
  }
  return VAR_1;
}
