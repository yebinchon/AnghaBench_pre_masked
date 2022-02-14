
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nla_policy {size_t type; int minlen; int maxlen; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 char* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;

__attribute__((used)) static int FUNC_4(struct nlattr *VAR_7, int VAR_8,
   struct nla_policy *VAR_9)
{
 struct nla_policy *VAR_10;
 int VAR_11 = 0, VAR_12 = FUNC_3(VAR_7);

 if (VAR_12 <= 0 || VAR_12 > VAR_8)
  return 0;

 VAR_10 = &VAR_9[VAR_12];

 if (VAR_10->type > VAR_2)
  FUNC_0();

 if (VAR_10->minlen)
  VAR_11 = VAR_10->minlen;
 else if (VAR_10->type != VAR_3)
  VAR_11 = VAR_6[VAR_10->type];

 if (VAR_10->type == VAR_0 && FUNC_2(VAR_7) > 0)
  return -VAR_5;

 if (FUNC_2(VAR_7) < VAR_11)
  return -VAR_5;

 if (VAR_10->maxlen && FUNC_2(VAR_7) > VAR_10->maxlen)
  return -VAR_5;

 if (VAR_10->type == VAR_1) {
  char *VAR_13 = FUNC_1(VAR_7);
  if (VAR_13[FUNC_2(VAR_7) - 1] != '\0')
   return -VAR_4;
 }

 return 0;
}
