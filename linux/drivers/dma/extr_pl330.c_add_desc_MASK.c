
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dma_pl330_desc {int node; } ;
typedef int spinlock_t ;
typedef int gfp_t ;


 int FUNC_0 (struct dma_pl330_desc*) ;
 struct dma_pl330_desc* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct list_head *VAR_0, spinlock_t *VAR_1,
      gfp_t VAR_2, int VAR_3)
{
 struct dma_pl330_desc *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return 0;

 FUNC_3(VAR_1, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_0(&VAR_4[VAR_6]);
  FUNC_2(&VAR_4[VAR_6].node, VAR_0);
 }

 FUNC_4(VAR_1, VAR_5);

 return VAR_3;
}
