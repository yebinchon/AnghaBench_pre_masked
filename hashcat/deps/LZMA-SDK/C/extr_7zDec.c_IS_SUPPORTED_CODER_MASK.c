
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int NumStreams; scalar_t__ MethodID; } ;
typedef TYPE_1__ CSzCoderInfo ;
typedef int BoolInt ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static BoolInt FUNC_1(const CSzCoderInfo *VAR_0)
{
  return
      VAR_0->NumStreams == 1

      && FUNC_0((UInt32)VAR_0->MethodID);
}
