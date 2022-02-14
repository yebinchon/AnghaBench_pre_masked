
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_namelen; int name; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct cache_entry const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct cache_entry *VAR_2, *VAR_3;

 VAR_2 = *((const struct cache_entry **)VAR_0);
 VAR_3 = *((const struct cache_entry **)VAR_1);
 return FUNC_0(VAR_2->name, VAR_2->ce_namelen, FUNC_1(VAR_2),
      VAR_3->name, VAR_3->ce_namelen, FUNC_1(VAR_3));
}
