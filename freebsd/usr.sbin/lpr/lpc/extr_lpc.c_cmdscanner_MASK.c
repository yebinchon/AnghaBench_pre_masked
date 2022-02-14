
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int c_opts; int (* c_handler ) (scalar_t__,int *) ;int * c_generic; } ;
typedef int History ;
typedef int HistEvent ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 scalar_t__* VAR_9 ;
 char* FUNC_2 (int *,int*) ;
 int * FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (int *,scalar_t__,char const**) ;
 int FUNC_5 (int *,int ,...) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (scalar_t__*,scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int *,int,int (*) (scalar_t__,int *),scalar_t__,int *) ;
 struct cmd* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *,int *,int ,...) ;
 int * FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_11 ;
 int FUNC_14 () ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 int FUNC_15 (scalar_t__*,char const*,size_t) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_18 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_19(void)
{
 register struct cmd *VAR_17;
 static EditLine *VAR_18;
 static History *VAR_19;
 HistEvent VAR_20;
 size_t VAR_21;
 int VAR_22;
 const char *VAR_23;

 VAR_22 = 0;
 VAR_23 = ((void*)0);
 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);
 for (;;) {
  if (VAR_10) {
   if (!VAR_18) {
    VAR_18 = FUNC_3("lpc", VAR_15, VAR_16, VAR_14);
    VAR_19 = FUNC_12();
    FUNC_11(VAR_19, &VAR_20, VAR_5, 100);
    FUNC_5(VAR_18, VAR_1, FUNC_11, VAR_19);
    FUNC_5(VAR_18, VAR_0, "emacs");
    FUNC_5(VAR_18, VAR_2, VAR_11);
    FUNC_5(VAR_18, VAR_3, 1);
    FUNC_6(VAR_18, ((void*)0));
    FUNC_1(((void*)0));
   }
   if ((VAR_23 = FUNC_2(VAR_18, &VAR_22)) == ((void*)0) || VAR_22 == 0)
    FUNC_17(0, ((void*)0));

   VAR_21 = FUNC_0(VAR_8 - 1, VAR_22);
   FUNC_15(VAR_9, VAR_23, VAR_21);
   VAR_9[VAR_21] = 0;
   FUNC_11(VAR_19, &VAR_20, VAR_4, VAR_23);

  } else {
   if (FUNC_7(VAR_9, VAR_8, VAR_15) == ((void*)0))
    FUNC_17(0, ((void*)0));
   if (VAR_9[0] == 0 || VAR_9[0] == '\n')
    break;
  }

  FUNC_14();
  if (VAR_12 == 0)
   continue;
  if (VAR_18 != ((void*)0) && FUNC_4(VAR_18, VAR_12, (const char **)VAR_13) != -1)
   continue;

  VAR_17 = FUNC_9(VAR_13[0]);
  if (VAR_17 == (struct cmd *)-1) {
   FUNC_16("?Ambiguous command\n");
   continue;
  }
  if (VAR_17 == ((void*)0)) {
   FUNC_16("?Invalid command\n");
   continue;
  }
  if ((VAR_17->c_opts & VAR_6) && FUNC_10() &&
      FUNC_13(VAR_7) == 0) {
   FUNC_16("?Privileged command\n");
   continue;
  }
  if (VAR_17->c_generic != ((void*)0))
   FUNC_8(VAR_17->c_generic, VAR_17->c_opts, VAR_17->c_handler,
       VAR_12, VAR_13);
  else
   (*VAR_17->c_handler)(VAR_12, VAR_13);
 }
}
