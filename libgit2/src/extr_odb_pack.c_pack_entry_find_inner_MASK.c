
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t length; } ;
struct pack_backend {struct git_pack_file* last_found; TYPE_1__ packs; } ;
struct git_pack_file {int dummy; } ;
struct git_pack_entry {int dummy; } ;
typedef int git_oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct git_pack_entry*,struct git_pack_file*,int const*,int ) ;
 struct git_pack_file* FUNC_1 (TYPE_1__*,size_t) ;

__attribute__((used)) static int FUNC_2(
 struct git_pack_entry *VAR_1,
 struct pack_backend *VAR_2,
 const git_oid *VAR_3,
 struct git_pack_file *VAR_4)
{
 size_t VAR_5;

 if (VAR_4 &&
  FUNC_0(VAR_1, VAR_4, VAR_3, VAR_0) == 0)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->packs.length; ++VAR_5) {
  struct git_pack_file *VAR_6;

  VAR_6 = FUNC_1(&VAR_2->packs, VAR_5);
  if (VAR_6 == VAR_4)
   continue;

  if (FUNC_0(VAR_1, VAR_6, VAR_3, VAR_0) == 0) {
   VAR_2->last_found = VAR_6;
   return 0;
  }
 }

 return -1;
}
