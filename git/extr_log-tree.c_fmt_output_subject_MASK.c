
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; } ;
struct rev_info {char* patch_suffix; int nr; scalar_t__ reroll_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,int,...) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*,int) ;
 int FUNC_3 (char const*) ;

void FUNC_4(struct strbuf *VAR_1,
   const char *VAR_2,
   struct rev_info *VAR_3)
{
 const char *VAR_4 = VAR_3->patch_suffix;
 int VAR_5 = VAR_3->nr;
 int VAR_6 = VAR_1->len;
 int VAR_7 = VAR_6 + VAR_0 - (FUNC_3(VAR_4) + 1);

 if (0 < VAR_3->reroll_count)
  FUNC_0(VAR_1, "v%d-", VAR_3->reroll_count);
 FUNC_0(VAR_1, "%04d-%s", VAR_5, VAR_2);

 if (VAR_7 < VAR_1->len)
  FUNC_2(VAR_1, VAR_7);
 FUNC_1(VAR_1, VAR_4);
}
