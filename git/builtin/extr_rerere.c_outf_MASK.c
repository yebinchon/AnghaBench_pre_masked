
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int ptr; } ;
typedef TYPE_1__ mmbuffer_t ;


 scalar_t__ FUNC_0 (int,int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, mmbuffer_t *VAR_1, int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_0(1, VAR_1[VAR_3].ptr, VAR_1[VAR_3].size) < 0)
   return -1;
 return 0;
}
