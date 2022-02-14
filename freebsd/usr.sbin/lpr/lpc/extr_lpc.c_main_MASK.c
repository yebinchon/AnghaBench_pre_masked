
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int c_opts; int (* c_handler ) (int,char**) ;int * c_generic; } ;
typedef char* PRIV_END ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int,int (*) (int,char**),int,char**) ;
 struct cmd* FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ) ;
 int VAR_7 ;
 int FUNC_12 (int,char**) ;
 scalar_t__ VAR_8 ;

int
FUNC_13(int VAR_9, char *VAR_10[])
{
 register struct cmd *VAR_11;

 VAR_4 = FUNC_5();
 VAR_8 = FUNC_6();
 PRIV_END
 VAR_12 = VAR_10[0];
 FUNC_9("lpd", 0, VAR_0);

 if (--VAR_9 > 0) {
  VAR_11 = FUNC_4(*++VAR_10);
  if (VAR_11 == (struct cmd *)-1) {
   FUNC_10("?Ambiguous command\n");
   FUNC_1(1);
  }
  if (VAR_11 == ((void*)0)) {
   FUNC_10("?Invalid command\n");
   FUNC_1(1);
  }
  if ((VAR_11->c_opts & VAR_1) && FUNC_6() &&
      FUNC_7(VAR_2) == 0) {
   FUNC_10("?Privileged command\n");
   FUNC_1(1);
  }
  if (VAR_11->c_generic != ((void*)0))
   FUNC_3(VAR_11->c_generic, VAR_11->c_opts, VAR_11->c_handler,
       VAR_9, VAR_10);
  else
   (*VAR_11->c_handler)(VAR_9, VAR_10);
  FUNC_1(0);
 }
 VAR_5 = FUNC_8(FUNC_2(VAR_7));
 if (!VAR_5)
  FUNC_11(VAR_3, VAR_6);
 for (;;) {
  FUNC_0();
 }
}
