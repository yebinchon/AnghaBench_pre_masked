
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ed {int urb_list; int td_list; int dma; } ;
struct admhcd {int ed_cache; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int *) ;
 struct ed* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct ed*,int ,int) ;

__attribute__((used)) static struct ed *FUNC_3(struct admhcd *VAR_0, gfp_t VAR_1)
{
 dma_addr_t VAR_2;
 struct ed *VAR_3;

 VAR_3 = FUNC_1(VAR_0->ed_cache, VAR_1, &VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->dma = VAR_2;

 FUNC_0(&VAR_3->td_list);
 FUNC_0(&VAR_3->urb_list);

 return VAR_3;
}
