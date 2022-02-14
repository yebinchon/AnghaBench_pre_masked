
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct powerdomain {int name; int prcm_offs; int prcm_partition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct powerdomain *VAR_4)
{
 u32 VAR_5 = 0;
 while ((FUNC_0(VAR_4->prcm_partition,
         VAR_4->prcm_offs,
         VAR_1) &
  VAR_2) &&
        (VAR_5++ < VAR_3))
  FUNC_3(1);

 if (VAR_5 > VAR_3) {
  FUNC_2("powerdomain: %s: waited too long to complete transition\n",
         VAR_4->name);
  return -VAR_0;
 }

 FUNC_1("powerdomain: completed transition in %d loops\n", VAR_5);

 return 0;
}
