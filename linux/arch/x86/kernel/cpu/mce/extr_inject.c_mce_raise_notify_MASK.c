
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct mce {int inject_flags; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mce*,struct pt_regs*) ;
 int FUNC_3 (struct mce*) ;
 int FUNC_4 () ;
 struct mce* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_5, struct pt_regs *VAR_6)
{
 int VAR_7 = FUNC_4();
 struct mce *VAR_8 = FUNC_5(&VAR_3);
 if (!FUNC_1(VAR_7, VAR_4))
  return VAR_1;
 FUNC_0(VAR_7, VAR_4);
 if (VAR_8->inject_flags & VAR_0)
  FUNC_2(VAR_8, VAR_6);
 else if (VAR_8->status)
  FUNC_3(VAR_8);
 return VAR_2;
}
