
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const** argv; } ;
struct child_process {int use_shell; char* trace2_child_class; TYPE_1__ args; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (char const**,char const**,int) ;
 int FUNC_1 (char const**,char const**,int) ;
 int FUNC_2 (char const**,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char const**) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char const*,...) ;
 int FUNC_9 (int ,char const*,char*) ;
 int VAR_1 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,char const*,char*) ;
 int FUNC_12 (char const***,int*,int*) ;
 int FUNC_13 (struct child_process*) ;
 int FUNC_14 (int*) ;
 int FUNC_15 (char*,char const***) ;
 char* FUNC_16 (int) ;
 int VAR_2 ;
 int FUNC_17 (char const*,char const*) ;
 int FUNC_18 (char const*,char const**) ;
 int FUNC_19 () ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char const**,char*,char const*) ;

__attribute__((used)) static int FUNC_22(int *VAR_3, const char ***VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = VAR_1;
 int VAR_8, VAR_9;
 const char **VAR_10;
 const char *VAR_11;
 char *VAR_12;

 VAR_11 = (*VAR_4)[0];
 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12) {
  if (*VAR_3 > 1 && !FUNC_17((*VAR_4)[1], "-h"))
   FUNC_11(VAR_2, FUNC_3("'%s' is aliased to '%s'"),
       VAR_11, VAR_12);
  if (VAR_12[0] == '!') {
   struct child_process VAR_13 = VAR_0;
   int VAR_14;


   FUNC_14(&VAR_14);

   FUNC_7();

   VAR_13.use_shell = 1;
   VAR_13.trace2_child_class = "shell_alias";
   FUNC_5(&VAR_13.args, VAR_12 + 1);
   FUNC_6(&VAR_13.args, (*VAR_4) + 1);

   FUNC_18(VAR_11, VAR_13.args.argv);
   FUNC_19();
   FUNC_20("_run_shell_alias_");

   VAR_6 = FUNC_13(&VAR_13);
   if (VAR_6 >= 0)
    FUNC_10(VAR_6);

   FUNC_9(FUNC_3("while expanding alias '%s': '%s'"),
      VAR_11, VAR_12 + 1);
  }
  VAR_8 = FUNC_15(VAR_12, &VAR_10);
  if (VAR_8 < 0)
   FUNC_8(FUNC_3("bad alias.%s string: %s"), VAR_11,
       FUNC_3(FUNC_16(VAR_8)));
  VAR_9 = FUNC_12(&VAR_10, &VAR_8, &VAR_5);
  if (VAR_5)
   FUNC_8(FUNC_3("alias '%s' changes environment variables.\n"
         "You can use '!git' in the alias to do this"),
       VAR_11);
  FUNC_1(VAR_10 - VAR_9, VAR_10, VAR_8);
  VAR_10 -= VAR_9;

  if (VAR_8 < 1)
   FUNC_8(FUNC_3("empty alias for %s"), VAR_11);

  if (!FUNC_17(VAR_11, VAR_10[0]))
   FUNC_8(FUNC_3("recursive alias: %s"), VAR_11);

  FUNC_21(VAR_10,
      "trace: alias expansion: %s =>",
      VAR_11);

  FUNC_2(VAR_10, VAR_8 + *VAR_3);

  FUNC_0(VAR_10 + VAR_8, *VAR_4 + 1, *VAR_3);

  FUNC_18(VAR_11, VAR_10);
  FUNC_19();

  *VAR_4 = VAR_10;
  *VAR_3 += VAR_8 - 1;

  VAR_6 = 1;
 }

 VAR_1 = VAR_7;

 return VAR_6;
}
