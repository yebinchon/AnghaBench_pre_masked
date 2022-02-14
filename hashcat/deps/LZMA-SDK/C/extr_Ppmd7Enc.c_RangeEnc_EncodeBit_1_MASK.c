
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int Range; int Low; } ;
typedef TYPE_1__ CPpmd7z_RangeEnc ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(CPpmd7z_RangeEnc *VAR_1, UInt32 VAR_2)
{
  UInt32 VAR_3 = (VAR_1->Range >> 14) * VAR_2;
  VAR_1->Low += VAR_3;
  VAR_1->Range -= VAR_3;
  while (VAR_1->Range < VAR_0)
  {
    VAR_1->Range <<= 8;
    FUNC_0(VAR_1);
  }
}
