
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct x86_emulate_ctxt {int d; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1(struct x86_emulate_ctxt *VAR_1, unsigned VAR_2)
{
 u64 VAR_3 = VAR_1->d & VAR_0;

 if (FUNC_0(VAR_2 < 16))
  return 1;

 switch (VAR_3) {
 case 128:
 case 129:
  return 1;
 case 130:
  return 16;
 case 131:
 default:
  return VAR_2;
 }
}
