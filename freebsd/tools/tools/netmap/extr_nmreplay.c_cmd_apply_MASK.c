
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _qs {int dummy; } ;
struct _cfg {int (* parse ) (struct _qs*,struct _cfg*,int,char**) ;char* optarg; int d; scalar_t__ arg_len; int * arg; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char**) ;
 char** FUNC_5 (char const*,int*) ;
 int FUNC_6 (struct _qs*,struct _cfg*,int,char**) ;

__attribute__((used)) static int
FUNC_7(const struct _cfg *VAR_0, const char *VAR_1, struct _qs *VAR_2, struct _cfg *VAR_3)
{
 int VAR_4 = 0;
 char **VAR_5;
 int VAR_6;

 if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
  return 1;
 if (VAR_0 == ((void*)0) || VAR_3 == ((void*)0)) {
  FUNC_0("program error - invalid arguments");
  FUNC_3(1);
 }
 VAR_5 = FUNC_5(VAR_1, &VAR_4);
 if (VAR_5 == ((void*)0))
  return 1;
 for (VAR_6 = 0; VAR_0[VAR_6].parse; VAR_6++) {
  struct _cfg VAR_7 = VAR_0[VAR_6];
  const char *VAR_8 = VAR_7.optarg;
  int VAR_9;

  VAR_7.arg = ((void*)0);
  VAR_7.arg_len = 0;
  FUNC_2(&VAR_7.d, sizeof(VAR_7.d));
  FUNC_1("apply %s to %s", VAR_5[0], VAR_8);
  VAR_9 = VAR_7.parse(VAR_2, &VAR_7, VAR_4, VAR_5);
  if (VAR_9 == 2)
   continue;
  if (VAR_9 == 1) {
   FUNC_0("invalid arguments: need '%s' have '%s'",
    VAR_8, VAR_1);
   break;
  }
  VAR_7.optarg = VAR_1;
  *VAR_3 = VAR_7;
  return 0;
 }
 FUNC_0("arguments %s not recognised", VAR_1);
 FUNC_4(VAR_5);
 return 1;
}
