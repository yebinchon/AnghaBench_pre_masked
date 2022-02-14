
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syncache_head {int dummy; } ;
struct syncache {int dummy; } ;
struct in_conninfo {int dummy; } ;


 int FUNC_0 (struct syncache_head*) ;
 int FUNC_1 (struct syncache_head*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct syncache*,struct syncache_head*) ;
 struct syncache* FUNC_5 (struct in_conninfo*,struct syncache_head**) ;
 int VAR_0 ;

void
FUNC_6(struct in_conninfo *VAR_1)
{
 struct syncache *VAR_2;
 struct syncache_head *VAR_3;

 if (FUNC_3())
  return;
 VAR_2 = FUNC_5(VAR_1, &VAR_3);
 FUNC_0(VAR_3);
 if (VAR_2 != ((void*)0)) {
  FUNC_4(VAR_2, VAR_3);
  FUNC_2(VAR_0);
 }
 FUNC_1(VAR_3);
}
