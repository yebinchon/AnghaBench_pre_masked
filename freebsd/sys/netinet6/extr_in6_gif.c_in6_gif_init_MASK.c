
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encap; int cookie; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(void)
{
 int VAR_5;

 if (!FUNC_0(VAR_1))
  return;

 VAR_4 = FUNC_2(VAR_2,
     ((void*)0), VAR_0);
 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_3); VAR_5++)
  VAR_3[VAR_5].cookie = FUNC_1(
      &VAR_3[VAR_5].encap, ((void*)0), VAR_0);
}
