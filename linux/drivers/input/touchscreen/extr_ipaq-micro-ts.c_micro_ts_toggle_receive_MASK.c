
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct touchscreen_data {struct ipaq_micro* micro; } ;
struct ipaq_micro {int lock; struct touchscreen_data* ts_data; int * ts; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct touchscreen_data *VAR_1, bool VAR_2)
{
 struct ipaq_micro *VAR_3 = VAR_1->micro;

 FUNC_0(&VAR_3->lock);

 if (VAR_2) {
  VAR_3->ts = VAR_0;
  VAR_3->ts_data = VAR_1;
 } else {
  VAR_3->ts = ((void*)0);
  VAR_3->ts_data = ((void*)0);
 }

 FUNC_1(&VAR_1->micro->lock);
}
