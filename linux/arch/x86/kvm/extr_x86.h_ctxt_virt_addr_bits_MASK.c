
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct x86_emulate_ctxt {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_cr ) (struct x86_emulate_ctxt*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct x86_emulate_ctxt*,int) ;

__attribute__((used)) static inline u8 FUNC_1(struct x86_emulate_ctxt *VAR_1)
{
 return (VAR_1->ops->get_cr(VAR_1, 4) & VAR_0) ? 57 : 48;
}
