
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t*,size_t) ;

__attribute__((used)) static void
FUNC_2(size_t *VAR_2, u_int VAR_3)
{
 u_int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (VAR_1[VAR_4].type == VAR_0)
   FUNC_1(&VAR_1[VAR_4], VAR_2, VAR_3);
}
