
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct git_refdb {TYPE_1__* backend; } ;
typedef int git_oid ;
struct TYPE_2__ {int (* del ) (TYPE_1__*,char const*,int const*,char const*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,int const*,char const*) ;

int FUNC_2(struct git_refdb *VAR_0, const char *VAR_1, const git_oid *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_0 && VAR_0->backend);
 return VAR_0->backend->del(VAR_0->backend, VAR_1, VAR_2, VAR_3);
}
