
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__ uint64_t ;
struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int,int *,struct strbuf*) ;
 int FUNC_2 (int *,struct strbuf*) ;
 int FUNC_3 (struct strbuf*,char*,double,...) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,char const*,int ) ;
 int FUNC_6 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(const char *VAR_3, int VAR_4,
      uint64_t VAR_5, const char *VAR_6,
      va_list VAR_7)
{
 static const char VAR_8[] = "          ";
 struct strbuf VAR_9 = VAR_0;

 if (!FUNC_1(VAR_3, VAR_4, &VAR_2, &VAR_9))
  return;

 FUNC_3(&VAR_9, "performance: %.9f s", (double) VAR_5 / 1000000000);

 if (VAR_6 && *VAR_6) {
  if (VAR_1 >= FUNC_6(VAR_8))
   FUNC_0("Too deep indentation");

  FUNC_3(&VAR_9, ":%.*s ", VAR_1, VAR_8);
  FUNC_5(&VAR_9, VAR_6, VAR_7);
 }

 FUNC_2(&VAR_2, &VAR_9);
 FUNC_4(&VAR_9);
}
