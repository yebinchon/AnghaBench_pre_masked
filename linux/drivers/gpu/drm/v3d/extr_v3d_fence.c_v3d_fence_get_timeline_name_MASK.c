
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_fence {int queue; } ;
struct dma_fence {int dummy; } ;






 struct v3d_fence* FUNC_0 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_1(struct dma_fence *VAR_0)
{
 struct v3d_fence *VAR_1 = FUNC_0(VAR_0);

 switch (VAR_1->queue) {
 case 131:
  return "v3d-bin";
 case 129:
  return "v3d-render";
 case 128:
  return "v3d-tfu";
 case 130:
  return "v3d-csd";
 default:
  return ((void*)0);
 }
}
