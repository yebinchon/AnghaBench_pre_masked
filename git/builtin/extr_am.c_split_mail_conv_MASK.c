
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am_state {int cur; int last; int prec; int dir; } ;
typedef int (* mail_conv_fn ) (int *,int *,int) ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*,int ,int ,int) ;
 int * VAR_0 ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(mail_conv_fn VAR_1, struct am_state *VAR_2,
   const char **VAR_3, int VAR_4)
{
 static const char *VAR_5[] = {"-", ((void*)0)};
 int VAR_6;

 if (!*VAR_3)
  VAR_3 = VAR_5;

 for (VAR_6 = 0; *VAR_3; VAR_3++, VAR_6++) {
  FILE *VAR_7, *VAR_8;
  const char *VAR_9;
  int VAR_10;

  if (!FUNC_6(*VAR_3, "-"))
   VAR_7 = VAR_0;
  else
   VAR_7 = FUNC_4(*VAR_3, "r");

  if (!VAR_7)
   return FUNC_2(FUNC_0("could not open '%s' for reading"),
        *VAR_3);

  VAR_9 = FUNC_5("%s/%0*d", VAR_2->dir, VAR_2->prec, VAR_6 + 1);

  VAR_8 = FUNC_4(VAR_9, "w");
  if (!VAR_8) {
   if (VAR_7 != VAR_0)
    FUNC_3(VAR_7);
   return FUNC_2(FUNC_0("could not open '%s' for writing"),
        VAR_9);
  }

  VAR_10 = VAR_1(VAR_8, VAR_7, VAR_4);

  FUNC_3(VAR_8);
  if (VAR_7 != VAR_0)
   FUNC_3(VAR_7);

  if (VAR_10)
   return FUNC_1(FUNC_0("could not parse patch '%s'"), *VAR_3);
 }

 VAR_2->cur = 1;
 VAR_2->last = VAR_6;
 return 0;
}
