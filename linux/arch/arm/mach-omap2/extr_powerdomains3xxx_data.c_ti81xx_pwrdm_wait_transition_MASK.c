
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct powerdomain {scalar_t__ prcm_offs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct powerdomain *VAR_6)
{
 u32 VAR_7 = 0;

 while ((FUNC_0(VAR_6->prcm_offs,
  (VAR_6->prcm_offs == VAR_3) ? VAR_5 :
           VAR_4) &
  VAR_1) &&
  (VAR_7++ < VAR_2))
   FUNC_3(1);

 if (VAR_7 > VAR_2) {
  FUNC_2("powerdomain: %s timeout waiting for transition\n",
         VAR_6->name);
  return -VAR_0;
 }

 FUNC_1("powerdomain: completed transition in %d loops\n", VAR_7);

 return 0;
}
