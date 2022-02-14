
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_flags; scalar_t__ ce_mode; int oid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const struct cache_entry *VAR_1, const struct cache_entry *VAR_2)
{
 if (!!VAR_1 != !!VAR_2)
  return 0;
 if (!VAR_1 && !VAR_2)
  return 1;
 if ((VAR_1->ce_flags | VAR_2->ce_flags) & VAR_0)
  return 0;
 return VAR_1->ce_mode == VAR_2->ce_mode &&
        FUNC_0(&VAR_1->oid, &VAR_2->oid);
}
