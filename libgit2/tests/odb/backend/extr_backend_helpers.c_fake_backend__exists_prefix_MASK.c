
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb_backend ;
struct TYPE_5__ {int oid; } ;
typedef TYPE_1__ fake_object ;
struct TYPE_6__ {int exists_prefix_calls; } ;
typedef TYPE_2__ fake_backend ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__ const**,TYPE_2__*,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(
 git_oid *VAR_0, git_odb_backend *VAR_1, const git_oid *VAR_2, size_t VAR_3)
{
 const fake_object *VAR_4;
 fake_backend *VAR_5;
 int VAR_6;

 VAR_5 = (fake_backend *)VAR_1;

 VAR_5->exists_prefix_calls++;

 if ((VAR_6 = FUNC_1(&VAR_4, VAR_5, VAR_2, VAR_3)) < 0)
  return VAR_6;

 if (VAR_0)
  FUNC_0(VAR_0, VAR_4->oid);

 return 0;
}
