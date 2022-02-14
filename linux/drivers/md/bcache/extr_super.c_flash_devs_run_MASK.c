
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid_entry {int dummy; } ;
struct cache_set {int nr_uuids; struct uuid_entry* uuids; } ;


 scalar_t__ FUNC_0 (struct uuid_entry*) ;
 int FUNC_1 (struct cache_set*,struct uuid_entry*) ;

__attribute__((used)) static int FUNC_2(struct cache_set *VAR_0)
{
 int VAR_1 = 0;
 struct uuid_entry *VAR_2;

 for (VAR_2 = VAR_0->uuids;
      VAR_2 < VAR_0->uuids + VAR_0->nr_uuids && !VAR_1;
      VAR_2++)
  if (FUNC_0(VAR_2))
   VAR_1 = FUNC_1(VAR_0, VAR_2);

 return VAR_1;
}
