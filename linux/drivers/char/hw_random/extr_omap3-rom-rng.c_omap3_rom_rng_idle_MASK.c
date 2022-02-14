
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(0, 0, VAR_0);
 if (VAR_4 != 0) {
  FUNC_2("reset failed: %d\n", VAR_4);
  return;
 }
 FUNC_0(VAR_1);
 VAR_2 = 1;
}
