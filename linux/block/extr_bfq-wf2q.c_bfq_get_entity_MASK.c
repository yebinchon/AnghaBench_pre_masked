
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int ref; int bfqd; } ;
struct bfq_entity {int dummy; } ;


 struct bfq_queue* FUNC_0 (struct bfq_entity*) ;
 int FUNC_1 (int ,struct bfq_queue*,char*,struct bfq_queue*,int ) ;

__attribute__((used)) static void FUNC_2(struct bfq_entity *VAR_0)
{
 struct bfq_queue *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1) {
  VAR_1->ref++;
  FUNC_1(VAR_1->bfqd, VAR_1, "get_entity: %p %d",
        VAR_1, VAR_1->ref);
 }
}
