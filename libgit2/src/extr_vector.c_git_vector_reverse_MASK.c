
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; void** contents; } ;
typedef TYPE_1__ git_vector ;



void FUNC_0(git_vector *VAR_0)
{
 size_t VAR_1, VAR_2;

 if (VAR_0->length == 0)
  return;

 VAR_1 = 0;
 VAR_2 = VAR_0->length - 1;

 while (VAR_1 < VAR_2) {
  void *VAR_3 = VAR_0->contents[VAR_1];
  VAR_0->contents[VAR_1] = VAR_0->contents[VAR_2];
  VAR_0->contents[VAR_2] = VAR_3;
  VAR_1++;
  VAR_2--;
 }
}
