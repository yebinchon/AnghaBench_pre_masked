
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc; char** argv; int* not_input_indices; char quality; char* output_path; scalar_t__ lgwin; char* suffix; size_t input_count; size_t longest_path_len; int decompress; int test_integrity; void* write_to_stdout; void* verbose; void* junk_source; void* copy_stat; void* force_overwrite; } ;
typedef TYPE_1__ Context ;
typedef scalar_t__ Command ;
typedef void* BROTLI_BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (char*) ;
 void* FUNC_1 (char const*,int ,int ,scalar_t__*) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static Command FUNC_8(Context* VAR_12) {
  int VAR_13 = VAR_12->argc;
  char** VAR_14 = VAR_12->argv;
  int VAR_15;
  int VAR_16 = 0;
  size_t VAR_17 = 0;
  size_t VAR_18 = 1;
  BROTLI_BOOL VAR_19 = VAR_0;
  BROTLI_BOOL VAR_20 = VAR_0;
  BROTLI_BOOL VAR_21 = VAR_0;
  BROTLI_BOOL VAR_22 = VAR_0;
  BROTLI_BOOL VAR_23 = VAR_0;
  BROTLI_BOOL VAR_24 = VAR_0;
  BROTLI_BOOL VAR_25 = VAR_0;
  Command VAR_26 = FUNC_0(VAR_14[0]);

  for (VAR_15 = 1; VAR_15 < VAR_13; ++VAR_15) {
    const char* VAR_27 = VAR_14[VAR_15];


    size_t VAR_28 = VAR_27 ? FUNC_5(VAR_27) : 0;

    if (VAR_28 == 0) {
      VAR_12->not_input_indices[VAR_16++] = VAR_15;
      continue;
    }





    if (VAR_16 > (VAR_11 - 2)) {
      return VAR_8;
    }


    if (VAR_25 || VAR_27[0] != '-' || VAR_28 == 1) {
      VAR_17++;
      if (VAR_18 < VAR_28) VAR_18 = VAR_28;
      continue;
    }


    VAR_12->not_input_indices[VAR_16++] = VAR_15;


    if (VAR_28 == 2 && VAR_27[1] == '-') {
      VAR_25 = VAR_5;
      continue;
    }


    if (VAR_27[1] != '-') {
      size_t VAR_29;
      for (VAR_29 = 1; VAR_29 < VAR_28; ++VAR_29) {
        char VAR_30 = VAR_27[VAR_29];
        if (VAR_30 >= '0' && VAR_30 <= '9') {
          if (VAR_20) return VAR_8;
          VAR_20 = VAR_5;
          VAR_12->quality = VAR_30 - '0';
          continue;
        } else if (VAR_30 == 'c') {
          if (VAR_21) return VAR_8;
          VAR_21 = VAR_5;
          VAR_12->write_to_stdout = VAR_5;
          continue;
        } else if (VAR_30 == 'd') {
          if (VAR_19) return VAR_8;
          VAR_19 = VAR_5;
          VAR_26 = VAR_6;
          continue;
        } else if (VAR_30 == 'f') {
          if (VAR_12->force_overwrite) return VAR_8;
          VAR_12->force_overwrite = VAR_5;
          continue;
        } else if (VAR_30 == 'h') {

          return VAR_7;
        } else if (VAR_30 == 'j' || VAR_30 == 'k') {
          if (VAR_22) return VAR_8;
          VAR_22 = VAR_5;
          VAR_12->junk_source = FUNC_2(VAR_30 == 'j');
          continue;
        } else if (VAR_30 == 'n') {
          if (!VAR_12->copy_stat) return VAR_8;
          VAR_12->copy_stat = VAR_0;
          continue;
        } else if (VAR_30 == 't') {
          if (VAR_19) return VAR_8;
          VAR_19 = VAR_5;
          VAR_26 = VAR_9;
          continue;
        } else if (VAR_30 == 'v') {
          if (VAR_12->verbose) return VAR_8;
          VAR_12->verbose = VAR_5;
          continue;
        } else if (VAR_30 == 'V') {

          return VAR_10;
        } else if (VAR_30 == 'Z') {
          if (VAR_20) return VAR_8;
          VAR_20 = VAR_5;
          VAR_12->quality = 11;
          continue;
        }

        if (VAR_30 != 'o' && VAR_30 != 'q' && VAR_30 != 'w' && VAR_30 != 'D' && VAR_30 != 'S') {
          return VAR_8;
        }
        if (VAR_29 + 1 != VAR_28) return VAR_8;
        VAR_15++;
        if (VAR_15 == VAR_13 || !VAR_14[VAR_15] || VAR_14[VAR_15][0] == 0) return VAR_8;
        VAR_12->not_input_indices[VAR_16++] = VAR_15;
        if (VAR_30 == 'o') {
          if (VAR_21) return VAR_8;
          VAR_12->output_path = VAR_14[VAR_15];
        } else if (VAR_30 == 'q') {
          if (VAR_20) return VAR_8;
          VAR_20 = FUNC_1(VAR_14[VAR_15], VAR_3,
                                 VAR_1, &VAR_12->quality);
          if (!VAR_20) return VAR_8;
        } else if (VAR_30 == 'w') {
          if (VAR_23) return VAR_8;
          VAR_23 = FUNC_1(VAR_14[VAR_15], 0,
                               VAR_2, &VAR_12->lgwin);
          if (!VAR_23) return VAR_8;
          if (VAR_12->lgwin != 0 && VAR_12->lgwin < VAR_4) {
            return VAR_8;
          }
        } else if (VAR_30 == 'S') {
          if (VAR_24) return VAR_8;
          VAR_24 = VAR_5;
          VAR_12->suffix = VAR_14[VAR_15];
        }
      }
    } else {
      VAR_27 = &VAR_27[2];
      if (FUNC_4("best", VAR_27) == 0) {
        if (VAR_20) return VAR_8;
        VAR_20 = VAR_5;
        VAR_12->quality = 11;
      } else if (FUNC_4("decompress", VAR_27) == 0) {
        if (VAR_19) return VAR_8;
        VAR_19 = VAR_5;
        VAR_26 = VAR_6;
      } else if (FUNC_4("force", VAR_27) == 0) {
        if (VAR_12->force_overwrite) return VAR_8;
        VAR_12->force_overwrite = VAR_5;
      } else if (FUNC_4("help", VAR_27) == 0) {

        return VAR_7;
      } else if (FUNC_4("keep", VAR_27) == 0) {
        if (VAR_22) return VAR_8;
        VAR_22 = VAR_5;
        VAR_12->junk_source = VAR_0;
      } else if (FUNC_4("no-copy-stat", VAR_27) == 0) {
        if (!VAR_12->copy_stat) return VAR_8;
        VAR_12->copy_stat = VAR_0;
      } else if (FUNC_4("rm", VAR_27) == 0) {
        if (VAR_22) return VAR_8;
        VAR_22 = VAR_5;
        VAR_12->junk_source = VAR_5;
      } else if (FUNC_4("stdout", VAR_27) == 0) {
        if (VAR_21) return VAR_8;
        VAR_21 = VAR_5;
        VAR_12->write_to_stdout = VAR_5;
      } else if (FUNC_4("test", VAR_27) == 0) {
        if (VAR_19) return VAR_8;
        VAR_19 = VAR_5;
        VAR_26 = VAR_9;
      } else if (FUNC_4("verbose", VAR_27) == 0) {
        if (VAR_12->verbose) return VAR_8;
        VAR_12->verbose = VAR_5;
      } else if (FUNC_4("version", VAR_27) == 0) {

        return VAR_10;
      } else {

        const char* VAR_31 = FUNC_7(VAR_27, '=');
        size_t VAR_32;
        if (!VAR_31 || VAR_31[1] == 0) return VAR_8;
        VAR_32 = (size_t)(VAR_31 - VAR_27);
        VAR_31++;
        if (FUNC_6("lgwin", VAR_27, VAR_32) == 0) {
          if (VAR_23) return VAR_8;
          VAR_23 = FUNC_1(VAR_31, 0,
                               VAR_2, &VAR_12->lgwin);
          if (!VAR_23) return VAR_8;
          if (VAR_12->lgwin != 0 && VAR_12->lgwin < VAR_4) {
            return VAR_8;
          }
        } else if (FUNC_6("output", VAR_27, VAR_32) == 0) {
          if (VAR_21) return VAR_8;
          VAR_12->output_path = VAR_31;
        } else if (FUNC_6("quality", VAR_27, VAR_32) == 0) {
          if (VAR_20) return VAR_8;
          VAR_20 = FUNC_1(VAR_31, VAR_3,
                                 VAR_1, &VAR_12->quality);
          if (!VAR_20) return VAR_8;
        } else if (FUNC_6("suffix", VAR_27, VAR_32) == 0) {
          if (VAR_24) return VAR_8;
          VAR_24 = VAR_5;
          VAR_12->suffix = VAR_31;
        } else {
          return VAR_8;
        }
      }
    }
  }

  VAR_12->input_count = VAR_17;
  VAR_12->longest_path_len = VAR_18;
  VAR_12->decompress = (VAR_26 == VAR_6);
  VAR_12->test_integrity = (VAR_26 == VAR_9);

  if (VAR_17 > 1 && VAR_21) return VAR_8;
  if (VAR_12->test_integrity) {
    if (VAR_12->output_path) return VAR_8;
    if (VAR_12->write_to_stdout) return VAR_8;
  }
  if (FUNC_3(VAR_12->suffix, '/') || FUNC_3(VAR_12->suffix, '\\')) {
    return VAR_8;
  }

  return VAR_26;
}
