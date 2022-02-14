
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_cb {int cb; int task; } ;
struct dma_fence {int flags; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct dma_fence*,int *,int ) ;
 int FUNC_2 (struct dma_fence*,int *) ;
 int VAR_7 ;
 long FUNC_3 (long) ;
 int FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (int const,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static long FUNC_7(struct dma_fence *VAR_8, bool VAR_9, long VAR_10)
{
 const int VAR_11 = VAR_9 ? VAR_3 : VAR_5;
 struct wait_cb VAR_12 = { .task = VAR_6 };

 if (FUNC_1(VAR_8, &VAR_12.cb, VAR_7))
  return VAR_10;

 while (VAR_10) {
  FUNC_4(VAR_11);

  if (FUNC_6(VAR_0, &VAR_8->flags))
   break;

  if (FUNC_5(VAR_11, VAR_6))
   break;

  VAR_10 = FUNC_3(VAR_10);
 }
 FUNC_0(VAR_4);

 if (!FUNC_2(VAR_8, &VAR_12.cb))
  return VAR_10;

 if (FUNC_5(VAR_11, VAR_6))
  return -VAR_1;

 return -VAR_2;
}
