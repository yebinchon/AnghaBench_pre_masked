
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alginfo {int algtype; scalar_t__ keylen; int keylen_pad; int key_virt; } ;


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
 int* FUNC_0 (int* const,int) ;
 int FUNC_1 (int* const,int ,int ,scalar_t__,int) ;
 int FUNC_2 (int* const,int ,int ,int ,int ) ;
 int FUNC_3 (int* const,int) ;
 int FUNC_4 (int* const,struct alginfo*) ;
 int FUNC_5 (int* const,int ,int) ;
 int FUNC_6 (int* const,int,int) ;
 int FUNC_7 (int* const,int,int) ;
 int FUNC_8 (int* const,int ) ;
 int FUNC_9 (int* const,int*) ;

void FUNC_10(u32 * const VAR_20, struct alginfo *VAR_21, u32 VAR_22,
         int VAR_23, int VAR_24, bool VAR_25, int VAR_26)
{
 u32 VAR_27 = VAR_21->algtype;

 FUNC_8(VAR_20, VAR_5);


 if (VAR_22 != VAR_15 && VAR_21->keylen) {
  u32 *VAR_28;


  VAR_28 = FUNC_0(VAR_20, VAR_7 | VAR_8 |
         VAR_6);

  if (VAR_26 < 6)
   FUNC_1(VAR_20, VAR_21->key_virt,
       VAR_21->keylen_pad,
       VAR_21->keylen, VAR_1 |
       VAR_9 | VAR_10);
  else
   FUNC_4(VAR_20, VAR_21);

  FUNC_9(VAR_20, VAR_28);

  VAR_27 |= VAR_14;
 }


 if (VAR_25)
  FUNC_6(VAR_20, VAR_24, VAR_12 |
    VAR_13);


 FUNC_3(VAR_20, VAR_27 | VAR_22 | VAR_16);





 FUNC_2(VAR_20, VAR_19, VAR_18, VAR_17, VAR_0);

 FUNC_5(VAR_20, 0, VAR_2 | VAR_3 |
        VAR_4 | VAR_11);

 FUNC_7(VAR_20, VAR_23, VAR_12 |
    VAR_13);
}
