
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_backend {int dummy; } ;
struct git_pack_entry {int dummy; } ;
typedef int git_oid ;
typedef int git_odb_backend ;


 scalar_t__ FUNC_0 (struct git_pack_entry*,struct pack_backend*,int const*) ;

__attribute__((used)) static int FUNC_1(git_odb_backend *VAR_0, const git_oid *VAR_1)
{
 struct git_pack_entry VAR_2;
 return FUNC_0(&VAR_2, (struct pack_backend *)VAR_0, VAR_1) == 0;
}
