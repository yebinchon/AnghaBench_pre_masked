
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u64 ;
struct x86_emulate_ctxt {int mode; TYPE_1__* ops; } ;
struct desc_struct {scalar_t__ d; scalar_t__ l; } ;
typedef enum x86emul_mode { ____Placeholder_x86emul_mode } x86emul_mode ;
struct TYPE_2__ {int (* get_msr ) (struct x86_emulate_ctxt*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct x86_emulate_ctxt*,int ,int) ;
 int FUNC_1 (struct x86_emulate_ctxt*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct x86_emulate_ctxt *VAR_6, ulong VAR_7,
     const struct desc_struct *VAR_8)
{
 enum x86emul_mode VAR_9 = VAR_6->mode;
 int VAR_10;
 if (VAR_9 == VAR_3 || VAR_9 == VAR_4)
  VAR_9 = VAR_8->d ? VAR_4 : VAR_3;
 VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_9);
 if (VAR_10 == VAR_2)
  VAR_6->mode = VAR_9;
 return VAR_10;
}
