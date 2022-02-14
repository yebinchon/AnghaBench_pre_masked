
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct strbuf*,int ,int *) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_1, struct strbuf *VAR_2)
{
 do {
  if (FUNC_2(VAR_2, VAR_0, VAR_1) <= 0)
   break;
 } while (!FUNC_0(VAR_1));

 return FUNC_1(VAR_1) ? -1 : 0;
}
