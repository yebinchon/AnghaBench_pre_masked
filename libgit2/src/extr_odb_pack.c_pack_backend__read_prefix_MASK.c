
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pack_backend {int dummy; } ;
struct git_pack_entry {int const sha1; int offset; int p; } ;
struct TYPE_3__ {size_t len; int type; void* data; int * member_0; } ;
typedef TYPE_1__ git_rawobj ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_object_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (void**,size_t*,int *,int *,int const*) ;
 int FUNC_4 (struct git_pack_entry*,struct pack_backend*,int const*,size_t) ;

__attribute__((used)) static int FUNC_5(
 git_oid *VAR_2,
 void **VAR_3,
 size_t *VAR_4,
 git_object_t *VAR_5,
 git_odb_backend *VAR_6,
 const git_oid *VAR_7,
 size_t VAR_8)
{
 int VAR_9 = 0;

 if (VAR_8 < VAR_1)
  VAR_9 = FUNC_0("prefix length too short");

 else if (VAR_8 >= VAR_0) {

  VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  if (!VAR_9)
   FUNC_1(VAR_2, VAR_7);
 } else {
  struct git_pack_entry VAR_10;
  git_rawobj VAR_11 = {((void*)0)};

  if ((VAR_9 = FUNC_4(
    &VAR_10, (struct pack_backend *)VAR_6, VAR_7, VAR_8)) == 0 &&
   (VAR_9 = FUNC_2(&VAR_11, VAR_10.p, &VAR_10.offset)) == 0)
  {
   *VAR_3 = VAR_11.data;
   *VAR_4 = VAR_11.len;
   *VAR_5 = VAR_11.type;
   FUNC_1(VAR_2, &VAR_10.sha1);
  }
 }

 return VAR_9;
}
