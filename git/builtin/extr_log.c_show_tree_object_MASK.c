
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,char const*,char*) ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_0,
  struct strbuf *VAR_1,
  const char *VAR_2, unsigned VAR_3, int VAR_4, void *VAR_5)
{
 FILE *VAR_6 = VAR_5;
 FUNC_1(VAR_6, "%s%s\n", VAR_2, FUNC_0(VAR_3) ? "/" : "");
 return 0;
}
