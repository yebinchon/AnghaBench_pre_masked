
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct qfq_sched {int* bitmaps; int V; } ;
struct qfq_group {int S; } ;
typedef int bitmap ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct qfq_group* FUNC_0 (struct qfq_sched*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qfq_sched*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct qfq_sched *VAR_3, uint64_t VAR_4)
{
 bitmap VAR_5;

 VAR_5 = VAR_3->bitmaps[VAR_2] | VAR_3->bitmaps[VAR_1];
 if (VAR_5) {
  if (!VAR_3->bitmaps[VAR_0]) {
   struct qfq_group *VAR_6;
   VAR_6 = FUNC_0(VAR_3, VAR_5);
   if (FUNC_1(VAR_6->S, VAR_3->V))
    VAR_3->V = VAR_6->S;
  }
  FUNC_2(VAR_3, VAR_4);
 }
}
