
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdsc {int dummy; } ;
typedef int ktime_t ;
typedef enum gdsc_status { ____Placeholder_gdsc_status } gdsc_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct gdsc*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gdsc *VAR_2, enum gdsc_status VAR_3)
{
 ktime_t VAR_4;

 VAR_4 = FUNC_1();
 do {
  if (FUNC_0(VAR_2, VAR_3))
   return 0;
 } while (FUNC_2(FUNC_1(), VAR_4) < VAR_1);

 if (FUNC_0(VAR_2, VAR_3))
  return 0;

 return -VAR_0;
}
