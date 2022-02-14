
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multicall_space {struct mmuext_op* args; TYPE_1__* mc; } ;
struct mmuext_op {int dummy; } ;
struct TYPE_2__ {int * args; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct mmuext_op*,int,int *,int ) ;
 int VAR_1 ;
 struct multicall_space FUNC_1 (int) ;
 struct multicall_space FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(const struct mmuext_op *VAR_2)
{
 struct multicall_space VAR_3;
 struct mmuext_op *VAR_4;

 VAR_3 = FUNC_2(VAR_1, sizeof(*VAR_4));

 if (VAR_3.mc != ((void*)0)) {
  VAR_3.mc->args[1]++;
 } else {
  VAR_3 = FUNC_1(sizeof(*VAR_4));
  FUNC_0(VAR_3.mc, VAR_3.args, 1, ((void*)0), VAR_0);
 }

 VAR_4 = VAR_3.args;
 *VAR_4 = *VAR_2;
}
