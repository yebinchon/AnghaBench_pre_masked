
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int dummy; } ;
struct nl_cache {int dummy; } ;
struct genl_family {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nl_sock*,struct nl_cache**) ;
 struct genl_family* FUNC_1 (struct nl_cache*,char const*) ;
 int FUNC_2 (struct genl_family*) ;
 int FUNC_3 (struct genl_family*) ;
 int FUNC_4 (struct nl_cache*) ;

int FUNC_5(struct nl_sock *VAR_1, const char *VAR_2)
{
 struct nl_cache *VAR_3;
 struct genl_family *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_0(VAR_1, &VAR_3)) < 0)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 == ((void*)0)) {
  VAR_5 = -VAR_0;
  goto errout;
 }

 VAR_5 = FUNC_2(VAR_4);
 FUNC_3(VAR_4);
errout:
 FUNC_4(VAR_3);

 return VAR_5;
}
