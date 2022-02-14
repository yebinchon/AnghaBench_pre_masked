
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_3__ {int * coders; } ;
typedef int SRes ;
typedef int IStateCoder ;
typedef TYPE_1__ CMixCoder ;
typedef int Byte ;


 int FUNC_0 (int *,int *,size_t) ;
 int VAR_0 ;


__attribute__((used)) static SRes FUNC_1(CMixCoder *VAR_1, unsigned VAR_2, UInt64 VAR_3, Byte *VAR_4, size_t VAR_5)
{
  IStateCoder *VAR_6 = &VAR_1->coders[VAR_2];
  switch (VAR_3)
  {
    case 128: return FUNC_0(VAR_6, VAR_4, VAR_5);
  }
  return VAR_0;
}
