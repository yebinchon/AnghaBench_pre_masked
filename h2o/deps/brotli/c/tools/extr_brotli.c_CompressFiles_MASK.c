
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int force_overwrite; int current_output_path; scalar_t__ lgwin; scalar_t__ quality; } ;
typedef TYPE_1__ Context ;
typedef int BrotliEncoderState ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_5 ;

__attribute__((used)) static BROTLI_BOOL FUNC_9(Context* VAR_6) {
  while (FUNC_5(VAR_6)) {
    BROTLI_BOOL VAR_7 = VAR_3;
    BrotliEncoderState* VAR_8 = FUNC_0(((void*)0), ((void*)0), ((void*)0));
    if (!VAR_8) {
      FUNC_7(VAR_5, "out of memory\n");
      return VAR_0;
    }
    FUNC_2(VAR_8,
        VAR_2, (uint32_t)VAR_6->quality);
    FUNC_2(VAR_8,
        VAR_1, (uint32_t)VAR_6->lgwin);
    VAR_7 = FUNC_6(VAR_6);
    if (VAR_7 && !VAR_6->current_output_path &&
        !VAR_6->force_overwrite && FUNC_8(VAR_4)) {
      FUNC_7(VAR_5, "Use -h help. Use -f to force output to a terminal.\n");
      VAR_7 = VAR_0;
    }
    if (VAR_7) VAR_7 = FUNC_4(VAR_6, VAR_8);
    FUNC_1(VAR_8);
    if (!FUNC_3(VAR_6, VAR_7)) VAR_7 = VAR_0;
    if (!VAR_7) return VAR_0;
  }
  return VAR_3;
}
