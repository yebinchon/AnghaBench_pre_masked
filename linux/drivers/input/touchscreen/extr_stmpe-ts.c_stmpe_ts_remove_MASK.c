
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe_touch {int stmpe; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct stmpe_touch* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct stmpe_touch *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->stmpe, VAR_0);

 return 0;
}
