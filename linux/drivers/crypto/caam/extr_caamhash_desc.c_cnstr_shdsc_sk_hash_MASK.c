
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alginfo {int algtype; int keylen; int key_dma; int key_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int* const,int ,int ,int) ;
 int* FUNC_1 (int* const,int) ;
 int FUNC_2 (int* const,int ,int ,int) ;
 int FUNC_3 (int* const,int ,int ,int ,int) ;
 int FUNC_4 (int* const,int ,int ,int ,int ) ;
 int FUNC_5 (int* const,int) ;
 int FUNC_6 (int* const,int ,int) ;
 int FUNC_7 (int* const,int,int) ;
 int FUNC_8 (int* const,int,int) ;
 int FUNC_9 (int* const,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int* const,int*) ;

void FUNC_12(u32 * const VAR_21, struct alginfo *VAR_22, u32 VAR_23,
    int VAR_24, int VAR_25)
{
 u32 *VAR_26;

 FUNC_9(VAR_21, VAR_8 | VAR_7);


 VAR_26 = FUNC_1(VAR_21, VAR_10 | VAR_9);

 if (VAR_23 == VAR_15 || VAR_23 == VAR_16) {
  FUNC_3(VAR_21, VAR_22->key_virt, VAR_22->keylen,
      VAR_22->keylen, VAR_1 | VAR_11);
 } else {
  if (FUNC_10(VAR_22->algtype))

   FUNC_2(VAR_21, VAR_22->key_dma, VAR_22->keylen,
       VAR_1 | VAR_11 | VAR_12);
  else
   FUNC_3(VAR_21, VAR_22->key_virt, VAR_22->keylen,
       VAR_22->keylen, VAR_1 |
       VAR_11);

  FUNC_7(VAR_21, VAR_25, VAR_13 |
    VAR_14);
 }

 FUNC_11(VAR_21, VAR_26);


 FUNC_5(VAR_21, VAR_22->algtype | VAR_23 | VAR_17);





 FUNC_4(VAR_21, VAR_20, VAR_19, VAR_18, VAR_0);


 FUNC_6(VAR_21, 0, VAR_3 | VAR_4 |
        VAR_5 | VAR_2);






 FUNC_8(VAR_21, VAR_24, VAR_13 |
    VAR_14);
 if (FUNC_10(VAR_22->algtype) && VAR_23 == VAR_15)

  FUNC_0(VAR_21, VAR_22->key_dma, VAR_22->keylen,
      VAR_13 | VAR_6);
}
