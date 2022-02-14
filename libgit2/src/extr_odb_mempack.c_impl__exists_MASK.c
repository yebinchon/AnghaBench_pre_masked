
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_packer_db {int objects; } ;
typedef int git_oid ;
typedef int git_odb_backend ;


 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static int FUNC_1(git_odb_backend *VAR_0, const git_oid *VAR_1)
{
 struct memory_packer_db *VAR_2 = (struct memory_packer_db *)VAR_0;

 return FUNC_0(VAR_2->objects, VAR_1);
}
