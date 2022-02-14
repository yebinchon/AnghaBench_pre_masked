
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int submodule_prefix; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0, const struct repository *VAR_1,
          const struct cache_entry *VAR_2)
{
 FUNC_1(VAR_0);
 if (VAR_1->submodule_prefix)
  FUNC_0(VAR_0, VAR_1->submodule_prefix);
 FUNC_0(VAR_0, VAR_2->name);
}
