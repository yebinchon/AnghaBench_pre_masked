
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {scalar_t__ pathlen; int mode; int namelen; int name; int prev; } ;
struct cache_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct cache_entry const*) ;
 scalar_t__ FUNC_1 (struct cache_entry const*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct cache_entry *VAR_0,
          const struct traverse_info *VAR_1)
{
 if (!VAR_1->prev)
  return 1;
 if (FUNC_1(VAR_0, VAR_1->prev,
        VAR_1->name, VAR_1->namelen, VAR_1->mode))
  return 0;




 return (VAR_1->pathlen < FUNC_0(VAR_0));
}
