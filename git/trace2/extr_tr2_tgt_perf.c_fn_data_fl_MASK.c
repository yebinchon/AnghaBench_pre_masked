
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct strbuf {int dummy; } ;
struct repository {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,char const*,struct repository const*,int *,int *,char const*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,char const*,char const*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, int VAR_2, uint64_t VAR_3,
         uint64_t VAR_4, const char *VAR_5,
         const struct repository *VAR_6, const char *VAR_7,
         const char *VAR_8)
{
 const char *VAR_9 = "data";
 struct strbuf VAR_10 = VAR_0;

 FUNC_1(&VAR_10, "%s:%s", VAR_7, VAR_8);

 FUNC_0(VAR_1, VAR_2, VAR_9, VAR_6, &VAR_3,
    &VAR_4, VAR_5, &VAR_10);
 FUNC_2(&VAR_10);
}
