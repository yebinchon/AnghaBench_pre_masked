
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_3__ {int expectedDataSize; } ;
struct TYPE_4__ {TYPE_1__ matchFinderBase; } ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_2__ CLzmaEnc ;



void FUNC_0(CLzmaEncHandle VAR_0, UInt64 VAR_1)
{
  CLzmaEnc *VAR_2 = (CLzmaEnc *)VAR_0;
  VAR_2->matchFinderBase.expectedDataSize = VAR_1;
}
