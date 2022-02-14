
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pixel_ext {int bottom; int top; int right; int left; } ;
struct phase_step {int* x; int* y; } ;
struct mdp_format {int alpha_enable; int unpack_tight; int * unpack; int chroma_sample; int fetch_type; scalar_t__ unpack_count; scalar_t__ cpp; int bpc_b; int bpc_g; int bpc_r; int bpc_a; } ;
struct mdp5_kms {int dummy; } ;
struct mdp5_hw_pipe {int pipe; int caps; } ;
struct drm_framebuffer {int dummy; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int) ;
 scalar_t__ FUNC_26 (struct mdp_format const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_27 (int) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int) ;
 int FUNC_31 (int) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int) ;
 int FUNC_34 (int) ;
 int FUNC_35 (int) ;
 int FUNC_36 (int) ;
 int FUNC_37 (int) ;
 int FUNC_38 (int) ;
 int FUNC_39 (int) ;
 int FUNC_40 (int) ;
 int FUNC_41 (int) ;
 int FUNC_42 (struct mdp5_kms*,int) ;
 int FUNC_43 (struct mdp5_kms*,int,int ) ;
 int FUNC_44 (struct mdp5_kms*,int ,int) ;
 int FUNC_45 (struct mdp5_kms*,int,struct mdp_format const*,int,int ,int ,int,int ,int ) ;
 int FUNC_46 (int ) ;
 int FUNC_47 (struct drm_framebuffer*) ;
 int FUNC_48 (struct mdp5_kms*,int,struct drm_framebuffer*) ;
 struct mdp_format* FUNC_49 (int ) ;

__attribute__((used)) static void FUNC_50(struct mdp5_kms *VAR_12,
     struct mdp5_hw_pipe *VAR_13,
     struct drm_framebuffer *VAR_14,
     struct phase_step *VAR_15,
     struct pixel_ext *VAR_16,
     u32 VAR_17, u32 VAR_18, u32 VAR_19,
     bool VAR_20, bool VAR_21,
     int VAR_22, int VAR_23,
     unsigned int VAR_24, unsigned int VAR_25,
     u32 VAR_26, u32 VAR_27,
     u32 VAR_28, u32 VAR_29,
     u32 VAR_30, u32 VAR_31)
{
 enum mdp5_pipe VAR_32 = VAR_13->pipe;
 bool VAR_33 = VAR_13->caps & VAR_11;
 const struct mdp_format *VAR_34 =
   FUNC_49(FUNC_47(VAR_14));

 FUNC_44(VAR_12, FUNC_37(VAR_32),
   FUNC_16(VAR_26) |
   FUNC_15(VAR_27));

 FUNC_44(VAR_12, FUNC_39(VAR_32),
   FUNC_19(VAR_30) |
   FUNC_18(VAR_31));

 FUNC_44(VAR_12, FUNC_41(VAR_32),
   FUNC_24(VAR_28) |
   FUNC_25(VAR_29));

 FUNC_44(VAR_12, FUNC_28(VAR_32),
   FUNC_4(VAR_24) |
   FUNC_3(VAR_25));

 FUNC_44(VAR_12, FUNC_29(VAR_32),
   FUNC_5(VAR_22) |
   FUNC_6(VAR_23));

 FUNC_44(VAR_12, FUNC_36(VAR_32),
   FUNC_7(VAR_34->bpc_a) |
   FUNC_13(VAR_34->bpc_r) |
   FUNC_12(VAR_34->bpc_g) |
   FUNC_8(VAR_34->bpc_b) |
   FUNC_0(VAR_34->alpha_enable, VAR_4) |
   FUNC_10(VAR_34->cpp - 1) |
   FUNC_14(VAR_34->unpack_count - 1) |
   FUNC_0(VAR_34->unpack_tight, VAR_5) |
   FUNC_11(VAR_34->fetch_type) |
   FUNC_9(VAR_34->chroma_sample));

 FUNC_44(VAR_12, FUNC_40(VAR_32),
   FUNC_20(VAR_34->unpack[0]) |
   FUNC_21(VAR_34->unpack[1]) |
   FUNC_22(VAR_34->unpack[2]) |
   FUNC_23(VAR_34->unpack[3]));

 FUNC_44(VAR_12, FUNC_38(VAR_32),
   (VAR_20 ? VAR_6 : 0) |
   (VAR_21 ? VAR_7 : 0) |
   FUNC_0(VAR_33, VAR_8) |
   FUNC_17(VAR_0));


 FUNC_44(VAR_12, FUNC_35(VAR_32), 0);

 if (VAR_13->caps & VAR_11)
  FUNC_45(VAR_12, VAR_32, VAR_34,
    VAR_30, VAR_16->left, VAR_16->right,
    VAR_31, VAR_16->top, VAR_16->bottom);

 if (VAR_13->caps & VAR_10) {
  FUNC_44(VAR_12, FUNC_33(VAR_32),
    VAR_15->x[VAR_1]);
  FUNC_44(VAR_12, FUNC_34(VAR_32),
    VAR_15->y[VAR_1]);
  FUNC_44(VAR_12, FUNC_31(VAR_32),
    VAR_15->x[VAR_2]);
  FUNC_44(VAR_12, FUNC_32(VAR_32),
    VAR_15->y[VAR_2]);
  FUNC_44(VAR_12, FUNC_27(VAR_32),
    FUNC_2(VAR_19) |
    FUNC_1(VAR_18));
  FUNC_44(VAR_12, FUNC_30(VAR_32),
      VAR_17);
 }

 if (VAR_13->caps & VAR_9) {
  if (FUNC_26(VAR_34))
   FUNC_43(VAR_12, VAR_32,
     FUNC_46(VAR_3));
  else
   FUNC_42(VAR_12, VAR_32);
 }

 FUNC_48(VAR_12, VAR_32, VAR_14);
}
