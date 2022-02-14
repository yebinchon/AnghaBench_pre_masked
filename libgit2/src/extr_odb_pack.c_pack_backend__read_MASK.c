
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pack_backend {int dummy; } ;
struct git_pack_entry {int offset; int p; } ;
struct TYPE_3__ {size_t len; int type; void* data; int * member_0; } ;
typedef TYPE_1__ git_rawobj ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_object_t ;


 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (struct git_pack_entry*,struct pack_backend*,int const*) ;

__attribute__((used)) static int FUNC_2(
 void **VAR_0, size_t *VAR_1, git_object_t *VAR_2,
 git_odb_backend *VAR_3, const git_oid *VAR_4)
{
 struct git_pack_entry VAR_5;
 git_rawobj VAR_6 = {((void*)0)};
 int VAR_7;

 if ((VAR_7 = FUNC_1(&VAR_5, (struct pack_backend *)VAR_3, VAR_4)) < 0 ||
  (VAR_7 = FUNC_0(&VAR_6, VAR_5.p, &VAR_5.offset)) < 0)
  return VAR_7;

 *VAR_0 = VAR_6.data;
 *VAR_1 = VAR_6.len;
 *VAR_2 = VAR_6.type;

 return 0;
}
