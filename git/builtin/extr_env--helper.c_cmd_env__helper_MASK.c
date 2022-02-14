
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;


 int FUNC_1 (char*) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 (int ,char*,int*,int ,int ,int ,int ) ;
 struct option FUNC_4 () ;
 struct option FUNC_5 (int ,char*,char const**,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (char const*,int) ;
 unsigned long FUNC_9 (char const*,unsigned long) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*,unsigned long*) ;
 int VAR_4 ;
 int FUNC_12 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_13 (char*,unsigned long) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,struct option*) ;

int FUNC_16(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 int VAR_8 = 0;
 const char *VAR_9 = ((void*)0);
 const char *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 struct option VAR_16[] = {
  FUNC_3(0, "type", &VAR_2, FUNC_1("type"),
          FUNC_1("value is given this type"), VAR_1,
          VAR_4),
  FUNC_5(0, "default", &VAR_10, FUNC_1("value"),
      FUNC_1("default for git_env_*(...) to fall back on")),
  FUNC_2(0, "exit-code", &VAR_8,
    FUNC_1("be quiet only use git_env_*() value as exit code")),
  FUNC_4(),
 };

 VAR_5 = FUNC_12(VAR_5, VAR_6, VAR_7, VAR_16, VAR_3,
        VAR_0);
 if (VAR_10 && !*VAR_10)
  FUNC_15(VAR_3, VAR_16);
 if (!VAR_2)
  FUNC_15(VAR_3, VAR_16);
 if (VAR_5 != 1)
  FUNC_15(VAR_3, VAR_16);
 VAR_9 = VAR_6[0];

 switch (VAR_2) {
 case 129:
  if (VAR_10) {
   VAR_13 = FUNC_10(VAR_10);
   if (VAR_13 == -1) {
    FUNC_7(FUNC_6("option `--default' expects a boolean value with `--type=bool`, not `%s`"),
          VAR_10);
    FUNC_15(VAR_3, VAR_16);
   }
  } else {
   VAR_13 = 0;
  }
  VAR_12 = FUNC_8(VAR_9, VAR_13);
  if (!VAR_8)
   FUNC_14(VAR_12 ? "true" : "false");
  VAR_11 = VAR_12;
  break;
 case 128:
  if (VAR_10) {
   if (!FUNC_11(VAR_10, &VAR_15)) {
    FUNC_7(FUNC_6("option `--default' expects an unsigned long value with `--type=ulong`, not `%s`"),
          VAR_10);
    FUNC_15(VAR_3, VAR_16);
   }
  } else {
   VAR_15 = 0;
  }
  VAR_14 = FUNC_9(VAR_9, VAR_15);
  if (!VAR_8)
   FUNC_13("%lu\n", VAR_14);
  VAR_11 = VAR_14;
  break;
 default:
  FUNC_0("unknown <type> value");
  break;
 }

 return !VAR_11;
}
