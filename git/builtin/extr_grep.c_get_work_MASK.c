
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_item {int dummy; } ;


 size_t FUNC_0 (struct work_item*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 struct work_item* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static struct work_item *FUNC_4(void)
{
 struct work_item *VAR_6;

 FUNC_1();
 while (VAR_5 == VAR_4 && !VAR_0) {
  FUNC_3(&VAR_1, &VAR_2);
 }

 if (VAR_5 == VAR_4 && VAR_0) {
  VAR_6 = ((void*)0);
 } else {
  VAR_6 = &VAR_3[VAR_5];
  VAR_5 = (VAR_5 + 1) % FUNC_0(VAR_3);
 }
 FUNC_2();
 return VAR_6;
}
