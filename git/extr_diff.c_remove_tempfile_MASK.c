
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * name; int tempfile; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  if (FUNC_2(VAR_0[VAR_1].tempfile))
   FUNC_1(&VAR_0[VAR_1].tempfile);
  VAR_0[VAR_1].name = ((void*)0);
 }
}
