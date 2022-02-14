
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct TYPE_5__ {int ops; } ;


 struct dma_fence* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct dma_fence *FUNC_5(void)
{
 FUNC_3(&VAR_1);
 if (!VAR_0.ops) {
  FUNC_1(&VAR_0,
          &VAR_2,
          &VAR_1,
          0, 0);
  FUNC_2(&VAR_0);
 }
 FUNC_4(&VAR_1);

 return FUNC_0(&VAR_0);
}
