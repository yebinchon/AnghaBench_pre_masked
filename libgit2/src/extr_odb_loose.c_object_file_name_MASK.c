
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t objects_dirlen; int objects_dir; } ;
typedef TYPE_1__ loose_backend ;
typedef int git_oid ;
struct TYPE_9__ {char* ptr; int size; } ;
typedef TYPE_2__ git_buf ;


 int FUNC_0 (size_t*,size_t,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,size_t) ;
 int FUNC_3 (char*,int const*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(
 git_buf *VAR_1, const loose_backend *VAR_2, const git_oid *VAR_3)
{
 size_t VAR_4;


 FUNC_0(&VAR_4, VAR_2->objects_dirlen, VAR_0);
 FUNC_0(&VAR_4, VAR_4, 3);
 if (FUNC_1(VAR_1, VAR_4) < 0)
  return -1;

 FUNC_2(VAR_1, VAR_2->objects_dir, VAR_2->objects_dirlen);
 FUNC_4(VAR_1);


 FUNC_3(VAR_1->ptr + VAR_1->size, VAR_3);
 VAR_1->size += VAR_0 + 1;
 VAR_1->ptr[VAR_1->size] = '\0';

 return 0;
}
