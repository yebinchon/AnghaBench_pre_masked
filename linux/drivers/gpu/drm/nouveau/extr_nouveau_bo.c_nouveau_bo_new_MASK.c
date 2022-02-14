
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;
struct sg_table {int dummy; } ;
struct nouveau_cli {int dummy; } ;
struct nouveau_bo {int dummy; } ;
struct dma_resv {int dummy; } ;


 scalar_t__ FUNC_0 (struct nouveau_bo*) ;
 int FUNC_1 (struct nouveau_bo*) ;
 struct nouveau_bo* FUNC_2 (struct nouveau_cli*,int *,int*,int ,int ,int ) ;
 int FUNC_3 (struct nouveau_bo*,int ,int,int ,struct sg_table*,struct dma_resv*) ;

int
FUNC_4(struct nouveau_cli *VAR_0, u64 VAR_1, int VAR_2,
        uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5,
        struct sg_table *VAR_6, struct dma_resv *VAR_7,
        struct nouveau_bo **VAR_8)
{
 struct nouveau_bo *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_0, &VAR_1, &VAR_2, VAR_3, VAR_4,
    VAR_5);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = FUNC_3(VAR_9, VAR_1, VAR_2, VAR_3, VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 *VAR_8 = VAR_9;
 return 0;
}
