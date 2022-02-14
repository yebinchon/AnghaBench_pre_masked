
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence {int dummy; } ;
struct dma_fence {int dummy; } ;
typedef unsigned long ktime_t ;


 long VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 struct nouveau_fence* FUNC_1 (struct dma_fence*) ;
 unsigned long VAR_8 ;
 int FUNC_2 (struct nouveau_fence*) ;
 int FUNC_3 (unsigned long*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static long
FUNC_6(struct dma_fence *VAR_9, bool VAR_10, long VAR_11)
{
 struct nouveau_fence *VAR_12 = FUNC_1(VAR_9);
 unsigned long VAR_13 = VAR_3 / 1000;
 unsigned long VAR_14 = VAR_8, VAR_15 = VAR_14 + VAR_11;

 while (!FUNC_2(VAR_12)) {
  ktime_t VAR_16;

  VAR_14 = VAR_8;

  if (VAR_11 != VAR_2 && FUNC_5(VAR_14, VAR_15)) {
   FUNC_0(VAR_5);
   return 0;
  }

  FUNC_0(VAR_10 ? VAR_4 :
        VAR_6);

  VAR_16 = VAR_13;
  FUNC_3(&VAR_16, VAR_1);
  VAR_13 *= 2;
  if (VAR_13 > VAR_3)
   VAR_13 = VAR_3;

  if (VAR_10 && FUNC_4(VAR_7))
   return -VAR_0;
 }

 FUNC_0(VAR_5);

 return VAR_15 - VAR_14;
}
