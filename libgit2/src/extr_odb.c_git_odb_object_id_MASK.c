
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int const oid; } ;
struct TYPE_5__ {TYPE_1__ cached; } ;
typedef TYPE_2__ git_odb_object ;



const git_oid *FUNC_0(git_odb_object *VAR_0)
{
 return &VAR_0->cached.oid;
}
