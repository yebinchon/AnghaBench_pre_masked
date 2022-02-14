
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_fence {int queue; } ;
struct dma_fence {int dummy; } ;


 struct panfrost_fence* FUNC_0 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_1(struct dma_fence *VAR_0)
{
 struct panfrost_fence *VAR_1 = FUNC_0(VAR_0);

 switch (VAR_1->queue) {
 case 0:
  return "panfrost-js-0";
 case 1:
  return "panfrost-js-1";
 case 2:
  return "panfrost-js-2";
 default:
  return ((void*)0);
 }
}
