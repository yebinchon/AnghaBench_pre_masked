
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct hashmap {int dummy; } ;


 char* FUNC_0 (struct hashmap*,void* (*) (void const*,size_t*),char const*,size_t*) ;
 int FUNC_1 (struct strbuf*,char const*,size_t) ;
 int FUNC_2 (struct strbuf*,int ) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_0, const char *VAR_1,
      struct hashmap *VAR_2,
      void *(*VAR_3)(const void *, size_t *))
{
 while (*VAR_1) {
  const char *VAR_4 = FUNC_3(VAR_1, '/');
  size_t VAR_5 = VAR_4 - VAR_1;
  const char *VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_1, &VAR_5);
  FUNC_1(VAR_0, VAR_6, VAR_5);
  VAR_1 = VAR_4;
  if (*VAR_1)
   FUNC_2(VAR_0, *VAR_1++);
 }
}
