
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ obj; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *,int *) ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2[VAR_3].obj)
   FUNC_0(VAR_2[VAR_3].obj, VAR_0, ((void*)0), ((void*)0));
 }
}
