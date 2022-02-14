
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct packet_reader {char* line; } ;
struct ls_refs_data {int peel; int symrefs; int prefixes; } ;
struct argv_array {int dummy; } ;
typedef int data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ,struct ls_refs_data*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct ls_refs_data*) ;
 int VAR_1 ;
 int FUNC_5 (struct ls_refs_data*,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct packet_reader*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (char const*,char*,char const**) ;
 int FUNC_9 (char*,char const*) ;

int FUNC_10(struct repository *VAR_3, struct argv_array *VAR_4,
     struct packet_reader *VAR_5)
{
 struct ls_refs_data VAR_6;

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));

 FUNC_3(VAR_1, ((void*)0));

 while (FUNC_7(VAR_5) != VAR_0) {
  const char *VAR_7 = VAR_5->line;
  const char *VAR_8;

  if (!FUNC_9("peel", VAR_7))
   VAR_6.peel = 1;
  else if (!FUNC_9("symrefs", VAR_7))
   VAR_6.symrefs = 1;
  else if (FUNC_8(VAR_7, "ref-prefix ", &VAR_8))
   FUNC_1(&VAR_6.prefixes, VAR_8);
 }

 FUNC_4(VAR_2, &VAR_6);
 FUNC_2(VAR_2, &VAR_6);
 FUNC_6(1);
 FUNC_0(&VAR_6.prefixes);
 return 0;
}
