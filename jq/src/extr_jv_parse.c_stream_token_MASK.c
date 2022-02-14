
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {void* last_seen; int stacklen; void* path; void* output; void* next; } ;
typedef char* pfunc ;
typedef int jv_kind ;
typedef void* jv ;


 void* FUNC_0 (int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (int) ;
 void* FUNC_2 () ;
 void* FUNC_3 (void*,void*) ;
 void* FUNC_4 (int ,int ) ;
 void* FUNC_5 (void*,int ,void*) ;
 void* FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 () ;
 int FUNC_11 (void*) ;
 void* FUNC_12 () ;
 void* FUNC_13 (int) ;
 int FUNC_14 (void*) ;
 void* FUNC_15 () ;
 void* FUNC_16 () ;

__attribute__((used)) static pfunc FUNC_17(struct jv_parser* VAR_9, char VAR_10) {
  jv_kind VAR_11;
  jv VAR_12;

  switch (VAR_10) {
  case '[':
    if (FUNC_11(VAR_9->next))
      return "Expected a separator between values";
    VAR_9->path = FUNC_3(VAR_9->path, FUNC_13(0));
    VAR_9->last_seen = VAR_6;
    VAR_9->stacklen++;
    break;

  case '{':
    if (VAR_9->last_seen == VAR_8)
      return "Expected a separator between values";

    VAR_9->path = FUNC_3(VAR_9->path, FUNC_12());
    VAR_9->last_seen = VAR_7;
    VAR_9->stacklen++;
    break;

  case ':':
    VAR_12 = FUNC_10();
    if (VAR_9->stacklen == 0 || FUNC_9(VAR_12 = FUNC_4(FUNC_7(VAR_9->path), VAR_9->stacklen - 1)) == VAR_1) {
      FUNC_8(VAR_12);
      return "':' not as part of an object";
    }
    FUNC_8(VAR_12);
    if (!FUNC_11(VAR_9->next) || VAR_9->last_seen == VAR_5)
      return "Expected string key before ':'";
    if (FUNC_9(VAR_9->next) != VAR_2)
      return "Object keys must be strings";
    if (VAR_9->last_seen != VAR_8)
      return "':' should follow a key";
    VAR_9->last_seen = VAR_3;
    VAR_9->path = FUNC_5(VAR_9->path, VAR_9->stacklen - 1, VAR_9->next);
    VAR_9->next = FUNC_10();
    break;

  case ',':
    if (VAR_9->last_seen != VAR_8)
      return "Expected value before ','";
    if (VAR_9->stacklen == 0)
      return "',' not as part of an object or array";
    VAR_12 = FUNC_4(FUNC_7(VAR_9->path), VAR_9->stacklen - 1);
    VAR_11 = FUNC_9(VAR_12);
    if (VAR_11 == VAR_1) {
      int VAR_13 = FUNC_14(VAR_12);

      if (FUNC_11(VAR_9->next)) {
        VAR_9->output = FUNC_0(FUNC_7(VAR_9->path), VAR_9->next);
        VAR_9->next = FUNC_10();
      }
      VAR_9->path = FUNC_5(VAR_9->path, VAR_9->stacklen - 1, FUNC_13(VAR_13 + 1));
      VAR_9->last_seen = VAR_4;
    } else if (VAR_11 == VAR_2) {
      if (FUNC_11(VAR_9->next)) {
        VAR_9->output = FUNC_0(FUNC_7(VAR_9->path), VAR_9->next);
        VAR_9->next = FUNC_10();
      }
      VAR_9->path = FUNC_5(VAR_9->path, VAR_9->stacklen - 1, FUNC_16());
      VAR_9->last_seen = VAR_4;
    } else {
      FUNC_1(VAR_11 == VAR_0);


      FUNC_8(VAR_12);
      return "Objects must consist of key:value pairs";
    }
    FUNC_8(VAR_12);
    break;

  case ']':
    if (VAR_9->stacklen == 0)
      return "Unmatched ']' at the top-level";
    if (VAR_9->last_seen == VAR_4)
      return "Expected another array element";
    if (VAR_9->last_seen == VAR_6)
      FUNC_1(!FUNC_11(VAR_9->next));

    VAR_12 = FUNC_4(FUNC_7(VAR_9->path), VAR_9->stacklen - 1);
    VAR_11 = FUNC_9(VAR_12);
    FUNC_8(VAR_12);

    if (VAR_11 != VAR_1)
      return "Unmatched ']' in the middle of an object";
    if (FUNC_11(VAR_9->next)) {
      VAR_9->output = FUNC_0(FUNC_7(VAR_9->path), VAR_9->next, FUNC_16());
      VAR_9->next = FUNC_10();
    } else if (VAR_9->last_seen != VAR_6) {
      VAR_9->output = FUNC_0(FUNC_7(VAR_9->path));
    }

    VAR_9->path = FUNC_6(VAR_9->path, 0, --(VAR_9->stacklen));

    FUNC_8(VAR_9->next);
    VAR_9->next = FUNC_10();

    if (VAR_9->last_seen == VAR_6)
      VAR_9->output = FUNC_0(FUNC_7(VAR_9->path), FUNC_2());

    if (VAR_9->stacklen == 0)
      VAR_9->last_seen = VAR_5;
    else
      VAR_9->last_seen = VAR_8;
    break;

  case '}':
    if (VAR_9->stacklen == 0)
      return "Unmatched '}' at the top-level";
    if (VAR_9->last_seen == VAR_4)
      return "Expected another key:value pair";
    if (VAR_9->last_seen == VAR_7)
      FUNC_1(!FUNC_11(VAR_9->next));

    VAR_12 = FUNC_4(FUNC_7(VAR_9->path), VAR_9->stacklen - 1);
    VAR_11 = FUNC_9(VAR_12);
    FUNC_8(VAR_12);
    if (VAR_11 == VAR_1)
      return "Unmatched '}' in the middle of an array";

    if (FUNC_11(VAR_9->next)) {
      if (VAR_11 != VAR_2)
        return "Objects must consist of key:value pairs";
      VAR_9->output = FUNC_0(FUNC_7(VAR_9->path), VAR_9->next, FUNC_16());
      VAR_9->next = FUNC_10();
    } else {

      if (VAR_9->last_seen == VAR_3)

        return "Missing value in key:value pair";
      if (VAR_9->last_seen == VAR_4)

        return "Expected another key-value pair";
      if (VAR_9->last_seen == VAR_6)
        return "Unmatched '}' in the middle of an array";
      if (VAR_9->last_seen != VAR_8 && VAR_9->last_seen != VAR_7)
        return "Unmatched '}'";
      if (VAR_9->last_seen != VAR_7)
        VAR_9->output = FUNC_0(FUNC_7(VAR_9->path));
    }
    VAR_9->path = FUNC_6(VAR_9->path, 0, --(VAR_9->stacklen));
    FUNC_8(VAR_9->next);
    VAR_9->next = FUNC_10();

    if (VAR_9->last_seen == VAR_7)
      VAR_9->output = FUNC_0(FUNC_7(VAR_9->path), FUNC_15());

    if (VAR_9->stacklen == 0)
      VAR_9->last_seen = VAR_5;
    else
      VAR_9->last_seen = VAR_8;
    break;
  }
  return 0;
}
