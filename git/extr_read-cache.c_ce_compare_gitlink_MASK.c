
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct cache_entry {int oid; int name; } ;


 int FUNC_0 (struct object_id*,int *) ;
 scalar_t__ FUNC_1 (int ,char*,struct object_id*) ;

__attribute__((used)) static int FUNC_2(const struct cache_entry *VAR_0)
{
 struct object_id VAR_1;
 if (FUNC_1(VAR_0->name, "HEAD", &VAR_1) < 0)
  return 0;
 return !FUNC_0(&VAR_1, &VAR_0->oid);
}
