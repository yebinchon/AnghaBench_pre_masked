
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_enable_arg {int drvdata; int rc; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct etm_enable_arg *VAR_1 = VAR_0;

 if (FUNC_0(!VAR_1))
  return;
 VAR_1->rc = FUNC_1(VAR_1->drvdata);
}
