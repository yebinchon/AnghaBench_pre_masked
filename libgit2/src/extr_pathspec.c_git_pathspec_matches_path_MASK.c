
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pathspec; } ;
typedef TYPE_1__ git_pathspec ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,int,int,int *,int *) ;

int FUNC_2(
 const git_pathspec *VAR_2, uint32_t VAR_3, const char *VAR_4)
{
 bool VAR_5 = (VAR_3 & VAR_1) != 0;
 bool VAR_6 = (VAR_3 & VAR_0) != 0;

 FUNC_0(VAR_2 && VAR_4);

 return (0 != FUNC_1(
  &VAR_2->pathspec, VAR_4, VAR_5, VAR_6, ((void*)0), ((void*)0)));
}
