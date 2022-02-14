
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mox_rwtm {int mbox; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct mox_rwtm* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct mox_rwtm*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct mox_rwtm *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(FUNC_3(VAR_2), VAR_0);
 FUNC_0(FUNC_3(VAR_2));
 FUNC_1(VAR_2->mbox);

 return 0;
}
