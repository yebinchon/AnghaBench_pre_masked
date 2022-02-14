
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obj_order {int obj; } ;
struct diff_queue_struct {int nr; int * queue; } ;


 int FUNC_0 (struct obj_order*,int) ;
 struct diff_queue_struct VAR_0 ;
 int FUNC_1 (struct obj_order*) ;
 int FUNC_2 (char const*,int ,struct obj_order*,int) ;
 int VAR_1 ;

void FUNC_3(const char *VAR_2)
{
 struct diff_queue_struct *VAR_3 = &VAR_0;
 struct obj_order *VAR_4;
 int VAR_5;

 if (!VAR_3->nr)
  return;

 FUNC_0(VAR_4, VAR_3->nr);
 for (VAR_5 = 0; VAR_5 < VAR_3->nr; VAR_5++)
  VAR_4[VAR_5].obj = VAR_3->queue[VAR_5];
 FUNC_2(VAR_2, VAR_1, VAR_4, VAR_3->nr);
 for (VAR_5 = 0; VAR_5 < VAR_3->nr; VAR_5++)
  VAR_3->queue[VAR_5] = VAR_4[VAR_5].obj;
 FUNC_1(VAR_4);
 return;
}
