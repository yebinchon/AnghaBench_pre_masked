
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int dummy; } ;
struct nl_cache_ops {int dummy; } ;
struct nl_cache {int dummy; } ;


 int VAR_0 ;
 struct nl_cache* FUNC_0 (struct nl_cache_ops*) ;
 int FUNC_1 (struct nl_cache*) ;
 int FUNC_2 (struct nl_sock*,struct nl_cache*) ;

int FUNC_3(struct nl_cache_ops *VAR_1, struct nl_sock *VAR_2,
       struct nl_cache **VAR_3)
{
 struct nl_cache *VAR_4;
 int VAR_5;

 if (!(VAR_4 = FUNC_0(VAR_1)))
  return -VAR_0;

 if (VAR_2 && (VAR_5 = FUNC_2(VAR_2, VAR_4)) < 0) {
  FUNC_1(VAR_4);
  return VAR_5;
 }

 *VAR_3 = VAR_4;
 return 0;
}
