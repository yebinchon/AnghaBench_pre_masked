
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char const*,struct strbuf*,int *,int ) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(struct strbuf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_1;
 const char *VAR_4 = VAR_2;
 int VAR_5, VAR_6;
 int VAR_7;
 int VAR_8 = FUNC_5(VAR_1);
 int VAR_9 = FUNC_5(VAR_2);
 int VAR_10, VAR_11;
 int VAR_12 = FUNC_0(VAR_1, ((void*)0), ((void*)0), 0);
 int VAR_13 = FUNC_0(VAR_2, ((void*)0), ((void*)0), 0);

 if (VAR_12 || VAR_13) {
  FUNC_0(VAR_1, VAR_0, ((void*)0), 0);
  FUNC_3(VAR_0, " => ");
  FUNC_0(VAR_2, VAR_0, ((void*)0), 0);
  return;
 }


 VAR_5 = 0;
 while (*VAR_3 && *VAR_4 && *VAR_3 == *VAR_4) {
  if (*VAR_3 == '/')
   VAR_5 = VAR_3 - VAR_1 + 1;
  VAR_3++;
  VAR_4++;
 }


 VAR_3 = VAR_1 + VAR_8;
 VAR_4 = VAR_2 + VAR_9;
 VAR_6 = 0;
 VAR_7 = (VAR_5 ? 1 : 0);
 while (VAR_1 + VAR_5 - VAR_7 <= VAR_3 &&
        VAR_2 + VAR_5 - VAR_7 <= VAR_4 &&
        *VAR_3 == *VAR_4) {
  if (*VAR_3 == '/')
   VAR_6 = VAR_8 - (VAR_3 - VAR_1);
  VAR_3--;
  VAR_4--;
 }







 VAR_10 = VAR_8 - VAR_5 - VAR_6;
 VAR_11 = VAR_9 - VAR_5 - VAR_6;
 if (VAR_10 < 0)
  VAR_10 = 0;
 if (VAR_11 < 0)
  VAR_11 = 0;

 FUNC_4(VAR_0, VAR_5 + VAR_10 + VAR_11 + VAR_6 + 7);
 if (VAR_5 + VAR_6) {
  FUNC_1(VAR_0, VAR_1, VAR_5);
  FUNC_2(VAR_0, '{');
 }
 FUNC_1(VAR_0, VAR_1 + VAR_5, VAR_10);
 FUNC_3(VAR_0, " => ");
 FUNC_1(VAR_0, VAR_2 + VAR_5, VAR_11);
 if (VAR_5 + VAR_6) {
  FUNC_2(VAR_0, '}');
  FUNC_1(VAR_0, VAR_1 + VAR_8 - VAR_6, VAR_6);
 }
}
