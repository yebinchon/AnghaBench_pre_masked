
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct git__dirent {int dummy; } ;
struct TYPE_4__ {int entry; } ;
typedef TYPE_1__ git__DIR ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,struct git__dirent**,int *) ;

struct git__dirent *FUNC_1(git__DIR *VAR_0)
{
 struct git__dirent *VAR_1;
 if (FUNC_0(VAR_0, &VAR_0->entry, &VAR_1, ((void*)0)) < 0)
  return ((void*)0);
 return VAR_1;
}
