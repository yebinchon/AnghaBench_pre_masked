
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_3__ {int alloc; int * ids; int * coders; } ;
typedef int SRes ;
typedef int IStateCoder ;
typedef TYPE_1__ CMixCoder ;
typedef int Byte ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int *,size_t,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;



__attribute__((used)) static SRes FUNC_3(CMixCoder *VAR_1, unsigned VAR_2, UInt64 VAR_3, Byte *VAR_4, size_t VAR_5)
{
  IStateCoder *VAR_6 = &VAR_1->coders[VAR_2];
  VAR_1->ids[VAR_2] = VAR_3;
  switch (VAR_3)
  {
    case 129: return FUNC_1(VAR_6, VAR_4, VAR_5, VAR_1->alloc);



  }
  if (VAR_2 == 0)
    return VAR_0;
  return FUNC_0(VAR_6, VAR_3, 0, VAR_1->alloc);
}
