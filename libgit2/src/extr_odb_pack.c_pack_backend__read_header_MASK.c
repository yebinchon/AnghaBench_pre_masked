
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_backend {int dummy; } ;
struct git_pack_entry {int offset; int p; } ;
struct git_odb_backend {int dummy; } ;
typedef int git_oid ;
typedef int git_object_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t*,int *,int ,int ) ;
 int FUNC_2 (struct git_pack_entry*,struct pack_backend*,int const*) ;

__attribute__((used)) static int FUNC_3(
 size_t *VAR_0, git_object_t *VAR_1,
 struct git_odb_backend *VAR_2, const git_oid *VAR_3)
{
 struct git_pack_entry VAR_4;
 int VAR_5;

 FUNC_0(VAR_0 && VAR_1 && VAR_2 && VAR_3);

 if ((VAR_5 = FUNC_2(&VAR_4, (struct pack_backend *)VAR_2, VAR_3)) < 0)
  return VAR_5;

 return FUNC_1(VAR_0, VAR_1, VAR_4.p, VAR_4.offset);
}
