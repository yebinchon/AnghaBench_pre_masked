
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cache {int dummy; } ;


 int FUNC_0 (int,char*,struct nl_cache*,int ) ;
 int FUNC_1 (struct nl_cache*) ;
 int FUNC_2 (struct nl_cache*) ;
 int FUNC_3 (struct nl_cache*) ;

void FUNC_4(struct nl_cache *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0);
 FUNC_0(1, "Freeing cache %p <%s>...\n", VAR_0, FUNC_3(VAR_0));
 FUNC_1(VAR_0);
}
