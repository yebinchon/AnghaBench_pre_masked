
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_backend {int dummy; } ;
struct git_pack_entry {int sha1; int member_0; } ;
typedef int git_oid ;
typedef int git_odb_backend ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct git_pack_entry*,struct pack_backend*,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(
 git_oid *VAR_0, git_odb_backend *VAR_1, const git_oid *VAR_2, size_t VAR_3)
{
 int VAR_4;
 struct pack_backend *VAR_5 = (struct pack_backend *)VAR_1;
 struct git_pack_entry VAR_6 = {0};

 VAR_4 = FUNC_1(&VAR_6, VAR_5, VAR_2, VAR_3);
 FUNC_0(VAR_0, &VAR_6.sha1);
 return VAR_4;
}
