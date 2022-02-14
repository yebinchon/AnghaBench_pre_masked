
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_4, int VAR_5)
{
 if (FUNC_2(VAR_3, VAR_4))
  return 0;




 if (VAR_2) {
  if (VAR_2->node == VAR_5)
   return 0;
  FUNC_0(VAR_2);
 }

 VAR_2 = FUNC_1(sizeof(*VAR_2),
         VAR_1, VAR_5);
 if (!VAR_2)
  return -VAR_0;
 VAR_2->node = VAR_5;
 return 0;
}
