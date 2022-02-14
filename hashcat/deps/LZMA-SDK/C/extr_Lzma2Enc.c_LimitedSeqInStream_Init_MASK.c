
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_3__ {scalar_t__ finished; scalar_t__ processed; scalar_t__ limit; } ;
typedef scalar_t__ Int64 ;
typedef TYPE_1__ CLimitedSeqInStream ;



__attribute__((used)) static void FUNC_0(CLimitedSeqInStream *VAR_0)
{
  VAR_0->limit = (UInt64)(Int64)-1;
  VAR_0->processed = 0;
  VAR_0->finished = 0;
}
