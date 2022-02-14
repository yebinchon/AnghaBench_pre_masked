
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcif_wb {int dummy; } ;
struct mcif_buf_params {int swlock; int luma_pitch; int chroma_pitch; int warmup_pitch; int * chroma_address; int * luma_address; } ;
struct dcn20_mmhubbub {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int) ;
 struct dcn20_mmhubbub* FUNC_4 (struct mcif_wb*) ;

__attribute__((used)) static void FUNC_5(struct mcif_wb *VAR_34,
  struct mcif_buf_params *VAR_35,
  unsigned int VAR_36)
{
 struct dcn20_mmhubbub *VAR_37 = FUNC_4(VAR_34);


 FUNC_2(VAR_0, VAR_1, VAR_35->swlock);


 FUNC_2(VAR_5, VAR_5, FUNC_0(VAR_35->luma_address[0]));
 FUNC_2(VAR_6, VAR_6, FUNC_1(VAR_35->luma_address[0]));

 FUNC_2(VAR_7, VAR_7, 0);


 FUNC_2(VAR_2, VAR_2, FUNC_0(VAR_35->chroma_address[0]));
 FUNC_2(VAR_3, VAR_3, FUNC_1(VAR_35->chroma_address[0]));

 FUNC_2(VAR_4, VAR_4, 0);


 FUNC_2(VAR_11, VAR_11, FUNC_0(VAR_35->luma_address[1]));
 FUNC_2(VAR_12, VAR_12, FUNC_1(VAR_35->luma_address[1]));

 FUNC_2(VAR_13, VAR_13, 0);


 FUNC_2(VAR_8, VAR_8, FUNC_0(VAR_35->chroma_address[1]));
 FUNC_2(VAR_9, VAR_9, FUNC_1(VAR_35->chroma_address[1]));

 FUNC_2(VAR_10, VAR_10, 0);


 FUNC_2(VAR_17, VAR_17, FUNC_0(VAR_35->luma_address[2]));
 FUNC_2(VAR_18, VAR_18, FUNC_1(VAR_35->luma_address[2]));

 FUNC_2(VAR_19, VAR_19, 0);


 FUNC_2(VAR_14, VAR_14, FUNC_0(VAR_35->chroma_address[2]));
 FUNC_2(VAR_15, VAR_15, FUNC_1(VAR_35->chroma_address[2]));

 FUNC_2(VAR_16, VAR_16, 0);


 FUNC_2(VAR_23, VAR_23, FUNC_0(VAR_35->luma_address[3]));
 FUNC_2(VAR_24, VAR_24, FUNC_1(VAR_35->luma_address[3]));

 FUNC_2(VAR_25, VAR_25, 0);


 FUNC_2(VAR_20, VAR_20, FUNC_0(VAR_35->chroma_address[3]));
 FUNC_2(VAR_21, VAR_21, FUNC_1(VAR_35->chroma_address[3]));

 FUNC_2(VAR_22, VAR_22, 0);





 FUNC_2(VAR_30, VAR_30, (VAR_35->luma_pitch>>8) * VAR_36);
 FUNC_2(VAR_28, VAR_28, (VAR_35->chroma_pitch>>8) * VAR_36);


 FUNC_2(VAR_0, VAR_26, 1);


 FUNC_3(VAR_31, VAR_29, VAR_35->luma_pitch >> 8,
   VAR_27, VAR_35->chroma_pitch >> 8);




 FUNC_2(VAR_33, VAR_32, VAR_35->warmup_pitch);
}
