
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct gb_operation {int work; } ;


 int VAR_0 ;
 struct gb_operation* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct gb_operation*,int ) ;
 struct gb_operation* VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct gb_operation *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 if (FUNC_1(VAR_5, -VAR_0)) {




  FUNC_2(VAR_1, &VAR_5->work);
 }
}
