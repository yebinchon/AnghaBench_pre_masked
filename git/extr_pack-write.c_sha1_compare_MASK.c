
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_idx_entry {int oid; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct pack_idx_entry *VAR_2 = *(struct pack_idx_entry **)VAR_0;
 struct pack_idx_entry *VAR_3 = *(struct pack_idx_entry **)VAR_1;
 return FUNC_0(&VAR_2->oid, &VAR_3->oid);
}
