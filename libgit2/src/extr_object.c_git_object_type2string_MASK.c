
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t git_object_t ;
struct TYPE_3__ {char const* str; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *FUNC_1(git_object_t VAR_1)
{
 if (VAR_1 < 0 || ((size_t) VAR_1) >= FUNC_0(VAR_0))
  return "";

 return VAR_0[VAR_1].str;
}
