
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {scalar_t__ _eip; } ;


 int FUNC_0 (struct x86_emulate_ctxt*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct x86_emulate_ctxt *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->_eip + VAR_1);
}
