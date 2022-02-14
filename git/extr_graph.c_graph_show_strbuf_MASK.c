
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct git_graph {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (char*,int,size_t,int *) ;
 int FUNC_1 (struct git_graph*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(struct git_graph *VAR_0,
         FILE *VAR_1,
         struct strbuf const *VAR_2)
{
 char *VAR_3;





 VAR_3 = VAR_2->buf;
 while (VAR_3) {
  size_t VAR_4;
  char *VAR_5 = FUNC_2(VAR_3, '\n');
  if (VAR_5) {
   VAR_5++;
   VAR_4 = VAR_5 - VAR_3;
  } else {
   VAR_4 = (VAR_2->buf + VAR_2->len) - VAR_3;
  }
  FUNC_0(VAR_3, sizeof(char), VAR_4, VAR_1);
  if (VAR_5 && *VAR_5 != '\0')
   FUNC_1(VAR_0);
  VAR_3 = VAR_5;
 }
}
