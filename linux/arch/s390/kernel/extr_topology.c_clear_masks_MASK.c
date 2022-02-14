
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mask_info {struct mask_info* next; int mask; } ;


 struct mask_info VAR_0 ;
 int FUNC_0 (int *) ;
 struct mask_info VAR_1 ;
 struct mask_info VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct mask_info *VAR_3;

 VAR_3 = &VAR_2;
 while (VAR_3) {
  FUNC_0(&VAR_3->mask);
  VAR_3 = VAR_3->next;
 }
 VAR_3 = &VAR_0;
 while (VAR_3) {
  FUNC_0(&VAR_3->mask);
  VAR_3 = VAR_3->next;
 }
 VAR_3 = &VAR_1;
 while (VAR_3) {
  FUNC_0(&VAR_3->mask);
  VAR_3 = VAR_3->next;
 }
}
