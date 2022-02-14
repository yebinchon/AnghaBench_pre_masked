
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {unsigned int nr_levels; } ;
struct smq_policy {struct queue dirty; } ;
struct entry {int dummy; } ;


 int FUNC_0 (struct queue*,struct entry*) ;
 int FUNC_1 (struct queue*,struct entry*) ;
 struct entry* FUNC_2 (struct smq_policy*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct smq_policy *VAR_0)
{
 unsigned VAR_1;
 struct queue *VAR_2 = &VAR_0->dirty;
 struct entry *VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_2->nr_levels; VAR_1++) {
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_2, VAR_3);
  FUNC_1(VAR_2, VAR_3);
 }
}
