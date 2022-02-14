
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int guid_t ;
struct TYPE_3__ {int guid; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_2(const guid_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (FUNC_1(VAR_1, &VAR_0[VAR_2].guid))
   return 1;
 return 0;
}
