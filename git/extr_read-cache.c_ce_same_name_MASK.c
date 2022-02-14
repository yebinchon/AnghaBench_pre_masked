
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int name; } ;


 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(const struct cache_entry *VAR_0, const struct cache_entry *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);
 return FUNC_0(VAR_1) == VAR_2 && !FUNC_1(VAR_0->name, VAR_1->name, VAR_2);
}
