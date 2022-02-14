
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dirty; } ;
typedef TYPE_1__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(git_index *VAR_3)
{
 if (VAR_2 && VAR_3->dirty) {
  FUNC_0(VAR_1,
   "the index has unsaved changes that would be overwritten by this operation");
  return VAR_0;
 }

 return FUNC_1(VAR_3, 0);
}
