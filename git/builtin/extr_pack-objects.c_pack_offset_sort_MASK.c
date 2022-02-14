
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_git {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct object_entry {scalar_t__ in_pack_offset; TYPE_1__ idx; } ;


 struct packed_git* FUNC_0 (struct object_entry const*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct object_entry *VAR_2 = *(struct object_entry **)VAR_0;
 const struct object_entry *VAR_3 = *(struct object_entry **)VAR_1;
 const struct packed_git *VAR_4 = FUNC_0(VAR_2);
 const struct packed_git *VAR_5 = FUNC_0(VAR_3);


 if (!VAR_4 && !VAR_5)
  return FUNC_1(&VAR_2->idx.oid, &VAR_3->idx.oid);

 if (VAR_4 < VAR_5)
  return -1;
 if (VAR_4 > VAR_5)
  return 1;
 return VAR_2->in_pack_offset < VAR_3->in_pack_offset ? -1 :
   (VAR_2->in_pack_offset > VAR_3->in_pack_offset);
}
