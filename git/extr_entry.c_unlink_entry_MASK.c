
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int dummy; } ;
struct cache_entry {int name; int ce_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct submodule* FUNC_4 (struct cache_entry const*) ;
 int FUNC_5 (int ,char*,int *,int ) ;

void FUNC_6(const struct cache_entry *VAR_1)
{
 const struct submodule *VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {

  FUNC_5(VAR_1->name, "HEAD", ((void*)0),
        VAR_0);
 }
 if (!FUNC_1(VAR_1->name, FUNC_0(VAR_1)))
  return;
 if (FUNC_2(VAR_1->ce_mode, VAR_1->name))
  return;
 FUNC_3(VAR_1->name, FUNC_0(VAR_1));
}
