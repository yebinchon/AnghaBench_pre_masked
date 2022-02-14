
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*) ;
 scalar_t__ FUNC_2 (int,char*,int) ;

int FUNC_3(struct strbuf *VAR_1, int VAR_2, int VAR_3)
{
 FUNC_1(VAR_1);

 while (1) {
  char VAR_4;
  ssize_t VAR_5 = FUNC_2(VAR_2, &VAR_4, 1);
  if (VAR_5 <= 0)
   return VAR_0;
  FUNC_0(VAR_1, VAR_4);
  if (VAR_4 == VAR_3)
   break;
 }
 return 0;
}
