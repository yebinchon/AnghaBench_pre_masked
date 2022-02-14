
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb_backend ;
struct TYPE_3__ {int exists_calls; } ;
typedef TYPE_1__ fake_backend ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int const*,int ) ;

__attribute__((used)) static int FUNC_1(git_odb_backend *VAR_2, const git_oid *VAR_3)
{
 fake_backend *VAR_4;

 VAR_4 = (fake_backend *)VAR_2;

 VAR_4->exists_calls++;

 return FUNC_0(((void*)0), VAR_4, VAR_3, VAR_0) == VAR_1;
}
