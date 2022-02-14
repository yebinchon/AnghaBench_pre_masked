
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct diff_queue_struct {int nr; int * queue; } ;
struct diff_options {int dummy; } ;


 int FUNC_0 (struct diff_queue_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct diff_options*,struct object_id*,int,int) ;
 struct diff_queue_struct VAR_0 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct diff_options *VAR_1, struct object_id *VAR_2, int VAR_3, int VAR_4)
{
 struct diff_queue_struct *VAR_5 = &VAR_0;
 int VAR_6;
 int VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5->nr; VAR_6++)
  FUNC_1(VAR_5->queue[VAR_6]);

 FUNC_3(VAR_5->queue);
 FUNC_0(VAR_5);

 return VAR_7;
}
