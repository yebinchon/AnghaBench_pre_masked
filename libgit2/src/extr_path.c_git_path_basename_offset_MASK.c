
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_4__ {scalar_t__ size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 size_t FUNC_0 (TYPE_1__*,char) ;

size_t FUNC_1(git_buf *VAR_0)
{
 ssize_t VAR_1;

 if (!VAR_0 || VAR_0->size <= 0)
  return 0;

 VAR_1 = FUNC_0(VAR_0, '/');

 if (VAR_1 >= 0 && VAR_0->ptr[VAR_1] == '/')
  return (size_t)(VAR_1 + 1);

 return 0;
}
