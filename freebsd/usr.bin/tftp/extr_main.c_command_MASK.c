
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int (* handler ) (scalar_t__,int *) ;} ;
typedef int History ;
typedef int HistEvent ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 char* FUNC_1 (int *,int*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (char*,int,int ) ;
 struct cmd* FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int ,char const*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (char*) ;
 int VAR_4 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (scalar_t__,int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12(bool VAR_6, EditLine *VAR_7, History *VAR_8, HistEvent *VAR_9)
{
 struct cmd *VAR_10;
 const char *VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;
 char VAR_15[VAR_1];

 for (;;) {
  if (VAR_6) {
   if ((VAR_11 = FUNC_1(VAR_7, &VAR_14)) == ((void*)0) || VAR_14 == 0)
    FUNC_2(0);
   VAR_13 = FUNC_0(VAR_1, VAR_14);
   FUNC_8(VAR_15, VAR_11, VAR_13);
   VAR_15[VAR_13 - 1] = '\0';
   FUNC_6(VAR_8, VAR_9, VAR_0, VAR_11);
  } else {
   VAR_15[0] = 0;
   if (FUNC_4(VAR_15, sizeof VAR_15 , VAR_4) == ((void*)0)) {
    if (FUNC_3(VAR_4)) {
     FUNC_2(VAR_5);
    } else {
     continue;
    }
   }
  }
  if ((VAR_12 = FUNC_10(VAR_15, '\n')))
   *VAR_12 = '\0';
  if (VAR_15[0] == 0)
   continue;
  FUNC_7(VAR_15);
  if (VAR_2 == 0)
   continue;
  VAR_10 = FUNC_5(VAR_3[0]);
  if (VAR_10 == (struct cmd *)-1) {
   FUNC_9("?Ambiguous command\n");
   continue;
  }
  if (VAR_10 == ((void*)0)) {
   FUNC_9("?Invalid command\n");
   continue;
  }
  (*VAR_10->handler)(VAR_2, VAR_3);
 }
}
