
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mfn; } ;
struct mmuext_op {unsigned int cmd; TYPE_1__ arg1; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct mmuext_op*) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_0, unsigned long VAR_1)
{
 struct mmuext_op VAR_2;

 VAR_2.cmd = VAR_0;
 VAR_2.arg1.mfn = FUNC_0(VAR_1);

 FUNC_1(&VAR_2);
}
