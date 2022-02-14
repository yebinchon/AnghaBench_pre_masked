
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct talitos_ptr {int dummy; } ;
struct talitos_private {int dummy; } ;
struct talitos_edesc {int src_nents; int dst_nents; int dma_len; int * link_tbl; void* dma_link_tbl; void* iv_dma; int desc; } ;
struct talitos_desc {int dummy; } ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct talitos_edesc* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device*,char*) ;
 struct talitos_private* FUNC_2 (struct device*) ;
 void* FUNC_3 (struct device*,int *,unsigned int,int ) ;
 int FUNC_4 (struct talitos_private*) ;
 struct talitos_edesc* FUNC_5 (int,int) ;
 int * FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct scatterlist*,int) ;

__attribute__((used)) static struct talitos_edesc *FUNC_9(struct device *VAR_10,
       struct scatterlist *VAR_11,
       struct scatterlist *VAR_12,
       u8 *VAR_13,
       unsigned int VAR_14,
       unsigned int VAR_15,
       unsigned int VAR_16,
       unsigned int VAR_17,
       int VAR_18,
       u32 VAR_19,
       bool VAR_20)
{
 struct talitos_edesc *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 dma_addr_t VAR_28 = 0;
 gfp_t VAR_29 = VAR_19 & VAR_0 ? VAR_7 :
        VAR_5;
 struct talitos_private *VAR_30 = FUNC_2(VAR_10);
 bool VAR_31 = FUNC_4(VAR_30);
 int VAR_32 = VAR_31 ? VAR_8 : VAR_9;

 if (VAR_15 + VAR_16 > VAR_32) {
  FUNC_1(VAR_10, "length exceeds h/w max limit\n");
  return FUNC_0(-VAR_3);
 }

 if (!VAR_12 || VAR_12 == VAR_11) {
  VAR_26 = VAR_14 + VAR_15 + VAR_16;
  VAR_22 = FUNC_8(VAR_11, VAR_26);
  if (VAR_22 < 0) {
   FUNC_1(VAR_10, "Invalid number of src SG.\n");
   return FUNC_0(-VAR_3);
  }
  VAR_22 = (VAR_22 == 1) ? 0 : VAR_22;
  VAR_23 = VAR_12 ? VAR_22 : 0;
  VAR_27 = 0;
 } else {
  VAR_26 = VAR_14 + VAR_15 + (VAR_20 ? 0 : VAR_16);
  VAR_22 = FUNC_8(VAR_11, VAR_26);
  if (VAR_22 < 0) {
   FUNC_1(VAR_10, "Invalid number of src SG.\n");
   return FUNC_0(-VAR_3);
  }
  VAR_22 = (VAR_22 == 1) ? 0 : VAR_22;
  VAR_27 = VAR_14 + VAR_15 + (VAR_20 ? VAR_16 : 0);
  VAR_23 = FUNC_8(VAR_12, VAR_27);
  if (VAR_23 < 0) {
   FUNC_1(VAR_10, "Invalid number of dst SG.\n");
   return FUNC_0(-VAR_3);
  }
  VAR_23 = (VAR_23 == 1) ? 0 : VAR_23;
 }






 VAR_24 = sizeof(struct talitos_edesc);
 if (VAR_22 || VAR_23 || !VAR_20) {
  if (VAR_31)
   VAR_25 = (VAR_22 ? VAR_26 : 0) +
      (VAR_23 ? VAR_27 : 0) + VAR_16;
  else
   VAR_25 = (VAR_22 + VAR_23 + 2) *
      sizeof(struct talitos_ptr) + VAR_16;
  VAR_24 += VAR_25;
 } else {
  VAR_25 = 0;
 }
 VAR_24 += VAR_18 ? VAR_16 : 0;


 if (VAR_31 && !VAR_12)
  VAR_24 += sizeof(struct talitos_desc);
 VAR_24 += VAR_17;

 VAR_21 = FUNC_5(VAR_24, VAR_6 | VAR_29);
 if (!VAR_21)
  return FUNC_0(-VAR_4);
 if (VAR_17) {
  VAR_13 = FUNC_6(((u8 *)VAR_21) + VAR_24 - VAR_17, VAR_13, VAR_17);
  VAR_28 = FUNC_3(VAR_10, VAR_13, VAR_17, VAR_2);
 }
 FUNC_7(&VAR_21->desc, 0, sizeof(VAR_21->desc));

 VAR_21->src_nents = VAR_22;
 VAR_21->dst_nents = VAR_23;
 VAR_21->iv_dma = VAR_28;
 VAR_21->dma_len = VAR_25;
 if (VAR_25)
  VAR_21->dma_link_tbl = FUNC_3(VAR_10, &VAR_21->link_tbl[0],
           VAR_21->dma_len,
           VAR_1);

 return VAR_21;
}
