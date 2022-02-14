
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct vm_exit {scalar_t__ inst_length; } ;
struct TYPE_2__ {int vmexit_reqidle; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct vmctx *VAR_2, struct vm_exit *VAR_3, int *VAR_4)
{

 FUNC_0(VAR_3->inst_length == 0);

 VAR_1.vmexit_reqidle++;

 return (VAR_0);
}
