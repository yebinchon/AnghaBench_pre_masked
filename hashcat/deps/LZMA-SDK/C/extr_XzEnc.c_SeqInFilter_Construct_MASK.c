
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Read; } ;
struct TYPE_5__ {int * p; } ;
struct TYPE_7__ {TYPE_2__ p; TYPE_1__ StateCoder; int * buf; } ;
typedef TYPE_3__ CSeqInFilter ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(CSeqInFilter *VAR_1)
{
  VAR_1->buf = ((void*)0);
  VAR_1->StateCoder.p = ((void*)0);
  VAR_1->p.Read = VAR_0;
}
