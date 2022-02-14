
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mask_info {struct mask_info* next; int mask; } ;
typedef int cpumask_t ;





 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int *) ;
 int VAR_1 ;

__attribute__((used)) static cpumask_t FUNC_4(struct mask_info *VAR_2, unsigned int VAR_3)
{
 cpumask_t VAR_4;

 FUNC_0(&VAR_4, FUNC_2(VAR_3));
 switch (VAR_1) {
 case 130:
  while (VAR_2) {
   if (FUNC_3(VAR_3, &VAR_2->mask)) {
    VAR_4 = VAR_2->mask;
    break;
   }
   VAR_2 = VAR_2->next;
  }
  if (FUNC_1(&VAR_4))
   FUNC_0(&VAR_4, FUNC_2(VAR_3));
  break;
 case 129:
  FUNC_0(&VAR_4, VAR_0);
  break;
 default:

 case 128:
  FUNC_0(&VAR_4, FUNC_2(VAR_3));
  break;
 }
 return VAR_4;
}
