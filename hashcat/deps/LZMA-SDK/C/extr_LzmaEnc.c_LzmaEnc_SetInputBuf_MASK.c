
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int directInput; int directInputRem; int * bufferBase; } ;
struct TYPE_5__ {TYPE_1__ matchFinderBase; } ;
typedef int SizeT ;
typedef TYPE_2__ CLzmaEnc ;
typedef int Byte ;



__attribute__((used)) static void FUNC_0(CLzmaEnc *VAR_0, const Byte *VAR_1, SizeT VAR_2)
{
  VAR_0->matchFinderBase.directInput = 1;
  VAR_0->matchFinderBase.bufferBase = (Byte *)VAR_1;
  VAR_0->matchFinderBase.directInputRem = VAR_2;
}
