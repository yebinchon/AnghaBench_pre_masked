
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sec4_sg_entry {int dummy; } ;
struct caam_hash_ctx {int jrdev; } ;
struct ahash_edesc {int hw_desc; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct ahash_edesc* FUNC_3 (int,int) ;

__attribute__((used)) static struct ahash_edesc *FUNC_4(struct caam_hash_ctx *VAR_3,
          int VAR_4, u32 *VAR_5,
          dma_addr_t VAR_6,
          gfp_t VAR_7)
{
 struct ahash_edesc *VAR_8;
 unsigned int VAR_9 = VAR_4 * sizeof(struct sec4_sg_entry);

 VAR_8 = FUNC_3(sizeof(*VAR_8) + VAR_9, VAR_0 | VAR_7);
 if (!VAR_8) {
  FUNC_1(VAR_3->jrdev, "could not allocate extended descriptor\n");
  return ((void*)0);
 }

 FUNC_2(VAR_8->hw_desc, VAR_6, FUNC_0(VAR_5),
        VAR_2 | VAR_1);

 return VAR_8;
}
