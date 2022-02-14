
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct paace {int impl_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct paace* FUNC_1 (int) ;
 struct paace* FUNC_2 (struct paace*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

int FUNC_5(int VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct paace *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5) {
  FUNC_3("Invalid liodn entry\n");
  return -VAR_0;
 }
 if (VAR_3) {
  VAR_5 = FUNC_2(VAR_5, VAR_3 - 1);
  if (!VAR_5)
   return -VAR_0;
 }
 FUNC_4(VAR_5->impl_attr, VAR_1, VAR_4);

 FUNC_0();

 return 0;
}
