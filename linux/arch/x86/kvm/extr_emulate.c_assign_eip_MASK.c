
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long ulong ;
struct x86_emulate_ctxt {int op_bytes; unsigned long _eip; } ;
struct segmented_address {unsigned long ea; int seg; } ;
typedef enum x86emul_mode { ____Placeholder_x86emul_mode } x86emul_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct x86_emulate_ctxt*,struct segmented_address,unsigned int*,int,int,int,int,unsigned long*) ;

__attribute__((used)) static inline int FUNC_1(struct x86_emulate_ctxt *VAR_2, ulong VAR_3,
        enum x86emul_mode VAR_4)
{
 ulong VAR_5;
 int VAR_6;
 unsigned VAR_7;
 struct segmented_address VAR_8 = { .seg = VAR_0,
        .ea = VAR_3 };

 if (VAR_2->op_bytes != sizeof(unsigned long))
  VAR_8.ea = VAR_3 & ((1UL << (VAR_2->op_bytes << 3)) - 1);
 VAR_6 = FUNC_0(VAR_2, VAR_8, &VAR_7, 1, 0, 1, VAR_4, &VAR_5);
 if (VAR_6 == VAR_1)
  VAR_2->_eip = VAR_8.ea;
 return VAR_6;
}
