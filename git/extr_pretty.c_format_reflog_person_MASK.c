
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct reflog_walk_info {int dummy; } ;
struct date_mode {int dummy; } ;


 int FUNC_0 (struct strbuf*,char,char const*,int ,struct date_mode const*) ;
 char* FUNC_1 (struct reflog_walk_info*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct strbuf *VAR_0,
    char VAR_1,
    struct reflog_walk_info *VAR_2,
    const struct date_mode *VAR_3)
{
 const char *VAR_4;

 if (!VAR_2)
  return 2;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return 2;

 return FUNC_0(VAR_0, VAR_1, VAR_4, FUNC_2(VAR_4), VAR_3);
}
