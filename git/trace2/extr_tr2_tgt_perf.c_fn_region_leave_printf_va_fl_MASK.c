
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

__attribute__((used)) static void FUNC_5(
 const char *VAR_1, int VAR_2, uint64_t VAR_3,
 uint64_t VAR_4, const char *VAR_5, const char *VAR_6,
 const struct repository *VAR_7, const char *VAR_8, va_list VAR_9)
{
 const char *VAR_10 = "region_leave";
 struct strbuf VAR_11 = VAR_0;

 if (VAR_6)
  FUNC_3(&VAR_11, "label:%s", VAR_6);
 if (VAR_8 && *VAR_8) {
  FUNC_2(&VAR_11, ' ' );
  FUNC_0(&VAR_11, VAR_8, VAR_9);
 }

 FUNC_1(VAR_1, VAR_2, VAR_10, VAR_7, &VAR_3,
    &VAR_4, VAR_5, &VAR_11);
 FUNC_4(&VAR_11);
}
