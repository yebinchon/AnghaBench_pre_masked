
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int type; void* data; } ;
typedef TYPE_1__ git_rawobj ;
typedef int git_oid ;
typedef int git_object_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

int FUNC_2(git_oid *VAR_0, const void *VAR_1, size_t VAR_2, git_object_t VAR_3)
{
 git_rawobj VAR_4;

 FUNC_0(VAR_0);

 VAR_4.data = (void *)VAR_1;
 VAR_4.len = VAR_2;
 VAR_4.type = VAR_3;

 return FUNC_1(VAR_0, &VAR_4);
}
