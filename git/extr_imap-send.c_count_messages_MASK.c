
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct strbuf *VAR_0)
{
 int VAR_1 = 0;
 char *VAR_2 = VAR_0->buf;

 while (1) {
  if (FUNC_0(VAR_2, "From ")) {
   VAR_2 = FUNC_1(VAR_2+5, "\nFrom: ");
   if (!VAR_2) break;
   VAR_2 = FUNC_1(VAR_2+7, "\nDate: ");
   if (!VAR_2) break;
   VAR_2 = FUNC_1(VAR_2+7, "\nSubject: ");
   if (!VAR_2) break;
   VAR_2 += 10;
   VAR_1++;
  }
  VAR_2 = FUNC_1(VAR_2+5, "\nFrom ");
  if (!VAR_2)
   break;
  VAR_2++;
 }
 return VAR_1;
}
