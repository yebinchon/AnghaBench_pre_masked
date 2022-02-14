
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_11__ {TYPE_1__* outStream; } ;
struct TYPE_10__ {scalar_t__ nowPos64; TYPE_4__ rc; int result; void* finished; void* writeEndMark; } ;
struct TYPE_8__ {int Write; } ;
struct TYPE_9__ {size_t rem; void* overflow; TYPE_1__ vt; int * data; } ;
typedef int SRes ;
typedef TYPE_2__ CLzmaEnc_SeqOutStreamBuf ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_3__ CLzmaEnc ;
typedef int Byte ;
typedef scalar_t__ BoolInt ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

SRes FUNC_4(CLzmaEncHandle VAR_4, BoolInt VAR_5,
    Byte *VAR_6, size_t *VAR_7, UInt32 VAR_8, UInt32 *VAR_9)
{
  CLzmaEnc *VAR_10 = (CLzmaEnc *)VAR_4;
  UInt64 VAR_11;
  SRes VAR_12;
  CLzmaEnc_SeqOutStreamBuf VAR_13;

  VAR_13.vt.Write = VAR_3;
  VAR_13.data = VAR_6;
  VAR_13.rem = *VAR_7;
  VAR_13.overflow = VAR_0;

  VAR_10->writeEndMark = VAR_0;
  VAR_10->finished = VAR_0;
  VAR_10->result = VAR_2;

  if (VAR_5)
    FUNC_1(VAR_10);
  FUNC_2(VAR_10);

  VAR_11 = VAR_10->nowPos64;
  FUNC_3(&VAR_10->rc);
  VAR_10->rc.outStream = &VAR_13.vt;

  if (VAR_8 == 0)
    return VAR_1;

  VAR_12 = FUNC_0(VAR_10, VAR_8, *VAR_9);

  *VAR_9 = (UInt32)(VAR_10->nowPos64 - VAR_11);
  *VAR_7 -= VAR_13.rem;
  if (VAR_13.overflow)
    return VAR_1;

  return VAR_12;
}
