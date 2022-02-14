
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_3__ {int check; scalar_t__ realStreamFinished; scalar_t__ processed; scalar_t__ limit; } ;
typedef scalar_t__ Int64 ;
typedef TYPE_1__ CSeqCheckInStream ;


 int FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(CSeqCheckInStream *VAR_0, unsigned VAR_1)
{
  VAR_0->limit = (UInt64)(Int64)-1;
  VAR_0->processed = 0;
  VAR_0->realStreamFinished = 0;
  FUNC_0(&VAR_0->check, VAR_1);
}
