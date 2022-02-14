
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct child_process {char const** argv; char const* const* env; int use_shell; char* trace2_child_class; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct child_process*) ;
 int FUNC_5 (int ,char*,char const) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 char const* FUNC_9 (char const*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (struct child_process*) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (struct strbuf*,char const*,int ) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(const char *VAR_6, const char *VAR_7,
       struct strbuf *VAR_8, const char *const *VAR_9)
{
 if (!VAR_6)
  return FUNC_1("Terminal is dumb, but EDITOR unset");

 if (FUNC_14(VAR_6, ":")) {
  const char *VAR_10[] = { VAR_6, FUNC_9(VAR_7), ((void*)0) };
  struct child_process VAR_11 = VAR_0;
  int VAR_12, VAR_13;
  int VAR_14 = VAR_4 && FUNC_7(2);

  if (VAR_14) {







   const char VAR_15 = FUNC_6() ? '\n' : ' ';

   FUNC_5(VAR_5,
    FUNC_0("hint: Waiting for your editor to close the file...%c"),
    VAR_15);
   FUNC_3(VAR_5);
  }

  VAR_11.argv = VAR_10;
  VAR_11.env = VAR_9;
  VAR_11.use_shell = 1;
  VAR_11.trace2_child_class = "editor";
  if (FUNC_12(&VAR_11) < 0)
   return FUNC_1("unable to start editor '%s'", VAR_6);

  FUNC_11(VAR_1, VAR_3);
  FUNC_11(VAR_2, VAR_3);
  VAR_12 = FUNC_4(&VAR_11);
  VAR_13 = VAR_12 - 128;
  FUNC_10(VAR_1);
  FUNC_10(VAR_2);
  if (VAR_13 == VAR_1 || VAR_13 == VAR_2)
   FUNC_8(VAR_13);
  if (VAR_12)
   return FUNC_1("There was a problem with the editor '%s'.",
     VAR_6);

  if (VAR_14 && !FUNC_6())




   FUNC_15();
 }

 if (!VAR_8)
  return 0;
 if (FUNC_13(VAR_8, VAR_7, 0) < 0)
  return FUNC_2("could not read file '%s'", VAR_7);
 return 0;
}
