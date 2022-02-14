
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct commit_graft {int dummy; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 struct commit_graft* FUNC_2 (struct strbuf*) ;
 int FUNC_3 (int ,struct commit_graft*,int ) ;
 int FUNC_4 (struct strbuf*,int *,char) ;
 int FUNC_5 (struct strbuf*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(const char *VAR_2)
{
 FILE *VAR_3 = FUNC_1(VAR_2, "r");
 struct strbuf VAR_4 = VAR_0;
 if (!VAR_3)
  return -1;
 while (!FUNC_4(&VAR_4, VAR_3, '\n')) {

  struct commit_graft *VAR_5 = FUNC_2(&VAR_4);
  if (VAR_5)
   FUNC_3(VAR_1, VAR_5, 0);
 }
 FUNC_0(VAR_3);
 FUNC_5(&VAR_4);
 return 0;
}
