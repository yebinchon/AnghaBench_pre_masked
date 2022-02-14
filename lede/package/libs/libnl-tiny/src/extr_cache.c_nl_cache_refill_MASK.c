
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int dummy; } ;
struct nl_cache {int dummy; } ;


 int FUNC_0 (int,char*,struct nl_cache*,int ) ;
 int FUNC_1 (struct nl_cache*) ;
 int FUNC_2 (struct nl_cache*) ;
 int FUNC_3 (struct nl_sock*,struct nl_cache*) ;
 int FUNC_4 (struct nl_sock*,struct nl_cache*) ;

int FUNC_5(struct nl_sock *VAR_0, struct nl_cache *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(2, "Upading cache %p <%s>, request sent, waiting for dump...\n",
        VAR_1, FUNC_2(VAR_1));
 FUNC_1(VAR_1);

 return FUNC_3(VAR_0, VAR_1);
}
