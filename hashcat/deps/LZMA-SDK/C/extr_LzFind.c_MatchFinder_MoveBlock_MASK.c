
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ keepSizeBefore; scalar_t__ bufferBase; scalar_t__ buffer; scalar_t__ pos; scalar_t__ streamPos; } ;
typedef TYPE_1__ CMatchFinder ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_1(CMatchFinder *VAR_0)
{
  FUNC_0(VAR_0->bufferBase,
      VAR_0->buffer - VAR_0->keepSizeBefore,
      (size_t)(VAR_0->streamPos - VAR_0->pos) + VAR_0->keepSizeBefore);
  VAR_0->buffer = VAR_0->bufferBase + VAR_0->keepSizeBefore;
}
