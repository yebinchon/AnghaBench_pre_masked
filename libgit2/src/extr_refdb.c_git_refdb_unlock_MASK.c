
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_reference ;
struct TYPE_5__ {TYPE_2__* backend; } ;
typedef TYPE_1__ git_refdb ;
struct TYPE_6__ {int (* unlock ) (TYPE_2__*,void*,int,int,int const*,int const*,char const*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,void*,int,int,int const*,int const*,char const*) ;

int FUNC_2(git_refdb *VAR_0, void *VAR_1, int VAR_2, int VAR_3, const git_reference *VAR_4, const git_signature *VAR_5, const char *VAR_6)
{
 FUNC_0(VAR_0);

 return VAR_0->backend->unlock(VAR_0->backend, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
