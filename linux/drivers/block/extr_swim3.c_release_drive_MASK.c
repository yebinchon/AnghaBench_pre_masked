
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct floppy_state {size_t index; int state; } ;
struct TYPE_2__ {struct request_queue* queue; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct floppy_state *VAR_3)
{
 struct request_queue *VAR_4 = VAR_0[VAR_3->index]->queue;
 unsigned long VAR_5;

 FUNC_6("%s", "-> release drive\n");

 FUNC_4(&VAR_2, VAR_5);
 VAR_3->state = VAR_1;
 FUNC_5(&VAR_2, VAR_5);

 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
}
