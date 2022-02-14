
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct videomode {int hactive; } ;
struct TYPE_2__ {int* mX; } ;
struct dsi_data {int num_lanes_used; TYPE_1__ user_dsi_cinfo; int pix_fmt; struct videomode vm; } ;


 int FUNC_0 (int,int) ;
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
 int FUNC_1 (char*,int,int,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 size_t VAR_10 ;
 int FUNC_4 (int,int,int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct dsi_data*,int ) ;
 int FUNC_8 (struct dsi_data*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct dsi_data *VAR_11)
{
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28;
 bool VAR_29;
 const struct videomode *VAR_30 = &VAR_11->vm;
 int VAR_31 = FUNC_6(VAR_11->pix_fmt);
 int VAR_32 = VAR_11->num_lanes_used - 1;
 int VAR_33 = VAR_11->user_dsi_cinfo.mX[VAR_10] + 1;
 int VAR_34 = 0, VAR_35 = 0;
 int VAR_36 = 0, VAR_37 = 0;
 int VAR_38 = 0, VAR_39 = 0;
 int VAR_40 = 0, VAR_41 = 0;
 u32 VAR_42;

 VAR_42 = FUNC_7(VAR_11, VAR_2);
 VAR_12 = FUNC_2(VAR_42, 20, 20);
 VAR_13 = FUNC_2(VAR_42, 21, 21);
 VAR_14 = FUNC_2(VAR_42, 22, 22);
 VAR_15 = FUNC_2(VAR_42, 23, 23);

 VAR_42 = FUNC_7(VAR_11, VAR_5);
 VAR_18 = FUNC_2(VAR_42, 11, 0);
 VAR_17 = FUNC_2(VAR_42, 23, 12);
 VAR_16 = FUNC_2(VAR_42, 31, 24);

 VAR_42 = FUNC_7(VAR_11, VAR_1);
 VAR_23 = FUNC_2(VAR_42, 7, 0);
 VAR_22 = FUNC_2(VAR_42, 15, 8);

 VAR_42 = FUNC_7(VAR_11, VAR_9);
 VAR_25 = FUNC_2(VAR_42, 15, 0);
 VAR_24 = FUNC_2(VAR_42, 31, 16);

 VAR_42 = FUNC_7(VAR_11, VAR_0);
 VAR_21 = FUNC_2(VAR_42, 12, 0);
 VAR_29 = FUNC_2(VAR_42, 13, 13);

 VAR_42 = FUNC_7(VAR_11, VAR_3);
 VAR_27 = FUNC_2(VAR_42, 7, 0);

 VAR_42 = FUNC_7(VAR_11, VAR_4);
 VAR_26 = FUNC_2(VAR_42, 15, 8);

 VAR_28 = VAR_27 + VAR_26;

 VAR_19 = FUNC_0(VAR_30->hactive * VAR_31, 8);
 VAR_20 = VAR_18 + VAR_17 + VAR_16 + FUNC_0(VAR_19 + 6, VAR_32);

 if (!VAR_15) {
  VAR_34 = FUNC_4(VAR_16, VAR_29,
     VAR_24, VAR_25,
     VAR_28, VAR_22, VAR_23);
  VAR_35 = FUNC_5(VAR_16,
     VAR_24, VAR_25,
     VAR_21, VAR_33);
 }

 if (!VAR_13) {
  VAR_36 = FUNC_4(VAR_17, VAR_29,
     VAR_24, VAR_25,
     VAR_28, VAR_22, VAR_23);
  VAR_37 = FUNC_5(VAR_17,
     VAR_24, VAR_25,
     VAR_21, VAR_33);
 }

 if (!VAR_14) {
  VAR_38 = FUNC_4(VAR_18, VAR_29,
     VAR_24, VAR_25,
     VAR_28, VAR_22, VAR_23);

  VAR_39 = FUNC_5(VAR_18,
     VAR_24, VAR_25,
     VAR_21, VAR_33);
 }

 if (!VAR_12) {
  VAR_40 = FUNC_4(VAR_20, VAR_29,
     VAR_24, VAR_25,
     VAR_28, VAR_22, VAR_23);

  VAR_41 = FUNC_5(VAR_20,
     VAR_24, VAR_25,
     VAR_21, VAR_33);
 }

 FUNC_1("DSI HS interleaving(TXBYTECLKHS) HSA %d, HFP %d, HBP %d, BLLP %d\n",
  VAR_34, VAR_36, VAR_38,
  VAR_40);

 FUNC_1("DSI LP interleaving(bytes) HSA %d, HFP %d, HBP %d, BLLP %d\n",
  VAR_35, VAR_37, VAR_39,
  VAR_41);

 VAR_42 = FUNC_7(VAR_11, VAR_6);
 VAR_42 = FUNC_3(VAR_42, VAR_34, 23, 16);
 VAR_42 = FUNC_3(VAR_42, VAR_36, 15, 8);
 VAR_42 = FUNC_3(VAR_42, VAR_38, 7, 0);
 FUNC_8(VAR_11, VAR_6, VAR_42);

 VAR_42 = FUNC_7(VAR_11, VAR_7);
 VAR_42 = FUNC_3(VAR_42, VAR_35, 23, 16);
 VAR_42 = FUNC_3(VAR_42, VAR_37, 15, 8);
 VAR_42 = FUNC_3(VAR_42, VAR_39, 7, 0);
 FUNC_8(VAR_11, VAR_7, VAR_42);

 VAR_42 = FUNC_7(VAR_11, VAR_8);
 VAR_42 = FUNC_3(VAR_42, VAR_40, 31, 15);
 VAR_42 = FUNC_3(VAR_42, VAR_41, 16, 0);
 FUNC_8(VAR_11, VAR_8, VAR_42);
}
