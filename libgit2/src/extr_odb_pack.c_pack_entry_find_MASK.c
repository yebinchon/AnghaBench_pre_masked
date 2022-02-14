
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_backend {struct git_pack_file* last_found; } ;
struct git_pack_file {int dummy; } ;
struct git_pack_entry {int dummy; } ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (char*,int const*,int ) ;
 scalar_t__ FUNC_1 (struct git_pack_entry*,struct git_pack_file*,int const*,int ) ;
 int FUNC_2 (struct git_pack_entry*,struct pack_backend*,int const*,struct git_pack_file*) ;

__attribute__((used)) static int FUNC_3(struct git_pack_entry *VAR_1, struct pack_backend *VAR_2, const git_oid *VAR_3)
{
 struct git_pack_file *VAR_4 = VAR_2->last_found;

 if (VAR_2->last_found &&
  FUNC_1(VAR_1, VAR_2->last_found, VAR_3, VAR_0) == 0)
  return 0;

 if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4))
  return 0;

 return FUNC_0(
  "failed to find pack entry", VAR_3, VAR_0);
}
