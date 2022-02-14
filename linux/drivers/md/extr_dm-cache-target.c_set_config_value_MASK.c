
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int policy; } ;


 int FUNC_0 (char*,char const*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (struct cache*,char const*,char const*) ;

__attribute__((used)) static int FUNC_3(struct cache *VAR_1, const char *VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

 if (VAR_4 == VAR_0)
  VAR_4 = FUNC_1(VAR_1->policy, VAR_2, VAR_3);

 if (VAR_4)
  FUNC_0("bad config value for %s: %s", VAR_2, VAR_3);

 return VAR_4;
}
