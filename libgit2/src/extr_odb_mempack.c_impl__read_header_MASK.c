
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_packer_db {int objects; } ;
struct memobject {size_t len; int type; } ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_object_t ;


 int VAR_0 ;
 struct memobject* FUNC_0 (int ,int const*) ;

__attribute__((used)) static int FUNC_1(size_t *VAR_1, git_object_t *VAR_2, git_odb_backend *VAR_3, const git_oid *VAR_4)
{
 struct memory_packer_db *VAR_5 = (struct memory_packer_db *)VAR_3;
 struct memobject *VAR_6;

 if ((VAR_6 = FUNC_0(VAR_5->objects, VAR_4)) == ((void*)0))
  return VAR_0;

 *VAR_1 = VAR_6->len;
 *VAR_2 = VAR_6->type;
 return 0;
}
