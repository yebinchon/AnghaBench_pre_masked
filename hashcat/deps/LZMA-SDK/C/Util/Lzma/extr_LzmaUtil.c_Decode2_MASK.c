
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_8__ {int (* Read ) (TYPE_2__*,int *,size_t*) ;} ;
struct TYPE_7__ {size_t (* Write ) (TYPE_1__*,int *,size_t) ;} ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef scalar_t__ Int64 ;
typedef TYPE_1__ ISeqOutStream ;
typedef TYPE_2__ ISeqInStream ;
typedef scalar_t__ ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef int CLzmaDec ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__*,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_2__*,int *,size_t*) ;
 size_t FUNC_4 (TYPE_1__*,int *,size_t) ;

__attribute__((used)) static SRes FUNC_5(CLzmaDec *VAR_8, ISeqOutStream *VAR_9, ISeqInStream *VAR_10,
    UInt64 VAR_11)
{
  int VAR_12 = (VAR_11 != (UInt64)(Int64)-1);
  Byte VAR_13[VAR_0];
  Byte VAR_14[VAR_4];
  size_t VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
  FUNC_1(VAR_8);
  for (;;)
  {
    if (VAR_15 == VAR_16)
    {
      VAR_16 = VAR_0;
      FUNC_2(VAR_10->Read(VAR_10, VAR_13, &VAR_16));
      VAR_15 = 0;
    }
    {
      SRes VAR_18;
      SizeT VAR_19 = VAR_16 - VAR_15;
      SizeT VAR_20 = VAR_4 - VAR_17;
      ELzmaFinishMode VAR_21 = VAR_1;
      ELzmaStatus VAR_22;
      if (VAR_12 && VAR_20 > VAR_11)
      {
        VAR_20 = (SizeT)VAR_11;
        VAR_21 = VAR_2;
      }

      VAR_18 = FUNC_0(VAR_8, VAR_14 + VAR_17, &VAR_20,
        VAR_13 + VAR_15, &VAR_19, VAR_21, &VAR_22);
      VAR_15 += VAR_19;
      VAR_17 += VAR_20;
      VAR_11 -= VAR_20;

      if (VAR_9)
        if (VAR_9->Write(VAR_9, VAR_14, VAR_17) != VAR_17)
          return VAR_6;

      VAR_17 = 0;

      if (VAR_18 != VAR_7 || (VAR_12 && VAR_11 == 0))
        return VAR_18;

      if (VAR_19 == 0 && VAR_20 == 0)
      {
        if (VAR_12 || VAR_22 != VAR_3)
          return VAR_5;
        return VAR_18;
      }
    }
  }
}
