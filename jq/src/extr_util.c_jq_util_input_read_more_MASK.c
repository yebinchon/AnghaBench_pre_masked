
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; size_t buf_valid_len; scalar_t__ curr_file; scalar_t__ nfiles; int * current_input; int * parser; scalar_t__ current_line; int failures; int err_cb_data; int (* err_cb ) (int ,char const*) ;void* current_filename; } ;
typedef TYPE_1__ jq_util_input_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 () ;
 void* FUNC_9 (char const*) ;
 char* FUNC_10 (char*,char,int) ;
 int FUNC_11 (char*,int,int) ;
 char* FUNC_12 (TYPE_1__*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_13 (char const*,char*) ;
 char* FUNC_14 (scalar_t__) ;
 size_t FUNC_15 (char*) ;
 int FUNC_16 (int ,char const*) ;

__attribute__((used)) static int FUNC_17(jq_util_input_state *VAR_4) {
  if (!VAR_4->current_input || FUNC_2(VAR_4->current_input) || FUNC_3(VAR_4->current_input)) {
    if (VAR_4->current_input && FUNC_3(VAR_4->current_input)) {



      FUNC_6(VAR_2,"jq: error: %s\n", FUNC_14(VAR_1));
    }
    if (VAR_4->current_input) {
      if (VAR_4->current_input == VAR_3) {
        FUNC_0(VAR_3);
      } else {
        FUNC_1(VAR_4->current_input);
      }
      VAR_4->current_input = ((void*)0);
      FUNC_7(VAR_4->current_filename);
      VAR_4->current_filename = FUNC_8();
      VAR_4->current_line = 0 ;
    }
    const char *VAR_5 = FUNC_12(VAR_4);
    if (VAR_5 != ((void*)0)) {
      if (!FUNC_13(VAR_5, "-")) {
        VAR_4->current_input = VAR_3;
        VAR_4->current_filename = FUNC_9("<stdin>");
      } else {
        VAR_4->current_input = FUNC_5(VAR_5, "r");
        VAR_4->current_filename = FUNC_9(VAR_5);
        if (!VAR_4->current_input) {
          VAR_4->err_cb(VAR_4->err_cb_data, VAR_5);
          VAR_4->failures++;
        }
      }
      VAR_4->current_line = 0;
    }
  }

  VAR_4->buf[0] = 0;
  VAR_4->buf_valid_len = 0;
  if (VAR_4->current_input) {
    char *VAR_6;
    FUNC_11(VAR_4->buf, 0xff, sizeof(VAR_4->buf));

    while (!(VAR_6 = FUNC_4(VAR_4->buf, sizeof(VAR_4->buf), VAR_4->current_input)) &&
           FUNC_3(VAR_4->current_input) && VAR_1 == VAR_0)
      FUNC_0(VAR_4->current_input);
    if (VAR_6 == ((void*)0)) {
      VAR_4->buf[0] = 0;
      if (FUNC_3(VAR_4->current_input))
        VAR_4->failures++;
    } else {
      const char *VAR_7 = FUNC_10(VAR_4->buf, '\n', sizeof(VAR_4->buf));

      if (VAR_7 != ((void*)0))
        VAR_4->current_line++;

      if (VAR_7 == ((void*)0) && VAR_4->parser != ((void*)0)) {




        VAR_4->buf_valid_len = FUNC_15(VAR_4->buf);
      } else if (VAR_7 == ((void*)0) && FUNC_2(VAR_4->current_input)) {
        size_t VAR_8;
        for (VAR_7 = VAR_4->buf, VAR_8 = sizeof(VAR_4->buf) - 1; VAR_8 > 0; VAR_8--) {
          if (VAR_4->buf[VAR_8] == '\0')
            break;
        }
        VAR_4->buf_valid_len = VAR_8;
      } else if (VAR_7 == ((void*)0)) {
        VAR_4->buf_valid_len = sizeof(VAR_4->buf) - 1;
      } else {
        VAR_4->buf_valid_len = (VAR_7 - VAR_4->buf) + 1;
      }
    }
  }
  return VAR_4->curr_file == VAR_4->nfiles &&
      (!VAR_4->current_input || FUNC_2(VAR_4->current_input) || FUNC_3(VAR_4->current_input));
}
