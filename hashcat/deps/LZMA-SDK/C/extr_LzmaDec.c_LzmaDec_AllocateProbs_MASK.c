
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prop; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef int CLzmaProps ;
typedef TYPE_1__ CLzmaDec ;
typedef int Byte ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

SRes FUNC_3(CLzmaDec *VAR_1, const Byte *VAR_2, unsigned VAR_3, ISzAllocPtr VAR_4)
{
  CLzmaProps VAR_5;
  FUNC_2(FUNC_1(&VAR_5, VAR_2, VAR_3));
  FUNC_2(FUNC_0(VAR_1, &VAR_5, VAR_4));
  VAR_1->prop = VAR_5;
  return VAR_0;
}
