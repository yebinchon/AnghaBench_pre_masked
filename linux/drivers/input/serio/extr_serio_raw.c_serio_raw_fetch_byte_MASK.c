
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw {size_t head; size_t tail; char* queue; int serio; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct serio_raw *VAR_1, char *VAR_2)
{
 bool VAR_3;

 FUNC_1(VAR_1->serio);

 VAR_3 = VAR_1->head == VAR_1->tail;
 if (!VAR_3) {
  *VAR_2 = VAR_1->queue[VAR_1->tail];
  VAR_1->tail = (VAR_1->tail + 1) % VAR_0;
 }

 FUNC_0(VAR_1->serio);

 return !VAR_3;
}
