
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;
struct ignoretab {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (char*,int*,int ) ;
 struct message* VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct message*,int *,struct ignoretab*,int *) ;
 char* FUNC_11 (char*,int*) ;
 int * VAR_4 ;
 int FUNC_12 (struct message*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,char*) ;

int
FUNC_15(char VAR_5[], int VAR_6, const char *VAR_7, struct ignoretab *VAR_8)
{
 struct message *VAR_9;
 char *VAR_10;
 const char *VAR_11;
 int VAR_12, *VAR_13, *VAR_14;
 FILE *VAR_15;

 VAR_13 = (int *)FUNC_9((VAR_3 + 2) * sizeof(*VAR_13));
 if ((VAR_10 = FUNC_11(VAR_5, &VAR_12)) == ((void*)0))
  return (1);
 if (!VAR_12) {
  *VAR_13 = FUNC_6(0, VAR_0);
  if (*VAR_13 == 0) {
   FUNC_8("No messages to %s.\n", VAR_7);
   return (1);
  }
  VAR_13[1] = 0;
 }
 if (VAR_12 && FUNC_7(VAR_5, VAR_13, 0) < 0)
  return (1);
 if ((VAR_10 = FUNC_3(VAR_10)) == ((void*)0))
  return (1);
 FUNC_8("\"%s\" ", VAR_10);
 (void)FUNC_5(VAR_4);
 if (FUNC_2(VAR_10, 0) >= 0)
  VAR_11 = "[Appended]";
 else
  VAR_11 = "[New file]";
 if ((VAR_15 = FUNC_1(VAR_10, "a")) == ((void*)0)) {
  FUNC_13((char *)((void*)0));
  return (1);
 }
 for (VAR_14 = VAR_13; *VAR_14 && VAR_14-VAR_13 < VAR_3; VAR_14++) {
  VAR_9 = &VAR_2[*VAR_14 - 1];
  FUNC_12(VAR_9);
  if (FUNC_10(VAR_9, VAR_15, VAR_8, ((void*)0)) < 0) {
   FUNC_14("%s", VAR_10);
   (void)FUNC_0(VAR_15);
   return (1);
  }
  if (VAR_6)
   VAR_9->m_flag |= VAR_1;
 }
 (void)FUNC_5(VAR_15);
 if (FUNC_4(VAR_15))
  FUNC_13("%s", VAR_10);
 (void)FUNC_0(VAR_15);
 FUNC_8("%s\n", VAR_11);
 return (0);
}
