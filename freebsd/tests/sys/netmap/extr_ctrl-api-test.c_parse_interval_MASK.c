
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const) ;
 int VAR_0 ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, int *VAR_2, int *VAR_3)
{
 const char *VAR_4 = VAR_1;
 char *VAR_5;

 *VAR_2 = 0;
 *VAR_3 = -1;
 if (*VAR_4 == '-') {
  VAR_4++;
  goto get_k;
 }
 if (!FUNC_1(*VAR_4))
  goto err;
 *VAR_3 = FUNC_2(VAR_4, &VAR_5, 10);
 *VAR_2 = *VAR_3 - 1;
 VAR_4 = VAR_5;
 if (*VAR_4 == '-') {
  *VAR_3 = -1;
  VAR_4++;
 }
get_k:
 if (*VAR_4 == '\0')
  return 0;
 if (!FUNC_1(*VAR_4))
  goto err;
 *VAR_3 = FUNC_2(VAR_4, &VAR_5, 10);
 VAR_4 = VAR_5;
 if (!(*VAR_4 == '\0'))
  goto err;

 return 0;

err:
 FUNC_0(VAR_0, "syntax error in '%s', must be num[-[num]] or -[num]\n", VAR_1);
 return -1;
}
