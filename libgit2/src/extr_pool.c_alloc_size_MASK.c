
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item_size; } ;
typedef TYPE_1__ git_pool ;



__attribute__((used)) static size_t FUNC_0(git_pool *VAR_0, size_t VAR_1)
{
 const size_t VAR_2 = sizeof(void *) - 1;

 if (VAR_0->item_size > 1) {
  const size_t VAR_3 = (VAR_0->item_size + VAR_2) & ~VAR_2;
  return VAR_3 * VAR_1;
 }

 return (VAR_1 + VAR_2) & ~VAR_2;
}
