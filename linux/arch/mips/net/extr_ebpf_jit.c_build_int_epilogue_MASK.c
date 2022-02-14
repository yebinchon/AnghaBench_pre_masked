
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int stack_size; int flags; struct bpf_prog* skf; } ;
struct bpf_prog {int len; } ;
typedef enum reg_val_type { ____Placeholder_reg_val_type } reg_val_type ;


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
 int FUNC_0 (struct jit_ctx*,int ,...) ;
 int FUNC_1 (struct jit_ctx*,int ,int ,int,int,int) ;
 int FUNC_2 (struct jit_ctx*,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_3(struct jit_ctx *VAR_23, int VAR_24)
{
 const struct bpf_prog *VAR_25 = VAR_23->skf;
 int VAR_26 = VAR_23->stack_size;
 int VAR_27 = VAR_26 - sizeof(long);
 enum reg_val_type VAR_28;
 int VAR_29 = VAR_14;

 if (VAR_24 == VAR_7) {

  VAR_28 = FUNC_2(VAR_23, VAR_25->len, VAR_0);
  if (VAR_28 == VAR_15)
   FUNC_0(VAR_23, VAR_22, VAR_29, VAR_29, 0);
 }

 if (VAR_23->flags & VAR_1) {
  FUNC_1(VAR_23, VAR_19, VAR_20,
     VAR_7, VAR_27, VAR_13);
  VAR_27 -= sizeof(long);
 }
 if (VAR_23->flags & VAR_2) {
  FUNC_1(VAR_23, VAR_19, VAR_20,
     VAR_8, VAR_27, VAR_13);
  VAR_27 -= sizeof(long);
 }
 if (VAR_23->flags & VAR_3) {
  FUNC_1(VAR_23, VAR_19, VAR_20,
     VAR_9, VAR_27, VAR_13);
  VAR_27 -= sizeof(long);
 }
 if (VAR_23->flags & VAR_4) {
  FUNC_1(VAR_23, VAR_19, VAR_20,
    VAR_10, VAR_27, VAR_13);
  VAR_27 -= sizeof(long);
 }
 if (VAR_23->flags & VAR_5) {
  FUNC_1(VAR_23, VAR_19, VAR_20,
     VAR_11, VAR_27, VAR_13);
  VAR_27 -= sizeof(long);
 }
 if (VAR_23->flags & VAR_6) {
  FUNC_1(VAR_23, VAR_19, VAR_20,
     VAR_12, VAR_27, VAR_13);
  VAR_27 -= sizeof(long);
 }
 FUNC_0(VAR_23, VAR_18, VAR_24);

 if (VAR_26)
  FUNC_1(VAR_23, VAR_17, VAR_16,
     VAR_13, VAR_13, VAR_26);
 else
  FUNC_0(VAR_23, VAR_21);

 return 0;
}
