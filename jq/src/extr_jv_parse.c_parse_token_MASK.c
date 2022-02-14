
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int stackpos; void** stack; void* next; } ;
typedef char* pfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 () ;
 void* FUNC_2 (void*,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 () ;
 int FUNC_8 (void*) ;
 void* FUNC_9 () ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (void*,void*,void*) ;
 int FUNC_12 (struct jv_parser*,void*) ;

__attribute__((used)) static pfunc FUNC_13(struct jv_parser* VAR_4, char VAR_5) {
  switch (VAR_5) {
  case '[':
    if (VAR_4->stackpos >= VAR_3) return "Exceeds depth limit for parsing";
    if (FUNC_8(VAR_4->next)) return "Expected separator between values";
    FUNC_12(VAR_4, FUNC_1());
    break;

  case '{':
    if (VAR_4->stackpos >= VAR_3) return "Exceeds depth limit for parsing";
    if (FUNC_8(VAR_4->next)) return "Expected separator between values";
    FUNC_12(VAR_4, FUNC_9());
    break;

  case ':':
    if (!FUNC_8(VAR_4->next))
      return "Expected string key before ':'";
    if (VAR_4->stackpos == 0 || FUNC_6(VAR_4->stack[VAR_4->stackpos-1]) != VAR_1)
      return "':' not as part of an object";
    if (FUNC_6(VAR_4->next) != VAR_2)
      return "Object keys must be strings";
    FUNC_12(VAR_4, VAR_4->next);
    VAR_4->next = FUNC_7();
    break;

  case ',':
    if (!FUNC_8(VAR_4->next))
      return "Expected value before ','";
    if (VAR_4->stackpos == 0)
      return "',' not as part of an object or array";
    if (FUNC_6(VAR_4->stack[VAR_4->stackpos-1]) == VAR_0) {
      VAR_4->stack[VAR_4->stackpos-1] = FUNC_2(VAR_4->stack[VAR_4->stackpos-1], VAR_4->next);
      VAR_4->next = FUNC_7();
    } else if (FUNC_6(VAR_4->stack[VAR_4->stackpos-1]) == VAR_2) {
      FUNC_0(VAR_4->stackpos > 1 && FUNC_6(VAR_4->stack[VAR_4->stackpos-2]) == VAR_1);
      VAR_4->stack[VAR_4->stackpos-2] = FUNC_11(VAR_4->stack[VAR_4->stackpos-2],
                                              VAR_4->stack[VAR_4->stackpos-1], VAR_4->next);
      VAR_4->stackpos--;
      VAR_4->next = FUNC_7();
    } else {

      return "Objects must consist of key:value pairs";
    }
    break;

  case ']':
    if (VAR_4->stackpos == 0 || FUNC_6(VAR_4->stack[VAR_4->stackpos-1]) != VAR_0)
      return "Unmatched ']'";
    if (FUNC_8(VAR_4->next)) {
      VAR_4->stack[VAR_4->stackpos-1] = FUNC_2(VAR_4->stack[VAR_4->stackpos-1], VAR_4->next);
      VAR_4->next = FUNC_7();
    } else {
      if (FUNC_3(FUNC_4(VAR_4->stack[VAR_4->stackpos-1])) != 0) {

        return "Expected another array element";
      }
    }
    FUNC_5(VAR_4->next);
    VAR_4->next = VAR_4->stack[--VAR_4->stackpos];
    break;

  case '}':
    if (VAR_4->stackpos == 0)
      return "Unmatched '}'";
    if (FUNC_8(VAR_4->next)) {
      if (FUNC_6(VAR_4->stack[VAR_4->stackpos-1]) != VAR_2)
        return "Objects must consist of key:value pairs";
      FUNC_0(VAR_4->stackpos > 1 && FUNC_6(VAR_4->stack[VAR_4->stackpos-2]) == VAR_1);
      VAR_4->stack[VAR_4->stackpos-2] = FUNC_11(VAR_4->stack[VAR_4->stackpos-2],
                                              VAR_4->stack[VAR_4->stackpos-1], VAR_4->next);
      VAR_4->stackpos--;
      VAR_4->next = FUNC_7();
    } else {
      if (FUNC_6(VAR_4->stack[VAR_4->stackpos-1]) != VAR_1)
        return "Unmatched '}'";
      if (FUNC_10(FUNC_4(VAR_4->stack[VAR_4->stackpos-1])) != 0)
        return "Expected another key-value pair";
    }
    FUNC_5(VAR_4->next);
    VAR_4->next = VAR_4->stack[--VAR_4->stackpos];
    break;
  }
  return 0;
}
