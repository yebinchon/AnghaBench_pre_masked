
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_midx_entry {scalar_t__ pack_mtime; int pack_int_id; int oid; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct pack_midx_entry *VAR_2 = (const struct pack_midx_entry *)VAR_0;
 const struct pack_midx_entry *VAR_3 = (const struct pack_midx_entry *)VAR_1;
 int VAR_4 = FUNC_0(&VAR_2->oid, &VAR_3->oid);

 if (VAR_4)
  return VAR_4;

 if (VAR_2->pack_mtime > VAR_3->pack_mtime)
  return -1;
 else if (VAR_2->pack_mtime < VAR_3->pack_mtime)
  return 1;

 return VAR_2->pack_int_id - VAR_3->pack_int_id;
}
