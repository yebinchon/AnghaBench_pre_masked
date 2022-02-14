
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_3__ {unsigned int indexSize; int numBlocks; int sha; } ;
typedef TYPE_1__ CXzUnpacker ;
typedef int Byte ;


 int FUNC_0 (int *,int *,unsigned int) ;
 unsigned int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(CXzUnpacker *VAR_0, UInt64 VAR_1, UInt64 VAR_2)
{
  Byte VAR_3[32];
  unsigned VAR_4 = FUNC_1(VAR_3, VAR_1);
  VAR_4 += FUNC_1(VAR_3 + VAR_4, VAR_2);
  FUNC_0(&VAR_0->sha, VAR_3, VAR_4);
  VAR_0->indexSize += VAR_4;
  VAR_0->numBlocks++;
}
