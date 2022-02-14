
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,char const*,size_t) ;
 int FUNC_3 (struct strbuf*,char const*,size_t) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 char* FUNC_5 (struct strbuf*,int *) ;
 char* FUNC_6 (char const*,char) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_9(const char *VAR_1, const char *VAR_2,
       const char *VAR_3, char **VAR_4)
{
 const char *VAR_5 = FUNC_6(VAR_1, '*');
 size_t VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 int VAR_9;
 if (!VAR_5)
  FUNC_1(FUNC_0("key '%s' of pattern had no '*'"), VAR_1);
 VAR_6 = VAR_5 - VAR_1;
 VAR_7 = FUNC_7(VAR_5 + 1);
 VAR_8 = FUNC_7(VAR_2);
 VAR_9 = !FUNC_8(VAR_2, VAR_1, VAR_6) && VAR_8 >= VAR_6 + VAR_7 &&
  !FUNC_2(VAR_2 + VAR_8 - VAR_7, VAR_5 + 1, VAR_7);
 if (VAR_9 && VAR_3) {
  struct strbuf VAR_10 = VAR_0;
  const char *VAR_11 = FUNC_6(VAR_3, '*');
  if (!VAR_11)
   FUNC_1(FUNC_0("value '%s' of pattern has no '*'"), VAR_3);
  FUNC_3(&VAR_10, VAR_3, VAR_11 - VAR_3);
  FUNC_3(&VAR_10, VAR_2 + VAR_6, VAR_8 - VAR_6 - VAR_7);
  FUNC_4(&VAR_10, VAR_11 + 1);
  *VAR_4 = FUNC_5(&VAR_10, ((void*)0));
 }
 return VAR_9;
}
