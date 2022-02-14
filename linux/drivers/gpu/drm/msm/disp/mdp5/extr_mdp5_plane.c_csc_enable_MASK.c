
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdp5_kms {int dummy; } ;
struct csc_cfg {scalar_t__ type; int* matrix; int* pre_clamp; int* post_clamp; int * post_bias; int * pre_bias; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_4 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int,int) ;
 int FUNC_24 (int,int) ;
 int FUNC_25 (int,int) ;
 int FUNC_26 (int,int) ;
 int FUNC_27 (int) ;
 int FUNC_28 (struct mdp5_kms*,int ,int) ;
 scalar_t__ FUNC_29 (int) ;

__attribute__((used)) static void FUNC_30(struct mdp5_kms *VAR_5, enum mdp5_pipe VAR_6,
  struct csc_cfg *VAR_7)
{
 uint32_t VAR_8, VAR_9 = 0;
 uint32_t *VAR_10;

 if (FUNC_29(!VAR_7))
  return;

 if ((VAR_7->type == VAR_1) || (VAR_2 == VAR_7->type))
  VAR_9 |= FUNC_17(VAR_3);
 if ((VAR_7->type == VAR_0) || (VAR_2 == VAR_7->type))
  VAR_9 |= FUNC_16(VAR_3);
 VAR_9 |= VAR_4;
 FUNC_28(VAR_5, FUNC_27(VAR_6), VAR_9);

 VAR_10 = VAR_7->matrix;
 FUNC_28(VAR_5, FUNC_18(VAR_6),
   FUNC_1(VAR_10[0]) |
   FUNC_2(VAR_10[1]));
 FUNC_28(VAR_5, FUNC_19(VAR_6),
   FUNC_3(VAR_10[2]) |
   FUNC_4(VAR_10[3]));
 FUNC_28(VAR_5, FUNC_20(VAR_6),
   FUNC_5(VAR_10[4]) |
   FUNC_6(VAR_10[5]));
 FUNC_28(VAR_5, FUNC_21(VAR_6),
   FUNC_7(VAR_10[6]) |
   FUNC_8(VAR_10[7]));
 FUNC_28(VAR_5, FUNC_22(VAR_6),
   FUNC_9(VAR_10[8]));

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->pre_bias); VAR_8++) {
  uint32_t *VAR_11 = VAR_7->pre_clamp;
  uint32_t *VAR_12 = VAR_7->post_clamp;

  FUNC_28(VAR_5, FUNC_26(VAR_6, VAR_8),
   FUNC_14(VAR_11[2*VAR_8+1]) |
   FUNC_15(VAR_11[2*VAR_8]));

  FUNC_28(VAR_5, FUNC_24(VAR_6, VAR_8),
   FUNC_11(VAR_12[2*VAR_8+1]) |
   FUNC_12(VAR_12[2*VAR_8]));

  FUNC_28(VAR_5, FUNC_25(VAR_6, VAR_8),
   FUNC_13(VAR_7->pre_bias[VAR_8]));

  FUNC_28(VAR_5, FUNC_23(VAR_6, VAR_8),
   FUNC_10(VAR_7->post_bias[VAR_8]));
 }
}
