
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int flags; } ;
struct bpf_insn {int src_reg; int dst_reg; } ;
typedef enum which_ebpf_reg { ____Placeholder_which_ebpf_reg } which_ebpf_reg ;
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
 int FUNC_0 (int,char*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_1(struct jit_ctx *VAR_21,
       const struct bpf_insn *VAR_22,
       enum which_ebpf_reg VAR_23)
{
 int VAR_24 = (VAR_23 == VAR_19 || VAR_23 == VAR_20) ?
  VAR_22->src_reg : VAR_22->dst_reg;

 switch (VAR_24) {
 case 139:
  return VAR_16;
 case 138:
  return VAR_6;
 case 136:
  return VAR_7;
 case 135:
  return VAR_8;
 case 134:
  return VAR_9;
 case 133:
  return VAR_10;
 case 132:
  VAR_21->flags |= VAR_0;
  return VAR_11;
 case 131:
  VAR_21->flags |= VAR_1;
  return VAR_12;
 case 130:
  VAR_21->flags |= VAR_2;
  return VAR_13;
 case 129:
  VAR_21->flags |= VAR_3;
  return VAR_14;
 case 137:
  if (VAR_23 == VAR_18 || VAR_23 == VAR_20)
   goto bad_reg;
  VAR_21->flags |= VAR_4;




  return VAR_17;
 case 128:
  return VAR_15;
 default:
bad_reg:
  FUNC_0(1, "Illegal bpf reg: %d\n", VAR_24);
  return -VAR_5;
 }
}
