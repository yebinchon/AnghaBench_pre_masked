
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;
 scalar_t__ FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct strbuf *VAR_2)
{
 FILE *VAR_3;
 struct strbuf VAR_4 = VAR_1;

 VAR_3 = FUNC_2("/etc/mailname", "r");
 if (!VAR_3)
  return -1;

 if (FUNC_4(&VAR_4, VAR_3) == VAR_0) {
  if (FUNC_1(VAR_3))
   FUNC_6("cannot read /etc/mailname");
  FUNC_5(&VAR_4);
  FUNC_0(VAR_3);
  return -1;
 }

 FUNC_3(VAR_2, &VAR_4);
 FUNC_5(&VAR_4);
 FUNC_0(VAR_3);
 return 0;
}
