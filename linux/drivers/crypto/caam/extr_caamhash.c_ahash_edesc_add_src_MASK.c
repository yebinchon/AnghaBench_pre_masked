
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sec4_sg_entry {int dummy; } ;
struct caam_hash_ctx {int jrdev; } ;
struct ahash_request {int src; } ;
struct ahash_edesc {unsigned int sec4_sg_bytes; int hw_desc; int sec4_sg_dma; struct sec4_sg_entry* sec4_sg; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct sec4_sg_entry*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,size_t,struct sec4_sg_entry*,int ) ;

__attribute__((used)) static int FUNC_7(struct caam_hash_ctx *VAR_3,
          struct ahash_edesc *VAR_4,
          struct ahash_request *VAR_5, int VAR_6,
          unsigned int VAR_7,
          unsigned int VAR_8, size_t VAR_9)
{
 dma_addr_t VAR_10;
 u32 VAR_11;

 if (VAR_6 > 1 || VAR_7) {
  struct sec4_sg_entry *VAR_12 = VAR_4->sec4_sg;
  unsigned int VAR_13 = sizeof(*VAR_12) *
          FUNC_4(VAR_7 + VAR_6);

  FUNC_6(VAR_5->src, VAR_9, VAR_12 + VAR_7, 0);

  VAR_10 = FUNC_2(VAR_3->jrdev, VAR_12, VAR_13, VAR_0);
  if (FUNC_3(VAR_3->jrdev, VAR_10)) {
   FUNC_1(VAR_3->jrdev, "unable to map S/G table\n");
   return -VAR_1;
  }

  VAR_4->sec4_sg_bytes = VAR_13;
  VAR_4->sec4_sg_dma = VAR_10;
  VAR_11 = VAR_2;
 } else {
  VAR_10 = FUNC_5(VAR_5->src);
  VAR_11 = 0;
 }

 FUNC_0(VAR_4->hw_desc, VAR_10, VAR_8 + VAR_9,
     VAR_11);

 return 0;
}
