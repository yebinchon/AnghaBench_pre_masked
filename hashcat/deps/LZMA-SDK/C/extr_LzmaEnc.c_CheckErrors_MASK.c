
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ result; } ;
struct TYPE_5__ {scalar_t__ res; } ;
struct TYPE_7__ {scalar_t__ result; int finished; TYPE_2__ matchFinderBase; TYPE_1__ rc; } ;
typedef scalar_t__ SRes ;
typedef TYPE_3__ CLzmaEnc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static SRes FUNC_0(CLzmaEnc *VAR_4)
{
  if (VAR_4->result != VAR_2)
    return VAR_4->result;
  if (VAR_4->rc.res != VAR_2)
    VAR_4->result = VAR_1;
  if (VAR_4->matchFinderBase.result != VAR_2)
    VAR_4->result = VAR_0;
  if (VAR_4->result != VAR_2)
    VAR_4->finished = VAR_3;
  return VAR_4->result;
}
