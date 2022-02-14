
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int uint64_t ;
struct strbuf {int dummy; } ;
struct repository {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*,int ) ;
 int FUNC_1 (char const*,int,char const*,struct repository const*,int *,int *,char const*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,char const*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, int VAR_2,
      uint64_t VAR_3,
      const char *VAR_4,
      const char *VAR_5,
      const struct repository *VAR_6,
      const char *VAR_7, va_list VAR_8)
{
 const char *VAR_9 = "region_enter";
 struct strbuf VAR_10 = VAR_0;

 if (VAR_5)
  FUNC_3(&VAR_10, "label:%s", VAR_5);
 if (VAR_7 && *VAR_7) {
  FUNC_2(&VAR_10, ' ');
  FUNC_0(&VAR_10, VAR_7, VAR_8);
 }

 FUNC_1(VAR_1, VAR_2, VAR_9, VAR_6, &VAR_3,
    ((void*)0), VAR_4, &VAR_10);
 FUNC_4(&VAR_10);
}
