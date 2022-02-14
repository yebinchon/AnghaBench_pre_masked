
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int di; int si; int ax; int sp; int cs; int ip; } ;
struct TYPE_3__ {int comm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char const*,int ,int ,char const*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, struct pt_regs *VAR_3,
         const char *VAR_4)
{
 if (!VAR_1)
  return;

 FUNC_0("%s%s[%d] %s ip:%lx cs:%lx sp:%lx ax:%lx si:%lx di:%lx\n",
      VAR_2, VAR_0->comm, FUNC_1(VAR_0),
      VAR_4, VAR_3->ip, VAR_3->cs,
      VAR_3->sp, VAR_3->ax, VAR_3->si, VAR_3->di);
}
