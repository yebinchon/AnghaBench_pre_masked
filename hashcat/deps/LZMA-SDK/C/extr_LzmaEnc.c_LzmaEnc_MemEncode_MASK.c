
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* outStream; } ;
struct TYPE_9__ {int writeEndMark; scalar_t__ nowPos64; TYPE_1__ rc; } ;
struct TYPE_7__ {int Write; } ;
struct TYPE_8__ {scalar_t__ overflow; scalar_t__ rem; TYPE_2__ vt; int * data; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAllocPtr ;
typedef int ICompressProgress ;
typedef TYPE_3__ CLzmaEnc_SeqOutStreamBuf ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_4__ CLzmaEnc ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int const*,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

SRes FUNC_2(CLzmaEncHandle VAR_5, Byte *VAR_6, SizeT *VAR_7, const Byte *VAR_8, SizeT VAR_9,
    int VAR_10, ICompressProgress *VAR_11, ISzAllocPtr VAR_12, ISzAllocPtr VAR_13)
{
  SRes VAR_14;
  CLzmaEnc *VAR_15 = (CLzmaEnc *)VAR_5;

  CLzmaEnc_SeqOutStreamBuf VAR_16;

  VAR_16.vt.Write = VAR_4;
  VAR_16.data = VAR_6;
  VAR_16.rem = *VAR_7;
  VAR_16.overflow = VAR_0;

  VAR_15->writeEndMark = VAR_10;
  VAR_15->rc.outStream = &VAR_16.vt;

  VAR_14 = FUNC_1(VAR_5, VAR_8, VAR_9, 0, VAR_12, VAR_13);

  if (VAR_14 == VAR_3)
  {
    VAR_14 = FUNC_0(VAR_15, VAR_11);
    if (VAR_14 == VAR_3 && VAR_15->nowPos64 != VAR_9)
      VAR_14 = VAR_1;
  }

  *VAR_7 -= VAR_16.rem;
  if (VAR_16.overflow)
    return VAR_2;
  return VAR_14;
}
