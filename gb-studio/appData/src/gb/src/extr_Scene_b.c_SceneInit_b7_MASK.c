
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UWORD ;
typedef int UBYTE ;
struct TYPE_3__ {size_t bank; scalar_t__ offset; } ;
typedef TYPE_1__ BANK_PTR ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (size_t,int ,int ,scalar_t__) ;
 scalar_t__* VAR_1 ;
 int * VAR_2 ;
 size_t VAR_3 ;

void FUNC_3()
{
  BANK_PTR VAR_4;
  UWORD VAR_5;
  UBYTE VAR_6;

  FUNC_0(VAR_0, &VAR_4, &VAR_2[VAR_3]);
  VAR_5 = ((UWORD)VAR_1[VAR_4.bank]) + VAR_4.offset;
  VAR_6 = FUNC_1(VAR_4.bank, VAR_5);
  FUNC_2(VAR_4.bank, 0, VAR_6, VAR_5 + 1u);
}
