
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int UInt64 ;
typedef int UInt32 ;
struct TYPE_3__ {unsigned int size; scalar_t__* blocks; int numBlocks; } ;
typedef int SRes ;
typedef int ISeqOutStream ;
typedef int CXzStreamFlags ;
typedef TYPE_1__ CXzEncIndex ;
typedef scalar_t__ Byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int ,scalar_t__*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int ) ;
 int FUNC_5 (int *,scalar_t__*,unsigned int) ;
 int FUNC_6 (int *,scalar_t__*,unsigned int,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_7 (unsigned int) ;
 int FUNC_8 (scalar_t__*,int ) ;

__attribute__((used)) static SRes FUNC_9(const CXzEncIndex *VAR_3, CXzStreamFlags VAR_4, ISeqOutStream *VAR_5)
{
  Byte VAR_6[32];
  UInt64 VAR_7;
  UInt32 VAR_8 = VAR_0;
  unsigned VAR_9 = 1 + FUNC_8(VAR_6 + 1, VAR_3->numBlocks);

  VAR_7 = VAR_9;
  VAR_6[0] = 0;
  FUNC_3(FUNC_6(VAR_5, VAR_6, VAR_9, &VAR_8));
  FUNC_3(FUNC_6(VAR_5, VAR_3->blocks, VAR_3->size, &VAR_8));
  VAR_7 += VAR_3->size;

  VAR_9 = FUNC_7(VAR_7);
  VAR_6[1] = 0;
  VAR_6[2] = 0;
  VAR_6[3] = 0;
  VAR_7 += VAR_9;

  VAR_8 = FUNC_2(VAR_8, VAR_6 + 4 - VAR_9, VAR_9);
  FUNC_4(VAR_6 + 4, FUNC_0(VAR_8));

  FUNC_4(VAR_6 + 8 + 4, (UInt32)(VAR_7 >> 2));
  VAR_6[8 + 8] = (Byte)(VAR_4 >> 8);
  VAR_6[8 + 9] = (Byte)(VAR_4 & 0xFF);
  FUNC_4(VAR_6 + 8, FUNC_1(VAR_6 + 8 + 4, 6));
  VAR_6[8 + 10] = VAR_1;
  VAR_6[8 + 11] = VAR_2;

  return FUNC_5(VAR_5, VAR_6 + 4 - VAR_9, VAR_9 + 4 + 12);
}
