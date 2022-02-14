
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mixer_context*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct mixer_context *VAR_1)
{
 ktime_t VAR_2 = FUNC_0(FUNC_2(), 100000);

 while (!FUNC_3(VAR_1)) {
  FUNC_4(1000, 2000);
  if (FUNC_1(FUNC_2(), VAR_2) > 0)
   return -VAR_0;
 }
 return 0;
}
