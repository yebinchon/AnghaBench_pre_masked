
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdei_event {scalar_t__ type; int private_registered; struct sdei_event* registered; int list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdei_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sdei_event *VAR_3)
{
 FUNC_3(&VAR_1);

 FUNC_4(&VAR_2);
 FUNC_2(&VAR_3->list);
 FUNC_5(&VAR_2);

 if (VAR_3->type == VAR_0)
  FUNC_1(VAR_3->registered);
 else
  FUNC_0(VAR_3->private_registered);

 FUNC_1(VAR_3);
}
