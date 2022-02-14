
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_emulate_ctxt {int _eip; } ;
struct TYPE_3__ {int ea; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct operand {unsigned int bytes; int val; TYPE_2__ addr; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,struct x86_emulate_ctxt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_6, struct operand *VAR_7,
        unsigned VAR_8, bool VAR_9)
{
 int VAR_10 = VAR_1;

 VAR_7->type = VAR_0;
 VAR_7->bytes = VAR_8;
 VAR_7->addr.mem.ea = VAR_6->_eip;

 switch (VAR_7->bytes) {
 case 1:
  VAR_7->val = FUNC_0(VAR_5, VAR_6);
  break;
 case 2:
  VAR_7->val = FUNC_0(VAR_2, VAR_6);
  break;
 case 4:
  VAR_7->val = FUNC_0(VAR_3, VAR_6);
  break;
 case 8:
  VAR_7->val = FUNC_0(VAR_4, VAR_6);
  break;
 }
 if (!VAR_9) {
  switch (VAR_7->bytes) {
  case 1:
   VAR_7->val &= 0xff;
   break;
  case 2:
   VAR_7->val &= 0xffff;
   break;
  case 4:
   VAR_7->val &= 0xffffffff;
   break;
  }
 }
done:
 return VAR_10;
}
