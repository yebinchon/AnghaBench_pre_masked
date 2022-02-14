
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * output; int current_output_path; int fout; int current_input_path; int fin; int * input; } ;
typedef TYPE_1__ Context ;
typedef int BrotliEncoderState ;
typedef scalar_t__ BROTLI_BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,size_t*,int const**,size_t*,int **,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,...) ;
 size_t FUNC_6 (int *,int,size_t,int ) ;
 int FUNC_7 (int *,int,size_t,int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static BROTLI_BOOL FUNC_9(Context* VAR_7, BrotliEncoderState* VAR_8) {
  size_t VAR_9 = 0;
  const uint8_t* VAR_10 = ((void*)0);
  size_t VAR_11 = VAR_5;
  uint8_t* VAR_12 = VAR_7->output;
  BROTLI_BOOL VAR_13 = VAR_0;

  for (;;) {
    if (VAR_9 == 0 && !VAR_13) {
      VAR_9 = FUNC_6(VAR_7->input, 1, VAR_5, VAR_7->fin);
      VAR_10 = VAR_7->input;
      if (FUNC_4(VAR_7->fin)) {
        FUNC_5(VAR_6, "failed to read input [%s]: %s\n",
                FUNC_2(VAR_7->current_input_path), FUNC_8(VAR_4));
        return VAR_0;
      }
      VAR_13 = FUNC_3(VAR_7->fin) ? VAR_3 : VAR_0;
    }

    if (!FUNC_0(VAR_8,
        VAR_13 ? VAR_1 : VAR_2,
        &VAR_9, &VAR_10, &VAR_11, &VAR_12, ((void*)0))) {

      FUNC_5(VAR_6, "failed to compress data [%s]\n",
              FUNC_2(VAR_7->current_input_path));
      return VAR_0;
    }

    if (VAR_11 != VAR_5) {
      size_t VAR_14 = VAR_5 - VAR_11;
      FUNC_7(VAR_7->output, 1, VAR_14, VAR_7->fout);
      if (FUNC_4(VAR_7->fout)) {
        FUNC_5(VAR_6, "failed to write output [%s]: %s\n",
                FUNC_2(VAR_7->current_output_path), FUNC_8(VAR_4));
        return VAR_0;
      }
      VAR_11 = VAR_5;
      VAR_12 = VAR_7->output;
    }

    if (FUNC_1(VAR_8)) return VAR_3;
  }
}
