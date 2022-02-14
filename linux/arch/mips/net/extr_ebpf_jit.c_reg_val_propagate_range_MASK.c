
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct jit_ctx {int* reg_val_types; struct bpf_prog* skf; } ;
struct bpf_prog {int len; struct bpf_insn* insnsi; } ;
struct bpf_insn {int dst_reg; int imm; int off; int code; } ;
typedef int s64 ;
 int FUNC_0 (int ) ;





 int VAR_0 ;
 int FUNC_1 (int ) ;



 int FUNC_2 (int ) ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;



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
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct jit_ctx *VAR_13, u64 VAR_14,
       int VAR_15, bool VAR_16)
{
 const struct bpf_prog *VAR_17 = VAR_13->skf;
 const struct bpf_insn *VAR_18;
 u64 VAR_19 = VAR_14;
 u64 *VAR_20 = VAR_13->reg_val_types;
 int VAR_21;
 int VAR_22;

 for (VAR_21 = VAR_15; VAR_21 < VAR_17->len; VAR_21++) {
  VAR_20[VAR_21] = (VAR_20[VAR_21] & VAR_10) | VAR_19;
  VAR_18 = VAR_17->insnsi + VAR_21;
  switch (FUNC_0(VAR_18->code)) {
  case 162:
   switch (FUNC_2(VAR_18->code)) {
   case 163:
   case 130:
   case 134:
   case 157:
   case 132:
   case 160:
   case 137:
   case 131:
   case 133:
   case 136:
   case 128:
    FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_3);
    break;
   case 135:
    if (FUNC_4(VAR_18->code)) {
     FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_3);
    } else {

     if (VAR_18->imm >= 0)
      FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_4);
     else
      FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_3);
    }
    break;
   case 155:
    if (VAR_18->imm == 64)
     FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_5);
    else if (VAR_18->imm == 32)
     FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_3);
    else
     FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_4);
    break;
   }
   VAR_20[VAR_21] |= VAR_8;
   break;
  case 161:
   switch (FUNC_2(VAR_18->code)) {
   case 135:
    if (FUNC_4(VAR_18->code)) {

     FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_5);
    } else {

     if (VAR_18->imm >= 0)
      FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_4);
     else
      FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_6);
    }
    break;
   default:
    FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_5);
   }
   VAR_20[VAR_21] |= VAR_8;
   break;
  case 139:
   switch (FUNC_3(VAR_18->code)) {
   case 156:
    if (FUNC_1(VAR_18->code) == VAR_0) {
     s64 VAR_23;

     VAR_23 = (s64)((u32)VAR_18->imm | ((u64)(VAR_18 + 1)->imm << 32));
     if (VAR_23 > 0 && VAR_23 <= VAR_11)
      FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_4);
     else if (VAR_23 >= VAR_12 && VAR_23 <= VAR_11)
      FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_6);
     else
      FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_5);
     VAR_20[VAR_21] |= VAR_8;
     VAR_21++;
    } else {
     FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_5);
    }
    break;
   case 159:
   case 153:
    FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_4);
    break;
   case 129:
    if (FUNC_1(VAR_18->code) == VAR_0)
     FUNC_6(&VAR_19, VAR_18->dst_reg,
        VAR_18->imm >= 0 ? VAR_4 : VAR_3);
    else
     FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_3);
    break;
   }
   VAR_20[VAR_21] |= VAR_8;
   break;
  case 138:
   switch (FUNC_3(VAR_18->code)) {
   case 156:
    FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_5);
    break;
   case 159:
   case 153:
    FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_4);
    break;
   case 129:
    FUNC_6(&VAR_19, VAR_18->dst_reg, VAR_3);
    break;
   }
   VAR_20[VAR_21] |= VAR_8;
   break;
  case 146:
   switch (FUNC_2(VAR_18->code)) {
   case 154:
    VAR_20[VAR_21] = VAR_8 | VAR_19;
    VAR_20[VAR_17->len] = VAR_19;
    return VAR_21;
   case 152:
    VAR_20[VAR_21] |= VAR_8;
    VAR_21 += VAR_18->off;
    break;
   case 151:
   case 149:
   case 150:
   case 147:
   case 148:
   case 144:
   case 145:
   case 142:
   case 143:
   case 140:
   case 141:
    if (VAR_16) {
     VAR_20[VAR_21] |= VAR_7;
     VAR_21 += VAR_18->off;
     VAR_16 = 0;
    } else {
     VAR_20[VAR_21] |= VAR_9;
    }
    break;
   case 158:
    FUNC_6(&VAR_19, VAR_1, VAR_5);

    for (VAR_22 = VAR_1; VAR_22 <= VAR_2; VAR_22++)
     FUNC_6(&VAR_19, VAR_22, VAR_5);

    VAR_20[VAR_21] |= VAR_8;
    break;
   default:
    FUNC_5(1, "Unhandled BPF_JMP case.\n");
    VAR_20[VAR_21] |= VAR_8;
    break;
   }
   break;
  default:
   VAR_20[VAR_21] |= VAR_8;
   break;
  }
 }
 return VAR_21;
}
