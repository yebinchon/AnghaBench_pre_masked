
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alginfo {unsigned int keylen; unsigned int keylen_pad; int key_dma; int key_virt; scalar_t__ key_inline; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * FUNC_0 (int * const,int) ;
 int FUNC_1 (int * const,int ,unsigned int,int) ;
 int FUNC_2 (int * const,int ,unsigned int,unsigned int,int) ;
 int FUNC_3 (int * const,int *,unsigned int,int) ;
 int FUNC_4 (int * const,int) ;
 int FUNC_5 (int * const,struct alginfo* const) ;
 int FUNC_6 (int * const,int) ;
 int FUNC_7 (int * const,int *) ;

__attribute__((used)) static void FUNC_8(u32 * const VAR_18,
      struct alginfo * const VAR_19,
      struct alginfo * const VAR_20,
      const bool VAR_21, u32 *VAR_22, int VAR_23)
{
 u32 *VAR_24;
 unsigned int VAR_25 = VAR_19->keylen;


 FUNC_6(VAR_18, VAR_4 | VAR_3);


 VAR_24 = FUNC_0(VAR_18, VAR_6 | VAR_7 |
       VAR_5);






 if (VAR_21)
  VAR_25 -= VAR_2;

 if (VAR_23 < 6) {
  if (VAR_20->key_inline)
   FUNC_2(VAR_18, VAR_20->key_virt,
       VAR_20->keylen_pad, VAR_20->keylen,
       VAR_1 | VAR_9 |
       VAR_10);
  else
   FUNC_1(VAR_18, VAR_20->key_dma, VAR_20->keylen,
       VAR_1 | VAR_9 | VAR_10);
 } else {
  FUNC_5(VAR_18, VAR_20);
 }

 if (VAR_19->key_inline)
  FUNC_2(VAR_18, VAR_19->key_virt, VAR_25,
      VAR_25, VAR_0 | VAR_8);
 else
  FUNC_1(VAR_18, VAR_19->key_dma, VAR_25, VAR_0 |
      VAR_8);


 if (VAR_21) {
  FUNC_3(VAR_18, VAR_22, VAR_2,
       VAR_11 |
       VAR_13 | VAR_12);
  FUNC_4(VAR_18,
       VAR_17 |
       VAR_14 |
       (16 << VAR_16) |
       (VAR_2 << VAR_15));
 }

 FUNC_7(VAR_18, VAR_24);
}
