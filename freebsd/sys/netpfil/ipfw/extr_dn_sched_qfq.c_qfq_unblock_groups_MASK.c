
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct qfq_sched {int * bitmaps; } ;
struct qfq_group {int F; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned long FUNC_0 (int ,int) ;
 struct qfq_group* FUNC_1 (struct qfq_sched*,unsigned long) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct qfq_sched*,unsigned long,int ,size_t) ;

__attribute__((used)) static inline void
FUNC_4(struct qfq_sched *VAR_4, int VAR_5, uint64_t VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_4->bitmaps[VAR_1], VAR_5 + 1);
 struct qfq_group *VAR_8;

 if (VAR_7) {
  VAR_8 = FUNC_1(VAR_4, VAR_7);
  if (!FUNC_2(VAR_8->F, VAR_6))
   return;
 }

 VAR_7 = (1UL << VAR_5) - 1;
 FUNC_3(VAR_4, VAR_7, VAR_0, VAR_1);
 FUNC_3(VAR_4, VAR_7, VAR_2, VAR_3);
}
