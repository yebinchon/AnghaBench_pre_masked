
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* UInt32 ;
struct TYPE_11__ {int high; int * low; } ;
struct TYPE_10__ {void* range; } ;
typedef TYPE_1__ CRangeEnc ;
typedef int CLzmaProb ;
typedef TYPE_2__ CLenEnc ;


 int FUNC_0 (TYPE_1__*,int ,unsigned int) ;
 int FUNC_1 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_5(CLenEnc *VAR_2, CRangeEnc *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
  UInt32 VAR_6, VAR_7, VAR_8;
  CLzmaProb *VAR_9 = VAR_2->low;
  VAR_6 = VAR_3->range;
  FUNC_4(VAR_3, VAR_9);
  if (VAR_4 >= VAR_1)
  {
    FUNC_3(VAR_3, VAR_9);
    VAR_9 += VAR_1;
    FUNC_4(VAR_3, VAR_9);
    if (VAR_4 >= VAR_1 * 2)
    {
      FUNC_3(VAR_3, VAR_9);
      VAR_3->range = VAR_6;

      FUNC_0(VAR_3, VAR_2->high, VAR_4 - VAR_1 * 2);
      return;
    }
    VAR_4 -= VAR_1;
  }


  {
    unsigned VAR_10;
    unsigned VAR_11;
    FUNC_2(VAR_3, VAR_9);
    VAR_9 += (VAR_5 << (1 + VAR_0));
    VAR_11 = (VAR_4 >> 2) ; FUNC_1(VAR_3, VAR_9 + 1, VAR_11); VAR_10 = (1 << 1) + VAR_11;
    VAR_11 = (VAR_4 >> 1) & 1; FUNC_1(VAR_3, VAR_9 + VAR_10, VAR_11); VAR_10 = (VAR_10 << 1) + VAR_11;
    VAR_11 = VAR_4 & 1; FUNC_1(VAR_3, VAR_9 + VAR_10, VAR_11);
    VAR_3->range = VAR_6;
  }
}
