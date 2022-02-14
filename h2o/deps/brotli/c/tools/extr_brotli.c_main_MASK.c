
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_5__ {int quality; int longest_path_len; int argc; char** argv; char* modified_path; char* buffer; char* input; char* output; void* iterator_error; int suffix; int * fout; int * fin; int * current_output_path; int * current_input_path; scalar_t__ ignore; scalar_t__ iterator; scalar_t__ input_count; scalar_t__* not_input_indices; int * output_path; void* decompress; void* write_to_stdout; void* verbose; void* test_integrity; void* copy_stat; void* junk_source; void* force_overwrite; int lgwin; } ;
typedef TYPE_1__ Context ;
typedef int Command ;
typedef int BROTLI_BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;







 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;

int FUNC_11(int VAR_7, char** VAR_8) {
  Command VAR_9;
  Context VAR_10;
  BROTLI_BOOL VAR_11 = VAR_1;
  int VAR_12;

  VAR_10.quality = 11;
  VAR_10.lgwin = VAR_2;
  VAR_10.force_overwrite = VAR_0;
  VAR_10.junk_source = VAR_0;
  VAR_10.copy_stat = VAR_1;
  VAR_10.test_integrity = VAR_0;
  VAR_10.verbose = VAR_0;
  VAR_10.write_to_stdout = VAR_0;
  VAR_10.decompress = VAR_0;
  VAR_10.output_path = ((void*)0);
  VAR_10.suffix = VAR_3;
  for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) VAR_10.not_input_indices[VAR_12] = 0;
  VAR_10.longest_path_len = 1;
  VAR_10.input_count = 0;

  VAR_10.argc = VAR_7;
  VAR_10.argv = VAR_8;
  VAR_10.modified_path = ((void*)0);
  VAR_10.iterator = 0;
  VAR_10.ignore = 0;
  VAR_10.iterator_error = VAR_0;
  VAR_10.buffer = ((void*)0);
  VAR_10.current_input_path = ((void*)0);
  VAR_10.current_output_path = ((void*)0);
  VAR_10.fin = ((void*)0);
  VAR_10.fout = ((void*)0);

  VAR_9 = FUNC_3(&VAR_10);

  if (VAR_9 == 134 || VAR_9 == 133 ||
      VAR_9 == 129) {
    if (VAR_11) {
      size_t VAR_13 =
          VAR_10.longest_path_len + FUNC_10(VAR_10.suffix) + 1;
      VAR_10.modified_path = (char*)FUNC_9(VAR_13);
      VAR_10.buffer = (uint8_t*)FUNC_9(VAR_5 * 2);
      if (!VAR_10.modified_path || !VAR_10.buffer) {
        FUNC_7(VAR_6, "out of memory\n");
        VAR_11 = VAR_0;
      } else {
        VAR_10.input = VAR_10.buffer;
        VAR_10.output = VAR_10.buffer + VAR_5;
      }
    }
  }

  if (!VAR_11) VAR_9 = 130;

  switch (VAR_9) {
    case 130:
      break;

    case 128:
      FUNC_5();
      break;

    case 134:
      VAR_11 = FUNC_0(&VAR_10);
      break;

    case 133:
    case 129:
      VAR_11 = FUNC_1(&VAR_10);
      break;

    case 132:
    case 131:
    default:
      FUNC_4(FUNC_2(VAR_8[0]));
      VAR_11 = (VAR_9 == 132);
      break;
  }

  if (VAR_10.iterator_error) VAR_11 = VAR_0;

  FUNC_8(VAR_10.modified_path);
  FUNC_8(VAR_10.buffer);

  if (!VAR_11) FUNC_6(1);
  return 0;
}
