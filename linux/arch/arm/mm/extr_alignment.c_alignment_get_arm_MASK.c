
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 if (FUNC_3(VAR_0))
  VAR_4 = FUNC_1(VAR_3, VAR_1);
 else
  VAR_4 = FUNC_2(VAR_1, VAR_3);

 *VAR_2 = FUNC_0(VAR_3);

 return VAR_4;
}
