
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int checksum; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int const*) ;

int FUNC_3(
 git_index *VAR_0, const git_oid *VAR_1)
{

 if (FUNC_1(VAR_0, 0) < 0)
  FUNC_0();

 return !!FUNC_2(&VAR_0->checksum, VAR_1);
}
