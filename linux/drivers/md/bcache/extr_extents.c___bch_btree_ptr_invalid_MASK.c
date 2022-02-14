
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int dummy; } ;
struct bkey {int dummy; } ;
typedef int buf ;


 scalar_t__ FUNC_0 (struct bkey const*) ;
 int FUNC_1 (struct bkey const*) ;
 int FUNC_2 (struct bkey const*) ;
 scalar_t__ FUNC_3 (struct cache_set*,struct bkey const*) ;
 int FUNC_4 (char*,int,struct bkey const*) ;
 int FUNC_5 (struct cache_set*,struct bkey const*) ;
 int FUNC_6 (struct cache_set*,char*,char*,int ) ;

bool FUNC_7(struct cache_set *VAR_0, const struct bkey *VAR_1)
{
 char VAR_2[80];

 if (!FUNC_1(VAR_1) || !FUNC_2(VAR_1) || FUNC_0(VAR_1))
  goto bad;

 if (FUNC_3(VAR_0, VAR_1))
  goto bad;

 return 0;
bad:
 FUNC_4(VAR_2, sizeof(VAR_2), VAR_1);
 FUNC_6(VAR_0, "spotted btree ptr %s: %s", VAR_2, FUNC_5(VAR_0, VAR_1));
 return 1;
}
