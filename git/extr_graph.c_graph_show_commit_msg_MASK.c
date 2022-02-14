
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;
struct git_graph {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct git_graph*) ;
 int FUNC_1 (struct git_graph*) ;
 int FUNC_2 (struct git_graph*,int *,struct strbuf const*) ;
 int FUNC_3 (char,int *) ;

void FUNC_4(struct git_graph *VAR_0,
      FILE *VAR_1,
      struct strbuf const *VAR_2)
{
 int VAR_3;




 FUNC_2(VAR_0, VAR_1, VAR_2);

 if (!VAR_0)
  return;

 VAR_3 = (VAR_2->len && VAR_2->buf[VAR_2->len - 1] == '\n');




 if (!FUNC_0(VAR_0)) {





  if (!VAR_3)
   FUNC_3('\n', VAR_1);

  FUNC_1(VAR_0);




  if (VAR_3)
   FUNC_3('\n', VAR_1);
 }
}
