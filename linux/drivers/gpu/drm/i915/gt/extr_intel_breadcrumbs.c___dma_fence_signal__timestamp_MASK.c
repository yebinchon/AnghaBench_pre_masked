
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int flags; int timestamp; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static void
FUNC_2(struct dma_fence *VAR_1, ktime_t VAR_2)
{
 VAR_1->timestamp = VAR_2;
 FUNC_0(VAR_0, &VAR_1->flags);
 FUNC_1(VAR_1);
}
