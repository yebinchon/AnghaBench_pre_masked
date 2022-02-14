
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_scheme_object {int dummy; } ;
struct tl_int_array {int dummy; } ;
struct tl_compiler {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const* const,char*) ;
 int FUNC_2 (struct tl_int_array*,int) ;
 int FUNC_3 (struct tl_int_array*,double) ;
 int FUNC_4 (struct tl_int_array*,long long) ;
 int FUNC_5 (struct tl_int_array*,char*) ;
 int FUNC_6 (struct tl_scheme_object*,double*) ;
 int FUNC_7 (struct tl_scheme_object*,int*) ;
 int FUNC_8 (struct tl_scheme_object*,long long*) ;
 int FUNC_9 (struct tl_scheme_object*,char**) ;
 int FUNC_10 (struct tl_compiler*,struct tl_scheme_object*,char*) ;
 int FUNC_11 (char const) ;

int FUNC_12 (struct tl_compiler *VAR_4, struct tl_scheme_object *VAR_5, const char *const VAR_6, struct tl_int_array *VAR_7) {
  int VAR_8;
  long long VAR_9;
  double VAR_10;
  char *VAR_11;
  switch (FUNC_11 (VAR_6[0])) {
    case 'd':
      if (!FUNC_1 (VAR_6 + 1, "ouble")) {
        if (FUNC_6 (VAR_5, &VAR_10) < 0) {
          return FUNC_10 (VAR_4, VAR_5, "isn't of type 'double'");
        }
        if (FUNC_0 (VAR_6[0])) {
          if (FUNC_2 (VAR_7, VAR_0) < 0) {
            return FUNC_10 (VAR_4, VAR_5, "output buffer overflow");
          }
        }
        if (FUNC_3 (VAR_7, VAR_10) < 0) {
          return FUNC_10 (VAR_4, VAR_5, "output buffer overflow");
        }
        return 1;
      }
    break;
    case 'i':
      if (!FUNC_1 (VAR_6 + 1, "nt")) {
        if (FUNC_7 (VAR_5, &VAR_8) < 0) {
          return FUNC_10 (VAR_4, VAR_5, "isn't of type 'int'");
        }
        if (FUNC_0 (VAR_6[0])) {
          if (FUNC_2 (VAR_7, VAR_1) < 0) {
            return FUNC_10 (VAR_4, VAR_5, "output buffer overflow");
          }
        }
        if (FUNC_2 (VAR_7, VAR_8) < 0) {
          return FUNC_10 (VAR_4, VAR_5, "output buffer overflow");
        }
        return 1;
      }
    break;
    case 'l':
      if (!FUNC_1 (VAR_6 + 1, "ong")) {
        if (FUNC_8 (VAR_5, &VAR_9) < 0) {
          return FUNC_10 (VAR_4, VAR_5, "isn't of type 'long'");
        }
        if (FUNC_0 (VAR_6[0])) {
          if (FUNC_2 (VAR_7, VAR_2) < 0) {
            return FUNC_10 (VAR_4, VAR_5, "output buffer overflow");
          }
        }
        if (FUNC_4 (VAR_7, VAR_9) < 0) {
          return FUNC_10 (VAR_4, VAR_5, "output buffer overflow");
        }
        return 1;
      }
    break;
    case 's':
      if (!FUNC_1 (VAR_6 + 1, "tring")) {
        if (FUNC_9 (VAR_5, &VAR_11) < 0) {
          return FUNC_10 (VAR_4, VAR_5, "isn't of type 'string'");
        }
        if (FUNC_0 (VAR_6[0])) {
          if (FUNC_2 (VAR_7, VAR_3) < 0) {
            return FUNC_10 (VAR_4, VAR_5, "output buffer overflow");
          }
        }
        if (FUNC_5 (VAR_7, VAR_11) < 0) {
          return FUNC_10 (VAR_4, VAR_5, "output buffer overflow");
        }
        return 1;
      }
    break;
  }

  return 0;
}
