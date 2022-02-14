
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_odb_object ;
typedef int git_cached_obj ;
struct TYPE_4__ {int * odb; } ;
struct TYPE_5__ {TYPE_1__ data; scalar_t__ raw; } ;
typedef TYPE_2__ git_blob ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

int FUNC_2(void *VAR_0, git_odb_object *VAR_1)
{
 git_blob *VAR_2 = (git_blob *) VAR_0;
 FUNC_0(VAR_2);
 FUNC_1((git_cached_obj *)VAR_1);
 VAR_2->raw = 0;
 VAR_2->data.odb = VAR_1;
 return 0;
}
