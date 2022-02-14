
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UWORD ;
typedef int UBYTE ;
struct TYPE_3__ {size_t bank; scalar_t__ offset; } ;
typedef TYPE_1__ BANK_PTR ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1(BANK_PTR *VAR_5)
{
  UBYTE VAR_6;
  VAR_3 = VAR_5->bank;
  VAR_2 = ((UWORD)VAR_0[VAR_3]) + VAR_5->offset;

  VAR_6 = *(VAR_1);
  FUNC_0(VAR_6);

  VAR_4 = VAR_2;
}
