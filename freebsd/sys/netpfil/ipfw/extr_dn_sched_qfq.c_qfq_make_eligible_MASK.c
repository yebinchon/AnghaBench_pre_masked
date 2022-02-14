
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct qfq_sched {unsigned long V; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct qfq_sched*,unsigned long,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct qfq_sched *VAR_5, uint64_t VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;

 VAR_8 = VAR_5->V >> VAR_4;
 VAR_9 = VAR_6 >> VAR_4;

 if (VAR_8 != VAR_9) {

  VAR_7 = (2ULL << (FUNC_0(VAR_8 ^ VAR_9))) - 1;
  FUNC_1(VAR_5, VAR_7, VAR_3, VAR_1);
  FUNC_1(VAR_5, VAR_7, VAR_2, VAR_0);
 }
}
