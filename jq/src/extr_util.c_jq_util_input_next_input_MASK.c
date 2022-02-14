
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* jv ;
struct TYPE_4__ {scalar_t__ buf_valid_len; char* buf; void* slurped; int * parser; } ;
typedef TYPE_1__ jq_util_input_state ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*,void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (void*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,scalar_t__,int) ;
 void* FUNC_9 (char*) ;
 void* FUNC_10 (void*,int ) ;
 int FUNC_11 (char*,scalar_t__) ;

jv FUNC_12(jq_util_input_state *VAR_0) {
  int VAR_1 = 0;
  int VAR_2 = 0;
  jv VAR_3 = FUNC_3();
  do {
    if (VAR_0->parser == ((void*)0)) {

      VAR_1 = FUNC_0(VAR_0);
      if (VAR_0->buf_valid_len == 0)
        continue;
      if (FUNC_5(VAR_0->slurped)) {

        VAR_0->slurped = FUNC_10(VAR_0->slurped, FUNC_11(VAR_0->buf, VAR_0->buf_valid_len));
      } else {
        if (!FUNC_5(VAR_3))
          VAR_3 = FUNC_9("");
        if (VAR_0->buf[VAR_0->buf_valid_len-1] == '\n') {

          VAR_0->buf[VAR_0->buf_valid_len-1] = 0;
          return FUNC_10(VAR_3, FUNC_11(VAR_0->buf, VAR_0->buf_valid_len-1));
        }
        VAR_3 = FUNC_10(VAR_3, FUNC_11(VAR_0->buf, VAR_0->buf_valid_len));
        VAR_0->buf[0] = '\0';
        VAR_0->buf_valid_len = 0;
      }
    } else {
      if (FUNC_7(VAR_0->parser) == 0) {
        VAR_1 = FUNC_0(VAR_0);
        if (VAR_1 && VAR_0->buf_valid_len == 0)
          VAR_3 = FUNC_3();
        FUNC_8(VAR_0->parser, VAR_0->buf, VAR_0->buf_valid_len, !VAR_1);
      }
      VAR_3 = FUNC_6(VAR_0->parser);
      if (FUNC_5(VAR_0->slurped)) {



        VAR_2 = FUNC_7(VAR_0->parser);
        if (FUNC_5(VAR_3)) {
          VAR_0->slurped = FUNC_1(VAR_0->slurped, VAR_3);
          VAR_3 = FUNC_3();
        } else if (FUNC_4(FUNC_2(VAR_3)))
          return VAR_3;
      } else if (FUNC_5(VAR_3) || FUNC_4(FUNC_2(VAR_3))) {
        return VAR_3;
      }
    }
  } while (!VAR_1 || VAR_2);

  if (FUNC_5(VAR_0->slurped)) {
    VAR_3 = VAR_0->slurped;
    VAR_0->slurped = FUNC_3();
  }
  return VAR_3;
}
