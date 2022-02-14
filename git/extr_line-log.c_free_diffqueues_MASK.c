
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_queue_struct {int nr; int * queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct diff_queue_struct*) ;

__attribute__((used)) static void FUNC_2(int VAR_0, struct diff_queue_struct *VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  for (VAR_3 = 0; VAR_3 < VAR_1[VAR_2].nr; VAR_3++)
   FUNC_0(VAR_1[VAR_2].queue[VAR_3]);
 FUNC_1(VAR_1);
}
