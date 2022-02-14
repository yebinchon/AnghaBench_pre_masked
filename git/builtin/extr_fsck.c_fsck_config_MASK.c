
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char const**,char const*,char const*) ;
 int FUNC_4 (char const*,char const*,void*) ;
 scalar_t__ FUNC_5 (char const*,char*,char const**) ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;
 int FUNC_7 (struct strbuf*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 if (FUNC_8(VAR_2, "fsck.skiplist") == 0) {
  const char *VAR_5;
  struct strbuf VAR_6 = VAR_0;

  if (FUNC_3(&VAR_5, VAR_2, VAR_3))
   return 1;
  FUNC_6(&VAR_6, "skiplist=%s", VAR_5);
  FUNC_0((char *)VAR_5);
  FUNC_2(&VAR_1, VAR_6.buf);
  FUNC_7(&VAR_6);
  return 0;
 }

 if (FUNC_5(VAR_2, "fsck.", &VAR_2)) {
  FUNC_1(&VAR_1, VAR_2, VAR_3);
  return 0;
 }

 return FUNC_4(VAR_2, VAR_3, VAR_4);
}
