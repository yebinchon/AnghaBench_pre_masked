
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct push_buffer {int phys; int * mapped; int alloc_size; int dma; } ;
struct host1x_cdma {int dummy; } ;
struct host1x {int dev; int iova; scalar_t__ domain; } ;


 struct host1x* FUNC_0 (struct host1x_cdma*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 struct host1x_cdma* FUNC_5 (struct push_buffer*) ;

__attribute__((used)) static void FUNC_6(struct push_buffer *VAR_0)
{
 struct host1x_cdma *VAR_1 = FUNC_5(VAR_0);
 struct host1x *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_0->mapped)
  return;

 if (VAR_2->domain) {
  FUNC_3(VAR_2->domain, VAR_0->dma, VAR_0->alloc_size);
  FUNC_2(&VAR_2->iova, FUNC_4(&VAR_2->iova, VAR_0->dma));
 }

 FUNC_1(VAR_2->dev, VAR_0->alloc_size, VAR_0->mapped, VAR_0->phys);

 VAR_0->mapped = ((void*)0);
 VAR_0->phys = 0;
}
