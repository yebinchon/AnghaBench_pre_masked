
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int numCoders; int status; void* res; int wasFinished; scalar_t__ outWritten; void** results; TYPE_1__* coders; scalar_t__* finished; scalar_t__* pos; scalar_t__* size; } ;
struct TYPE_4__ {int p; int (* Init ) (int ) ;} ;
typedef TYPE_1__ IStateCoder ;
typedef TYPE_2__ CMixCoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(CMixCoder *VAR_4)
{
  unsigned VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2 - 1; VAR_5++)
  {
    VAR_4->size[VAR_5] = 0;
    VAR_4->pos[VAR_5] = 0;
    VAR_4->finished[VAR_5] = 0;
  }
  for (VAR_5 = 0; VAR_5 < VAR_4->numCoders; VAR_5++)
  {
    IStateCoder *VAR_6 = &VAR_4->coders[VAR_5];
    VAR_6->Init(VAR_6->p);
    VAR_4->results[VAR_5] = VAR_3;
  }
  VAR_4->outWritten = 0;
  VAR_4->wasFinished = VAR_1;
  VAR_4->res = VAR_3;
  VAR_4->status = VAR_0;
}
