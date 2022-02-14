
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UWORD ;
struct TYPE_3__ {size_t bank; scalar_t__ offset; } ;
typedef TYPE_1__ BANK_PTR ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 void* FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (size_t,int ,int ,void*,void*,scalar_t__) ;
 int * VAR_1 ;
 scalar_t__* VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

void FUNC_3()
{
  BANK_PTR VAR_7;
  UWORD VAR_8;


  FUNC_0(VAR_0, &VAR_7, &VAR_1[VAR_3]);
  VAR_8 = ((UWORD)VAR_2[VAR_7.bank]) + VAR_7.offset;
  VAR_6 = FUNC_1(VAR_7.bank, VAR_8);
  VAR_5 = FUNC_1(VAR_7.bank, VAR_8 + 1u);
  VAR_4 = FUNC_1(VAR_7.bank, VAR_8 + 2u);
  FUNC_2(VAR_7.bank, 0, 0, VAR_5, VAR_4, VAR_8 + 3u);
}
