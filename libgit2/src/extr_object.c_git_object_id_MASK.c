
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {int const oid; } ;
struct TYPE_6__ {TYPE_1__ cached; } ;
typedef TYPE_2__ git_object ;


 int FUNC_0 (TYPE_2__ const*) ;

const git_oid *FUNC_1(const git_object *VAR_0)
{
 FUNC_0(VAR_0);
 return &VAR_0->cached.oid;
}
