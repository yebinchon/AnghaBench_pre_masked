
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (struct cache*,int) ;
 int FUNC_3 (struct cache*) ;
 int FUNC_4 (struct cache*) ;
 int FUNC_5 (struct cache*) ;
 int FUNC_6 (struct cache*) ;

__attribute__((used)) static bool FUNC_7(struct cache *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  FUNC_0("%s: could not write dirty bitset", FUNC_1(VAR_0));

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2)
  FUNC_0("%s: could not write discard bitset", FUNC_1(VAR_0));

 FUNC_3(VAR_0);

 VAR_3 = FUNC_6(VAR_0);
 if (VAR_3)
  FUNC_0("%s: could not write hints", FUNC_1(VAR_0));






 VAR_4 = FUNC_2(VAR_0, !VAR_1 && !VAR_2 && !VAR_3);
 if (VAR_4)
  FUNC_0("%s: could not write cache metadata", FUNC_1(VAR_0));

 return !VAR_1 && !VAR_2 && !VAR_3 && !VAR_4;
}
