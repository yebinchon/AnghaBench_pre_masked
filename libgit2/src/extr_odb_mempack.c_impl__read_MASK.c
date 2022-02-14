
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_packer_db {int objects; } ;
struct memobject {size_t len; int data; int type; } ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_object_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t) ;
 struct memobject* FUNC_2 (int ,int const*) ;
 int FUNC_3 (void*,int ,size_t) ;

__attribute__((used)) static int FUNC_4(void **VAR_1, size_t *VAR_2, git_object_t *VAR_3, git_odb_backend *VAR_4, const git_oid *VAR_5)
{
 struct memory_packer_db *VAR_6 = (struct memory_packer_db *)VAR_4;
 struct memobject *VAR_7;

 if ((VAR_7 = FUNC_2(VAR_6->objects, VAR_5)) == ((void*)0))
  return VAR_0;

 *VAR_2 = VAR_7->len;
 *VAR_3 = VAR_7->type;
 *VAR_1 = FUNC_1(VAR_7->len);
 FUNC_0(*VAR_1);

 FUNC_3(*VAR_1, VAR_7->data, VAR_7->len);
 return 0;
}
