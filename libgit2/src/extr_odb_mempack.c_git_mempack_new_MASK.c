
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * free; int * exists; int * read_header; int * write; int * read; int version; } ;
struct memory_packer_db {TYPE_1__ parent; int objects; } ;
typedef int git_odb_backend ;


 int FUNC_0 (struct memory_packer_db*) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 struct memory_packer_db* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_4(git_odb_backend **VAR_6)
{
 struct memory_packer_db *VAR_7;

 FUNC_1(VAR_6);

 VAR_7 = FUNC_2(1, sizeof(struct memory_packer_db));
 FUNC_0(VAR_7);

 if (FUNC_3(&VAR_7->objects) < 0)
  return -1;

 VAR_7->parent.version = VAR_0;
 VAR_7->parent.read = &VAR_3;
 VAR_7->parent.write = &VAR_5;
 VAR_7->parent.read_header = &VAR_4;
 VAR_7->parent.exists = &VAR_1;
 VAR_7->parent.free = &VAR_2;

 *VAR_6 = (git_odb_backend *)VAR_7;
 return 0;
}
