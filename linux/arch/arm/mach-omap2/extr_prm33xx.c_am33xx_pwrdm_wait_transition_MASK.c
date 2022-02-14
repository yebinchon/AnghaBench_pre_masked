
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct powerdomain {int name; int pwrstst_offs; int prcm_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct powerdomain *VAR_3)
{
 u32 VAR_4 = 0;
 while ((FUNC_0(VAR_3->prcm_offs, VAR_3->pwrstst_offs)
   & VAR_1) &&
   (VAR_4++ < VAR_2))
  FUNC_3(1);

 if (VAR_4 > VAR_2) {
  FUNC_2("powerdomain: %s: waited too long to complete transition\n",
         VAR_3->name);
  return -VAR_0;
 }

 FUNC_1("powerdomain: completed transition in %d loops\n", VAR_4);

 return 0;
}
