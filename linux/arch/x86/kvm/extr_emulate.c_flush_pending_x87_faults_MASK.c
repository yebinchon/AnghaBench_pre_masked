
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct x86_emulate_ctxt*,int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct x86_emulate_ctxt *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0("fwait");

 if (FUNC_2(VAR_3 != VAR_1))
  return FUNC_1(VAR_2, VAR_0, 0, 0);

 return VAR_1;
}
