
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t git_object_t ;
struct TYPE_3__ {scalar_t__ size; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(git_object_t VAR_1)
{
 if (VAR_1 < 0 || ((size_t) VAR_1) >= FUNC_0(VAR_0))
  return 0;

 return (VAR_0[VAR_1].size > 0) ? 1 : 0;
}
