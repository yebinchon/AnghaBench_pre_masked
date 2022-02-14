
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strategy {int attr; int * name; } ;
struct cmdnames {int cnt; struct cmdname** names; } ;
struct cmdname {char* name; size_t len; } ;


 int FUNC_0 (struct strategy*) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct cmdnames*,char*,size_t) ;
 struct strategy* VAR_1 ;
 int FUNC_3 (struct cmdnames*,struct cmdnames*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct cmdnames*,char const*) ;
 int FUNC_7 (char*,struct cmdnames*,struct cmdnames*) ;
 int FUNC_8 (struct cmdnames*,int ,int) ;
 int VAR_2 ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (char*,int *,size_t) ;
 struct strategy* FUNC_11 (int,int) ;
 int * FUNC_12 (char const*) ;

__attribute__((used)) static struct strategy *FUNC_13(const char *VAR_3)
{
 int VAR_4;
 struct strategy *VAR_5;
 static struct cmdnames VAR_6, VAR_7;
 static int VAR_8;

 if (!VAR_3)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (!FUNC_9(VAR_3, VAR_1[VAR_4].name))
   return &VAR_1[VAR_4];

 if (!VAR_8) {
  struct cmdnames VAR_9;
  VAR_8 = 1;

  FUNC_8(&VAR_9, 0, sizeof(struct cmdnames));
  FUNC_7("git-merge-", &VAR_6, &VAR_7);
  for (VAR_4 = 0; VAR_4 < VAR_6.cnt; VAR_4++) {
   int VAR_10, VAR_11 = 0;
   struct cmdname *VAR_12 = VAR_6.names[VAR_4];
   for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1); VAR_10++)
    if (!FUNC_10(VAR_12->name, VAR_1[VAR_10].name, VAR_12->len)
      && !VAR_1[VAR_10].name[VAR_12->len])
     VAR_11 = 1;
   if (!VAR_11)
    FUNC_2(&VAR_9, VAR_12->name, VAR_12->len);
  }
  FUNC_3(&VAR_6, &VAR_9);
 }
 if (!FUNC_6(&VAR_6, VAR_3) && !FUNC_6(&VAR_7, VAR_3)) {
  FUNC_5(VAR_2, FUNC_1("Could not find merge strategy '%s'.\n"), VAR_3);
  FUNC_5(VAR_2, "%s", FUNC_1("Available strategies are:"));
  for (VAR_4 = 0; VAR_4 < VAR_6.cnt; VAR_4++)
   FUNC_5(VAR_2, " %s", VAR_6.names[VAR_4]->name);
  FUNC_5(VAR_2, ".\n");
  if (VAR_7.cnt) {
   FUNC_5(VAR_2, "%s", FUNC_1("Available custom strategies are:"));
   for (VAR_4 = 0; VAR_4 < VAR_7.cnt; VAR_4++)
    FUNC_5(VAR_2, " %s", VAR_7.names[VAR_4]->name);
   FUNC_5(VAR_2, ".\n");
  }
  FUNC_4(1);
 }

 VAR_5 = FUNC_11(1, sizeof(struct strategy));
 VAR_5->name = FUNC_12(VAR_3);
 VAR_5->attr = VAR_0;
 return VAR_5;
}
