
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct cache_entry {int ce_mode; int oid; } ;


 int FUNC_0 (struct strbuf*,int *,int ) ;

__attribute__((used)) static int FUNC_1(const struct cache_entry *VAR_0, struct strbuf *VAR_1)
{
 if (!VAR_0)
  return 0;
 return FUNC_0(VAR_1, &VAR_0->oid, VAR_0->ce_mode);
}
