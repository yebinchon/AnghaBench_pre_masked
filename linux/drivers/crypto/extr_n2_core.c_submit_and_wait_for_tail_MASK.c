
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int dummy; } ;
struct cwq_initial_entry {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct spu_queue*,struct cwq_initial_entry*) ;
 unsigned long FUNC_1 (struct spu_queue*) ;

__attribute__((used)) static unsigned long FUNC_2(struct spu_queue *VAR_1,
           struct cwq_initial_entry *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == VAR_0)
  VAR_3 = FUNC_1(VAR_1);

 return VAR_3;
}
