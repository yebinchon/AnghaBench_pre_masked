
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {struct queue* live; } ;
struct params {int state; int guess; struct queue* q; } ;


 int VAR_0 ;
 int FUNC_0 (struct queue*) ;
 int FUNC_1 (struct params*,int ) ;

void FUNC_2(struct params *VAR_1)
{
 struct queue *VAR_2 = VAR_1->q;
 int VAR_3;

 FUNC_0(VAR_2);
 FUNC_0(VAR_2->live);

 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  FUNC_1(VAR_1, VAR_1->guess++);
 }

 VAR_1->state = VAR_0;
}
