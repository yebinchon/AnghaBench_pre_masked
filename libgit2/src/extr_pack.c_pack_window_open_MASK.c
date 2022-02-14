
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int size; } ;
struct git_pack_file {TYPE_1__ mwf; } ;
typedef int git_off_t ;
typedef int git_mwindow ;


 unsigned char* FUNC_0 (TYPE_1__*,int **,int,int,unsigned int*) ;
 scalar_t__ FUNC_1 (struct git_pack_file*) ;

__attribute__((used)) static unsigned char *FUNC_2(
  struct git_pack_file *VAR_0,
  git_mwindow **VAR_1,
  git_off_t VAR_2,
  unsigned int *VAR_3)
{
 if (VAR_0->mwf.fd == -1 && FUNC_1(VAR_0) < 0)
  return ((void*)0);
 if (VAR_2 > (VAR_0->mwf.size - 20))
  return ((void*)0);
 if (VAR_2 < 0)
  return ((void*)0);

 return FUNC_0(&VAR_0->mwf, VAR_1, VAR_2, 20, VAR_3);
 }
