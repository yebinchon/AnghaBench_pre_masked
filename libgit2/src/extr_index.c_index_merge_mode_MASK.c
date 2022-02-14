
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int mode; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_6__ {scalar_t__ distrust_filemode; scalar_t__ no_symlinks; } ;
typedef TYPE_2__ git_index ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(
 git_index *VAR_0, git_index_entry *VAR_1, unsigned int VAR_2)
{
 if (VAR_0->no_symlinks && FUNC_1(VAR_2) &&
  VAR_1 && FUNC_0(VAR_1->mode))
  return VAR_1->mode;

 if (VAR_0->distrust_filemode && FUNC_1(VAR_2))
  return (VAR_1 && FUNC_1(VAR_1->mode)) ?
   VAR_1->mode : FUNC_2(0666);

 return FUNC_2(VAR_2);
}
