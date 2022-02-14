
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int loose_backend ;
typedef int git_oid ;
typedef int git_odb_backend ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int const*) ;

__attribute__((used)) static int FUNC_3(
 git_odb_backend *VAR_1,
 const git_oid *VAR_2)
{
 loose_backend *VAR_3 = (loose_backend *)VAR_1;
 git_buf VAR_4 = VAR_0;
 int VAR_5;

 if (FUNC_2(&VAR_4, VAR_3, VAR_2) < 0)
  return -1;

 VAR_5 = FUNC_1(VAR_4.ptr, ((void*)0));
 FUNC_0(&VAR_4);

 return VAR_5;
}
