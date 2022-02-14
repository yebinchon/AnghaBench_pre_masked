
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int force_overwrite; int current_input_path; } ;
typedef TYPE_1__ Context ;
typedef int BrotliDecoderState ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;

__attribute__((used)) static BROTLI_BOOL FUNC_8(Context* VAR_4) {
  while (FUNC_4(VAR_4)) {
    BROTLI_BOOL VAR_5 = VAR_1;
    BrotliDecoderState* VAR_6 = FUNC_0(((void*)0), ((void*)0), ((void*)0));
    if (!VAR_6) {
      FUNC_6(VAR_3, "out of memory\n");
      return VAR_0;
    }
    VAR_5 = FUNC_5(VAR_4);
    if (VAR_5 && !VAR_4->current_input_path &&
        !VAR_4->force_overwrite && FUNC_7(VAR_2)) {
      FUNC_6(VAR_3, "Use -h help. Use -f to force input from a terminal.\n");
      VAR_5 = VAR_0;
    }
    if (VAR_5) VAR_5 = FUNC_3(VAR_4, VAR_6);
    FUNC_1(VAR_6);
    if (!FUNC_2(VAR_4, VAR_5)) VAR_5 = VAR_0;
    if (!VAR_5) return VAR_0;
  }
  return VAR_1;
}
