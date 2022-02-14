
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerere_id {scalar_t__ variant; } ;


 char const* FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct rerere_id const*) ;

const char *FUNC_2(const struct rerere_id *VAR_0, const char *VAR_1)
{
 if (!VAR_1)
  return FUNC_0("rr-cache/%s", FUNC_1(VAR_0));

 if (VAR_0->variant <= 0)
  return FUNC_0("rr-cache/%s/%s", FUNC_1(VAR_0), VAR_1);

 return FUNC_0("rr-cache/%s/%s.%d",
   FUNC_1(VAR_0), VAR_1, VAR_0->variant);
}
