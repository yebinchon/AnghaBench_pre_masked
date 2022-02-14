
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ea; void* seg; } ;
struct TYPE_4__ {TYPE_1__ mem; void* reg; } ;
struct operand {int bytes; int orig_val; int val; void* type; int count; int valptr; TYPE_2__ addr; } ;
struct x86_emulate_ctxt {int d; int op_bytes; struct operand memop; void* _eip; void* seg_override; int modrm_rm; struct operand* memopp; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_0 (struct x86_emulate_ctxt*,int ) ;
 int FUNC_1 (struct x86_emulate_ctxt*,struct operand*,int,int) ;
 void* FUNC_2 (struct x86_emulate_ctxt*,int ,int) ;
 int FUNC_3 (struct x86_emulate_ctxt*,struct operand*) ;
 int FUNC_4 (struct x86_emulate_ctxt*) ;
 int FUNC_5 (struct operand*) ;
 int FUNC_6 (struct x86_emulate_ctxt*) ;
 int FUNC_7 (int ,int,struct x86_emulate_ctxt*) ;
 int FUNC_8 (struct x86_emulate_ctxt*,int ) ;
 void* FUNC_9 (struct x86_emulate_ctxt*,int ) ;
 void* FUNC_10 (struct x86_emulate_ctxt*,int ) ;

__attribute__((used)) static int FUNC_11(struct x86_emulate_ctxt *VAR_19, struct operand *VAR_20,
     unsigned VAR_21)
{
 int VAR_22 = VAR_18;

 switch (VAR_21) {
 case 131:
  FUNC_3(VAR_19, VAR_20);
  break;
 case 140:
  VAR_22 = FUNC_1(VAR_19, VAR_20, 1, 0);
  break;
 case 138:
  VAR_19->memop.bytes = (VAR_19->d & VAR_1) ? 1 : VAR_19->op_bytes;
 mem_common:
  *VAR_20 = VAR_19->memop;
  VAR_19->memopp = VAR_20;
  if (VAR_19->d & VAR_0)
   FUNC_4(VAR_19);
  VAR_20->orig_val = VAR_20->val;
  break;
 case 135:
  VAR_19->memop.bytes = (VAR_19->op_bytes == 8) ? 16 : 8;
  goto mem_common;
 case 157:
  VAR_20->type = VAR_5;
  VAR_20->bytes = (VAR_19->d & VAR_1) ? 1 : VAR_19->op_bytes;
  VAR_20->addr.reg = FUNC_9(VAR_19, VAR_6);
  FUNC_5(VAR_20);
  VAR_20->orig_val = VAR_20->val;
  break;
 case 155:
  VAR_20->type = VAR_5;
  VAR_20->bytes = (VAR_19->d & VAR_1) ? 2 : VAR_19->op_bytes;
  VAR_20->addr.reg = FUNC_9(VAR_19, VAR_6);
  FUNC_5(VAR_20);
  VAR_20->orig_val = VAR_20->val;
  break;
 case 156:
  if (VAR_19->d & VAR_1) {
   VAR_20->type = VAR_4;
   break;
  }
  VAR_20->type = VAR_5;
  VAR_20->bytes = VAR_19->op_bytes;
  VAR_20->addr.reg = FUNC_9(VAR_19, VAR_10);
  FUNC_5(VAR_20);
  VAR_20->orig_val = VAR_20->val;
  break;
 case 152:
  VAR_20->type = VAR_3;
  VAR_20->bytes = (VAR_19->d & VAR_1) ? 1 : VAR_19->op_bytes;
  VAR_20->addr.mem.ea =
   FUNC_10(VAR_19, VAR_9);
  VAR_20->addr.mem.seg = VAR_14;
  VAR_20->val = 0;
  VAR_20->count = 1;
  break;
 case 150:
  VAR_20->type = VAR_5;
  VAR_20->bytes = 2;
  VAR_20->addr.reg = FUNC_9(VAR_19, VAR_10);
  FUNC_5(VAR_20);
  break;
 case 154:
  VAR_20->type = VAR_2;
  VAR_20->bytes = 1;
  VAR_20->val = FUNC_8(VAR_19, VAR_8) & 0xff;
  break;
 case 144:
  VAR_22 = FUNC_1(VAR_19, VAR_20, 1, 1);
  break;
 case 132:
  VAR_20->type = VAR_2;
  VAR_20->bytes = 1;
  VAR_20->val = 1;
  break;
 case 146:
  VAR_22 = FUNC_1(VAR_19, VAR_20, FUNC_6(VAR_19), 1);
  break;
 case 145:
  VAR_22 = FUNC_1(VAR_19, VAR_20, VAR_19->op_bytes, 1);
  break;
 case 134:
  VAR_19->memop.bytes = 1;
  if (VAR_19->memop.type == VAR_5) {
   VAR_19->memop.addr.reg = FUNC_2(VAR_19,
     VAR_19->modrm_rm, 1);
   FUNC_5(&VAR_19->memop);
  }
  goto mem_common;
 case 137:
  VAR_19->memop.bytes = 2;
  goto mem_common;
 case 136:
  VAR_19->memop.bytes = 4;
  goto mem_common;
 case 141:
  VAR_22 = FUNC_1(VAR_19, VAR_20, 2, 0);
  break;
 case 142:
  VAR_22 = FUNC_1(VAR_19, VAR_20, FUNC_6(VAR_19), 0);
  break;
 case 130:
  VAR_20->type = VAR_3;
  VAR_20->bytes = (VAR_19->d & VAR_1) ? 1 : VAR_19->op_bytes;
  VAR_20->addr.mem.ea =
   FUNC_10(VAR_19, VAR_11);
  VAR_20->addr.mem.seg = VAR_19->seg_override;
  VAR_20->val = 0;
  VAR_20->count = 1;
  break;
 case 128:
  VAR_20->type = VAR_3;
  VAR_20->bytes = (VAR_19->d & VAR_1) ? 1 : VAR_19->op_bytes;
  VAR_20->addr.mem.ea =
   FUNC_0(VAR_19,
    FUNC_8(VAR_19, VAR_7) +
    (FUNC_8(VAR_19, VAR_6) & 0xff));
  VAR_20->addr.mem.seg = VAR_19->seg_override;
  VAR_20->val = 0;
  break;
 case 143:
  VAR_20->type = VAR_2;
  VAR_20->addr.mem.ea = VAR_19->_eip;
  VAR_20->bytes = VAR_19->op_bytes + 2;
  FUNC_7(VAR_20->valptr, VAR_20->bytes, VAR_19);
  break;
 case 133:
  VAR_19->memop.bytes = VAR_19->op_bytes + 2;
  goto mem_common;
 case 149:
  VAR_20->type = VAR_2;
  VAR_20->val = VAR_14;
  break;
 case 153:
  VAR_20->type = VAR_2;
  VAR_20->val = VAR_12;
  break;
 case 129:
  VAR_20->type = VAR_2;
  VAR_20->val = VAR_17;
  break;
 case 151:
  VAR_20->type = VAR_2;
  VAR_20->val = VAR_13;
  break;
 case 148:
  VAR_20->type = VAR_2;
  VAR_20->val = VAR_15;
  break;
 case 147:
  VAR_20->type = VAR_2;
  VAR_20->val = VAR_16;
  break;
 case 139:

 default:
  VAR_20->type = VAR_4;
  break;
 }

done:
 return VAR_22;
}
