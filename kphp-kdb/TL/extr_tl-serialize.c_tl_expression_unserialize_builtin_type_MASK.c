
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double d; int i; long long l; char* s; } ;
struct tl_scheme_object {TYPE_1__ u; } ;
struct tl_compiler {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct tl_compiler*,char*,...) ;
 int FUNC_3 (int*,int,char**,int *,int) ;
 struct tl_scheme_object* FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char const) ;

int FUNC_6 (struct tl_compiler *VAR_8, int *VAR_9, int VAR_10, const char *VAR_11, struct tl_scheme_object **VAR_12) {
  if (VAR_11 == ((void*)0)) {
    return 0;
  }
  int VAR_13 = 0;
  switch (FUNC_5 (VAR_11[0])) {
    case 'd':
      if (!FUNC_1 (VAR_11 + 1, "ouble")) {
        if (FUNC_0 (VAR_11[0])) {
          if (VAR_13 >= VAR_10) {
            return FUNC_2 (VAR_8, "not enough input to unserialize %s", VAR_11);
          }
          if (VAR_9[VAR_13] != VAR_0) {
            return FUNC_2 (VAR_8, "unserialize Double failed, expected magic 0x%08x but 0x%08x found", VAR_0, VAR_9[VAR_13]);
          }
          VAR_13++;
        }
        if (VAR_13 >= VAR_10 - 1) {
          return FUNC_2 (VAR_8, "not enough input to unserialize %s", VAR_11);
        }
        *VAR_12 = FUNC_4 (VAR_4);
        (*VAR_12)->u.d = *((double *) &VAR_9[VAR_13]);
        VAR_13 += 2;
        return VAR_13;
      }
    break;
    case 'i':
      if (!FUNC_1 (VAR_11 + 1, "nt")) {
        if (FUNC_0 (VAR_11[0])) {
          if (VAR_13 >= VAR_10) {
            return FUNC_2 (VAR_8, "not enough input to unserialize %s", VAR_11);
          }
          if (VAR_9[VAR_13] != VAR_1) {
            return FUNC_2 (VAR_8, "unserialize Int failed, expected magic 0x%08x but 0x%08x found", VAR_1, VAR_9[VAR_13]);
          }
          VAR_13++;
        }
        if (VAR_13 >= VAR_10) {
          return FUNC_2 (VAR_8, "not enough input to unserialize %s", VAR_11);
        }
        *VAR_12 = FUNC_4 (VAR_5);
        (*VAR_12)->u.i = VAR_9[VAR_13++];
        return VAR_13;
      }
    break;
    case 'l':
      if (!FUNC_1 (VAR_11 + 1, "ong")) {
        if (FUNC_0 (VAR_11[0])) {
          if (VAR_13 >= VAR_10) {
            return FUNC_2 (VAR_8, "not enough input to unserialize %s", VAR_11);
          }
          if (VAR_9[VAR_13] != VAR_2) {
            return FUNC_2 (VAR_8, "unserialize Long failed, expected magic 0x%08x but 0x%08x found", VAR_2, VAR_9[VAR_13]);
          }
          VAR_13++;
        }
        if (VAR_13 >= VAR_10 - 1) {
          return FUNC_2 (VAR_8, "not enough input to unserialize %s", VAR_11);
        }
        *VAR_12 = FUNC_4 (VAR_6);
        (*VAR_12)->u.l = *((long long *) &VAR_9[VAR_13]);
        VAR_13 += 2;
        return VAR_13;
      }
    break;
    case 's':
      if (!FUNC_1 (VAR_11 + 1, "tring")) {
        if (FUNC_0 (VAR_11[0])) {
          if (VAR_13 >= VAR_10) {
            return FUNC_2 (VAR_8, "not enough input to unserialize %s", VAR_11);
          }
          if (VAR_9[VAR_13] != VAR_3) {
            return FUNC_2 (VAR_8, "unserialize String failed, expected magic 0x%08x but 0x%08x found", VAR_3, VAR_9[VAR_13]);
          }
          VAR_13++;
        }
        if (VAR_13 >= VAR_10) {
          return FUNC_2 (VAR_8, "not enough input to unserialize %s", VAR_11);
        }
        char *VAR_14;
        int VAR_15 = FUNC_3 (VAR_9 + VAR_13, VAR_10 - VAR_13, &VAR_14, ((void*)0), 1);
        if (VAR_15 < 0) {
          return FUNC_2 (VAR_8, "tl_fetch_string fail");
        }
        *VAR_12 = FUNC_4 (VAR_7);
        (*VAR_12)->u.s = VAR_14;
        return VAR_13 + VAR_15;
      }
    break;
  }
  return 0;
}
